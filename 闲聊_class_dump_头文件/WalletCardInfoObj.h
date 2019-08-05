//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WalletSubBankInfo;

@interface WalletCardInfoObj : NSObject
{
    _Bool _isNotUse;
    _Bool _isCardPay;
    _Bool _isThirdPay;
    _Bool _isNewCardPay;
    _Bool _isChargePay;
    _Bool _isTransferSuc;
    NSString *_bankCardName;
    NSString *_bankCardNo;
    NSString *_bankNo;
    NSString *_cardLimit;
    NSString *_cardlogo;
    NSString *_cardColor;
    WalletSubBankInfo *_provinceInfo;
    WalletSubBankInfo *_cityInfo;
}

@property(retain, nonatomic) WalletSubBankInfo *cityInfo; // @synthesize cityInfo=_cityInfo;
@property(retain, nonatomic) WalletSubBankInfo *provinceInfo; // @synthesize provinceInfo=_provinceInfo;
@property(retain, nonatomic) NSString *cardColor; // @synthesize cardColor=_cardColor;
@property(retain, nonatomic) NSString *cardlogo; // @synthesize cardlogo=_cardlogo;
@property(retain, nonatomic) NSString *cardLimit; // @synthesize cardLimit=_cardLimit;
@property(retain, nonatomic) NSString *bankNo; // @synthesize bankNo=_bankNo;
@property(retain, nonatomic) NSString *bankCardNo; // @synthesize bankCardNo=_bankCardNo;
@property(retain, nonatomic) NSString *bankCardName; // @synthesize bankCardName=_bankCardName;
@property(nonatomic) _Bool isTransferSuc; // @synthesize isTransferSuc=_isTransferSuc;
@property(nonatomic) _Bool isChargePay; // @synthesize isChargePay=_isChargePay;
@property(nonatomic) _Bool isNewCardPay; // @synthesize isNewCardPay=_isNewCardPay;
@property(nonatomic) _Bool isThirdPay; // @synthesize isThirdPay=_isThirdPay;
@property(nonatomic) _Bool isCardPay; // @synthesize isCardPay=_isCardPay;
@property(nonatomic) _Bool isNotUse; // @synthesize isNotUse=_isNotUse;
- (void).cxx_destruct;

@end

