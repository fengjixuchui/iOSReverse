//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSString;

@interface SGGetJrmfDestUidOrGroupIdResp : SGHTTPSResponseModel
{
    NSString *_jrmfDestUserId;
    NSString *_jrmfDesGroupId;
}

+ (int)constructor;
@property(copy, nonatomic) NSString *jrmfDesGroupId; // @synthesize jrmfDesGroupId=_jrmfDesGroupId;
@property(copy, nonatomic) NSString *jrmfDestUserId; // @synthesize jrmfDestUserId=_jrmfDestUserId;
- (void).cxx_destruct;

@end

