//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface _TtC8xianliao28SGPayXmallOrderByBankCardReq : SGHTTPSReqModel
{
    // Error parsing type: , name: transactionId
    // Error parsing type: , name: orderAmount
    // Error parsing type: , name: payPasswd
    // Error parsing type: , name: bankCardNo
    // Error parsing type: , name: validateToken
}

- (void).cxx_destruct;
- (id)init;
- (int)constructor;
@property(nonatomic, copy) NSString *validateToken; // @synthesize validateToken;
@property(nonatomic, copy) NSString *bankCardNo; // @synthesize bankCardNo;
@property(nonatomic, copy) NSString *payPasswd; // @synthesize payPasswd;
@property(nonatomic) long long orderAmount; // @synthesize orderAmount;
@property(nonatomic, copy) NSString *transactionId; // @synthesize transactionId;

@end

