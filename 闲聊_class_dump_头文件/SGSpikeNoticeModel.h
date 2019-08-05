//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SGAdvententModel;

@interface SGSpikeNoticeModel : NSObject
{
    NSString *_title;
    NSString *_goodsPhotoUrl;
    NSString *_goodsName;
    long long _groupId;
    long long _activityId;
    long long _goodsId;
    long long _price;
    long long _discountPrice;
    long long _beginningTime;
    NSString *_h5Url;
    NSString *_advertising;
    SGAdvententModel *_advertModel;
}

@property(retain, nonatomic) SGAdvententModel *advertModel; // @synthesize advertModel=_advertModel;
@property(copy, nonatomic) NSString *advertising; // @synthesize advertising=_advertising;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long beginningTime; // @synthesize beginningTime=_beginningTime;
@property(nonatomic) long long discountPrice; // @synthesize discountPrice=_discountPrice;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(nonatomic) long long goodsId; // @synthesize goodsId=_goodsId;
@property(nonatomic) long long activityId; // @synthesize activityId=_activityId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *goodsName; // @synthesize goodsName=_goodsName;
@property(copy, nonatomic) NSString *goodsPhotoUrl; // @synthesize goodsPhotoUrl=_goodsPhotoUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)getSpikeNoticeDesc:(long long)arg1;
- (id)getSpikeTitle;

@end

