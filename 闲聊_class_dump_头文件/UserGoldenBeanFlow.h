//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface UserGoldenBeanFlow : NSObject
{
    unsigned char _flowType;
    int _type;
    long long _time;
    long long _transactionGBean;
    long long _leftGBean;
    long long _fromId;
    NSString *_fromNickName;
    NSString *_giftName;
    NSString *_giftName_EN;
    NSString *_giftName_ZH_TW;
}

@property(copy, nonatomic) NSString *giftName_ZH_TW; // @synthesize giftName_ZH_TW=_giftName_ZH_TW;
@property(copy, nonatomic) NSString *giftName_EN; // @synthesize giftName_EN=_giftName_EN;
@property(copy, nonatomic) NSString *giftName; // @synthesize giftName=_giftName;
@property(copy, nonatomic) NSString *fromNickName; // @synthesize fromNickName=_fromNickName;
@property(nonatomic) long long fromId; // @synthesize fromId=_fromId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) long long leftGBean; // @synthesize leftGBean=_leftGBean;
@property(nonatomic) long long transactionGBean; // @synthesize transactionGBean=_transactionGBean;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) unsigned char flowType; // @synthesize flowType=_flowType;
- (void).cxx_destruct;

@end

