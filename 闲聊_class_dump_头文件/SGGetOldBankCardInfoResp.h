//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSString;

@interface SGGetOldBankCardInfoResp : SGHTTPSResponseModel
{
    NSString *_bankName;
    NSString *_cardType;
    NSString *_brand;
    NSString *_province;
    NSString *_city;
    NSString *_branch;
}

+ (int)constructor;
@property(copy, nonatomic) NSString *branch; // @synthesize branch=_branch;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
- (void).cxx_destruct;

@end

