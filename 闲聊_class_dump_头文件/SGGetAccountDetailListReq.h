//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGGetAccountDetailListReq : SGHTTPSReqModel
{
    int _pageNo;
    int _pageSize;
    long long _endTime;
    NSString *_month;
}

@property(copy, nonatomic) NSString *month; // @synthesize month=_month;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
- (void).cxx_destruct;
- (int)constructor;

@end

