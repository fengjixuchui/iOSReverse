//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGAddNewGroupGoodsReq : SGHTTPSReqModel
{
    long long _groupId;
    NSString *_goodsName;
    NSString *_goodsSmallPhotoUrl;
    NSString *_goodsBigPhotoUrl;
    NSString *_remark;
    NSString *_linkUrl;
    long long _goodsAmount;
    long long _goldenBeanNum;
    long long _officialGoodsId;
}

@property(nonatomic) long long officialGoodsId; // @synthesize officialGoodsId=_officialGoodsId;
@property(nonatomic) long long goldenBeanNum; // @synthesize goldenBeanNum=_goldenBeanNum;
@property(nonatomic) long long goodsAmount; // @synthesize goodsAmount=_goodsAmount;
@property(copy, nonatomic) NSString *linkUrl; // @synthesize linkUrl=_linkUrl;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *goodsBigPhotoUrl; // @synthesize goodsBigPhotoUrl=_goodsBigPhotoUrl;
@property(copy, nonatomic) NSString *goodsSmallPhotoUrl; // @synthesize goodsSmallPhotoUrl=_goodsSmallPhotoUrl;
@property(copy, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (int)constructor;

@end

