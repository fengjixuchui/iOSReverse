//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class GoodsDetail, NSArray;

@interface SGGetGroupGoodsDetailResp : SGHTTPSResponseModel
{
    int _groupbuyUserNum;
    GoodsDetail *_goods;
    long long _systemTimestamp;
    NSArray *_teams;
}

+ (id)modelContainerPropertyGenericClass;
+ (int)constructor;
@property(retain, nonatomic) NSArray *teams; // @synthesize teams=_teams;
@property(nonatomic) int groupbuyUserNum; // @synthesize groupbuyUserNum=_groupbuyUserNum;
@property(nonatomic) long long systemTimestamp; // @synthesize systemTimestamp=_systemTimestamp;
@property(retain, nonatomic) GoodsDetail *goods; // @synthesize goods=_goods;
- (void).cxx_destruct;

@end

