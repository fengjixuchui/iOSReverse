//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@interface SGGetJrmfDestUidOrGroupIdReq : SGHTTPSReqModel
{
    long long _destUserId;
    long long _destGroupId;
}

@property(nonatomic) long long destGroupId; // @synthesize destGroupId=_destGroupId;
@property(nonatomic) long long destUserId; // @synthesize destUserId=_destUserId;
- (int)constructor;

@end

