//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGGetSupplierInfoWithInviteCodeReq : SGHTTPSReqModel
{
    long long _groupId;
    NSString *_inviteCode;
}

@property(copy, nonatomic) NSString *inviteCode; // @synthesize inviteCode=_inviteCode;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (int)constructor;

@end

