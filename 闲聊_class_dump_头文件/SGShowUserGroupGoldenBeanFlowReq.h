//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@interface SGShowUserGroupGoldenBeanFlowReq : SGHTTPSReqModel
{
    int _pageNo;
    int _pageSize;
    long long _groupId;
    long long _destId;
}

@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) long long destId; // @synthesize destId=_destId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (int)constructor;

@end

