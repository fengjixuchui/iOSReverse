//  weibo: http://weibo.com/xiaoqing28
//  blog:  http://www.alonemonkey.com
//
//  chatDylib.h
//  chatDylib
//
//  Created by Mac on 2019/8/5.
//  Copyright (c) 2019 XLsn0w. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define showAlert [[[UIAlertView alloc] initWithTitle:@"提示" message:@"大杰哥很丑" delegate:nil cancelButtonTitle:@"取消" otherButtonTitles:@"关闭", nil] show];

#define INSERT_SUCCESS_WELCOME "\n\n----------------注入 dylib 成功----------------\n\n"

@interface CustomViewController

@property (nonatomic, copy) NSString* newProperty;

+ (void)classMethod;

- (NSString*)getMyName;

- (void)newMethod:(NSString*) output;

@end
