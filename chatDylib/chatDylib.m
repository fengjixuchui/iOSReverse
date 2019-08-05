//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  chatDylib.m
//  chatDylib
//
//  Created by Mac on 2019/8/5.
//  Copyright (c) 2019 XLsn0w. All rights reserved.
//

#import "chatDylib.h"
#import <CaptainHook/CaptainHook.h>
#import <UIKit/UIKit.h>
#import <Cycript/Cycript.h>
#import <MDCycriptManager.h>

/// Cycript端口号
#define Cycript_Port 6666

#define showAlertView [[[UIAlertView alloc] initWithTitle:@"大香蕉" message:@"阿亮带你飞" delegate:nil cancelButtonTitle:@"好的" otherButtonTitles:nil, nil] show]

/// 在CHConstructor中使用CHLoadClass()或CHLoadLateClass()加载类
/// 在CHConstructor中使用CHHook() hook method
CHConstructor {
    printf("\n\n----------------注入 dylib 成功----------------\n\n");
    
    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
        
#ifndef __OPTIMIZE__
        CYListenServer(Cycript_Port);
        
        MDCycriptManager* manager = [MDCycriptManager sharedInstance];
        [manager loadCycript:NO];
        
        NSError* error;
        NSString* result = [manager evaluateCycript:@"UIApp" error:&error];
        NSLog(@"result: %@", result);
        if(error.code != 0){
            NSLog(@"error: %@", error.localizedDescription);
        }
#endif
        
    }];
}

CHDeclareClass(SGAppDelegate);///定义一个类

CHOptimizedClassMethod0(self, void, SGAppDelegate, classMethod){
    NSLog(@"hook class method");
    /// (可选)使用CHSuper()调用旧方法
    CHSuper0(SGAppDelegate, classMethod);
}

/// - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
CHOptimizedMethod2(self, void, SGAppDelegate, application, UIApplication *, application, didFinishLaunchingWithOptions, NSDictionary *, launchOptions) {
    
    CHSuper2(SGAppDelegate, application, application, didFinishLaunchingWithOptions, launchOptions);
    
    NSLog(@"## Start Cycript ##");
    
//    showAlertView;
    
    
//    UIImageView* pic = [[UIImageView alloc] initWithFrame:(CGRectMake(150, 50, 200, 400))];
//    pic.image = [UIImage imageNamed:@"icon"];
//    [application.keyWindow addSubview:pic];
    
    //    CYListenServer(CYCRIPT_PORT);
}

CHDeclareClass(SGLoginPasswordViewController);///定义一个类

CHOptimizedMethod0(self, void, SGLoginPasswordViewController, viewDidLoad) {
    CHSuper0(SGLoginPasswordViewController, viewDidLoad);
    showAlertView;
}

/// - (void)sgTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
CHOptimizedMethod2(self, void, SGLoginPasswordViewController, sgTableView, id, arg1, didSelectRowAtIndexPath, id , arg2) {
    CHSuper2(SGLoginPasswordViewController, sgTableView, arg1, didSelectRowAtIndexPath, arg2);
    showAlertView;
}

CHConstructor {
    @autoreleasepool {
        CHLoadLateClass(SGAppDelegate);
        CHClassHook0(SGAppDelegate, classMethod);
        CHClassHook0(SGLoginPasswordViewController, viewDidLoad);
        CHHook2(SGAppDelegate, application, didFinishLaunchingWithOptions);
        CHHook2(SGLoginPasswordViewController, sgTableView, didSelectRowAtIndexPath);
    }
}


