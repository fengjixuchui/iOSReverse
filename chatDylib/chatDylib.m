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

CHOptimizedMethod2(self, void, SGAppDelegate, application, UIApplication *, application, didFinishLaunchingWithOptions, NSDictionary *, options) {
    
    CHSuper2(SGAppDelegate, application, application, didFinishLaunchingWithOptions, options);
    
    NSLog(@"## Start Cycript ##");
    
//    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"大香蕉" message:@"阿亮带你飞" delegate:nil cancelButtonTitle:@"好的" otherButtonTitles:nil, nil];
//    [alert show];
    
    
//    UIImageView* pic = [[UIImageView alloc] initWithFrame:(CGRectMake(150, 50, 200, 400))];
//    pic.image = [UIImage imageNamed:@"icon"];
//    [application.keyWindow addSubview:pic];
    
    //    CYListenServer(CYCRIPT_PORT);
}

CHConstructor {
    @autoreleasepool {
        CHLoadLateClass(SGAppDelegate);
        CHClassHook0(SGAppDelegate, classMethod);
        CHHook2(SGAppDelegate, application, didFinishLaunchingWithOptions);
    }
}


