//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGVerifyCouponInvitationLinkReq : SGHTTPSReqModel
{
    long long _groupId;
    long long _sendId;
    long long _templateId;
    long long _invitedFromUid;
    long long _createTime;
    NSString *_paramString;
}

@property(copy, nonatomic) NSString *paramString; // @synthesize paramString=_paramString;
@property(nonatomic) long long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) long long invitedFromUid; // @synthesize invitedFromUid=_invitedFromUid;
@property(nonatomic) long long templateId; // @synthesize templateId=_templateId;
@property(nonatomic) long long sendId; // @synthesize sendId=_sendId;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (int)constructor;

@end

