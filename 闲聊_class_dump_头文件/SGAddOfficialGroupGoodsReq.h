//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@interface SGAddOfficialGroupGoodsReq : SGHTTPSReqModel
{
    long long _groupId;
    long long _goodsId;
}

@property(nonatomic) long long goodsId; // @synthesize goodsId=_goodsId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (int)constructor;

@end

