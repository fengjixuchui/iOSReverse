//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@interface SGDeleteWxpayAuthResp : SGHTTPSResponseModel
{
    int _leftPasswdTryTimes;
    long long _unlockTime;
}

+ (int)constructor;
@property(nonatomic) int leftPasswdTryTimes; // @synthesize leftPasswdTryTimes=_leftPasswdTryTimes;
@property(nonatomic) long long unlockTime; // @synthesize unlockTime=_unlockTime;

@end

