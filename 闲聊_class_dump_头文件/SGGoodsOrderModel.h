//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGGoodsOrderModel : NSObject
{
    int _buyNum;
    long long _buyerUserId;
    NSString *_buyerNickname;
    NSString *_buyerSmallAvatarUrl;
    long long _sellUserId;
    NSString *_sellNickname;
    NSString *_sellSmallAvatarUrl;
    long long _totalAmount;
    long long _groupId;
    NSString *_groupTitle;
    NSString *_goodsName;
    NSString *_orderNoList;
}

@property(copy, nonatomic) NSString *orderNoList; // @synthesize orderNoList=_orderNoList;
@property(nonatomic) int buyNum; // @synthesize buyNum=_buyNum;
@property(copy, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(copy, nonatomic) NSString *groupTitle; // @synthesize groupTitle=_groupTitle;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(copy, nonatomic) NSString *sellSmallAvatarUrl; // @synthesize sellSmallAvatarUrl=_sellSmallAvatarUrl;
@property(copy, nonatomic) NSString *sellNickname; // @synthesize sellNickname=_sellNickname;
@property(nonatomic) long long sellUserId; // @synthesize sellUserId=_sellUserId;
@property(copy, nonatomic) NSString *buyerSmallAvatarUrl; // @synthesize buyerSmallAvatarUrl=_buyerSmallAvatarUrl;
@property(copy, nonatomic) NSString *buyerNickname; // @synthesize buyerNickname=_buyerNickname;
@property(nonatomic) long long buyerUserId; // @synthesize buyerUserId=_buyerUserId;
- (void).cxx_destruct;

@end

