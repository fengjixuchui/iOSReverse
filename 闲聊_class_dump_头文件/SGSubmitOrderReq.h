//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSArray;

@interface SGSubmitOrderReq : SGHTTPSReqModel
{
    long long _groupId;
    long long _addressId;
    long long _totalAmount;
    NSArray *_goodsItemList;
    long long _receiveCouponId;
    long long _addressType;
}

@property(nonatomic) long long addressType; // @synthesize addressType=_addressType;
@property(nonatomic) long long receiveCouponId; // @synthesize receiveCouponId=_receiveCouponId;
@property(retain, nonatomic) NSArray *goodsItemList; // @synthesize goodsItemList=_goodsItemList;
@property(nonatomic) long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) long long addressId; // @synthesize addressId=_addressId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (int)constructor;

@end

