//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@interface SGGetIdBeforeWithdrawResp : SGHTTPSResponseModel
{
    long long _withdrawId;
    long long _cashAmount;
    long long _unlockTime;
    long long _leftWithdrawAmount;
}

+ (int)constructor;
@property(nonatomic) long long leftWithdrawAmount; // @synthesize leftWithdrawAmount=_leftWithdrawAmount;
@property(nonatomic) long long unlockTime; // @synthesize unlockTime=_unlockTime;
@property(nonatomic) long long cashAmount; // @synthesize cashAmount=_cashAmount;
@property(nonatomic) long long withdrawId; // @synthesize withdrawId=_withdrawId;

@end

