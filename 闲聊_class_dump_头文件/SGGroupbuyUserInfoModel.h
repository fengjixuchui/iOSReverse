//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGGroupbuyUserInfoModel : NSObject
{
    long long _userId;
    NSString *_nickName;
    NSString *_smallAvatarUrl;
}

@property(copy, nonatomic) NSString *smallAvatarUrl; // @synthesize smallAvatarUrl=_smallAvatarUrl;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

