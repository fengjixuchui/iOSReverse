//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGH5DepositReq : SGHTTPSReqModel
{
    unsigned char _payType;
    long long _depositAmount;
    NSString *_inJumpUrl;
}

@property(copy, nonatomic) NSString *inJumpUrl; // @synthesize inJumpUrl=_inJumpUrl;
@property(nonatomic) unsigned char payType; // @synthesize payType=_payType;
@property(nonatomic) long long depositAmount; // @synthesize depositAmount=_depositAmount;
- (void).cxx_destruct;
- (int)constructor;

@end

