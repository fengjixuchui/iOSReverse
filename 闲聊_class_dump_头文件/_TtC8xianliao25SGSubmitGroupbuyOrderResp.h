//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSArray, NSString;

@interface _TtC8xianliao25SGSubmitGroupbuyOrderResp : SGHTTPSResponseModel
{
    // Error parsing type: , name: transactionId
    // Error parsing type: , name: payToken
    // Error parsing type: , name: teamId
    // Error parsing type: , name: orderNoList
}

+ (int)constructor;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *orderNoList; // @synthesize orderNoList;
@property(nonatomic) long long teamId; // @synthesize teamId;
@property(nonatomic, copy) NSString *payToken; // @synthesize payToken;
@property(nonatomic, copy) NSString *transactionId; // @synthesize transactionId;

@end

