//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface _TtC8xianliao30SGSearchGoodsListWithParamsReq : SGHTTPSReqModel
{
    // Error parsing type: , name: groupId
    // Error parsing type: , name: query
    // Error parsing type: , name: sort
    // Error parsing type: , name: pageNo
    // Error parsing type: , name: pageSize
    // Error parsing type: , name: adminFlag
}

- (void).cxx_destruct;
- (id)init;
- (int)constructor;
@property(nonatomic) _Bool adminFlag; // @synthesize adminFlag;
@property(nonatomic) int pageSize; // @synthesize pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo;
@property(nonatomic) int sort; // @synthesize sort;
@property(nonatomic, copy) NSString *query; // @synthesize query;
@property(nonatomic) long long groupId; // @synthesize groupId;

@end

