//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@interface SGSendGroupRandomPacketFromAllinpayResp : SGHTTPSResponseModel
{
    int _leftPasswdTryTimes;
    int _packetType;
    long long _packetId;
    long long _msgId;
    long long _packetSendTime;
    long long _unlockTime;
}

+ (int)constructor;
@property(nonatomic) int packetType; // @synthesize packetType=_packetType;
@property(nonatomic) int leftPasswdTryTimes; // @synthesize leftPasswdTryTimes=_leftPasswdTryTimes;
@property(nonatomic) long long unlockTime; // @synthesize unlockTime=_unlockTime;
@property(nonatomic) long long packetSendTime; // @synthesize packetSendTime=_packetSendTime;
@property(nonatomic) long long msgId; // @synthesize msgId=_msgId;
@property(nonatomic) long long packetId; // @synthesize packetId=_packetId;

@end

