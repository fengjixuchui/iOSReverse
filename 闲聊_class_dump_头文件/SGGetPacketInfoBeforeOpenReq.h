//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@interface SGGetPacketInfoBeforeOpenReq : SGHTTPSReqModel
{
    long long _packetID;
    long long _senderUid;
    long long _packetSendTime;
    long long _groupId;
}

@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long packetSendTime; // @synthesize packetSendTime=_packetSendTime;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(nonatomic) long long packetID; // @synthesize packetID=_packetID;
- (int)constructor;

@end

