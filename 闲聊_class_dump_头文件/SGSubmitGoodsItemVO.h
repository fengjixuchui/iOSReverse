//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SGMomentExtraInfoVO;

@interface SGSubmitGoodsItemVO : NSObject
{
    long long _goodsId;
    long long _skuId;
    long long _skuNum;
    long long _payAmount;
    long long _goldenbeanNum;
    NSArray *_messageBoardList;
    SGMomentExtraInfoVO *_momentExtraInfo;
    long long _teamId;
    long long _groupbuyId;
}

@property(nonatomic) long long groupbuyId; // @synthesize groupbuyId=_groupbuyId;
@property(nonatomic) long long teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) SGMomentExtraInfoVO *momentExtraInfo; // @synthesize momentExtraInfo=_momentExtraInfo;
@property(retain, nonatomic) NSArray *messageBoardList; // @synthesize messageBoardList=_messageBoardList;
@property(nonatomic) long long goldenbeanNum; // @synthesize goldenbeanNum=_goldenbeanNum;
@property(nonatomic) long long payAmount; // @synthesize payAmount=_payAmount;
@property(nonatomic) long long skuNum; // @synthesize skuNum=_skuNum;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
@property(nonatomic) long long goodsId; // @synthesize goodsId=_goodsId;
- (void).cxx_destruct;

@end

