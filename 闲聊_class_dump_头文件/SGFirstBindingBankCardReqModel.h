//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGFirstBindingBankCardReqModel : SGHTTPSReqModel
{
    NSString *_cardNo;
    NSString *_bankName;
    NSString *_cardType;
    NSString *_province;
    NSString *_city;
    NSString *_branch;
    NSString *_realName;
    NSString *_mobile;
    NSString *_certNo;
    NSString *_validStr;
    NSString *_paymentPasswd;
}

@property(copy, nonatomic) NSString *paymentPasswd; // @synthesize paymentPasswd=_paymentPasswd;
@property(copy, nonatomic) NSString *validStr; // @synthesize validStr=_validStr;
@property(copy, nonatomic) NSString *certNo; // @synthesize certNo=_certNo;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *cardNo; // @synthesize cardNo=_cardNo;
- (void).cxx_destruct;
- (int)constructor;

@end

