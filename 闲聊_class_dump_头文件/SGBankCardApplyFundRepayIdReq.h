//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGBankCardApplyFundRepayIdReq : SGHTTPSReqModel
{
    NSString *_bankCardNo;
    long long _repayAmount;
}

@property(nonatomic) long long repayAmount; // @synthesize repayAmount=_repayAmount;
@property(copy, nonatomic) NSString *bankCardNo; // @synthesize bankCardNo=_bankCardNo;
- (void).cxx_destruct;
- (int)constructor;

@end

