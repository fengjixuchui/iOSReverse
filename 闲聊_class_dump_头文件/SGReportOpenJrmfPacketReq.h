//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSString;

@interface SGReportOpenJrmfPacketReq : SGHTTPSReqModel
{
    NSString *_redPacketId;
    long long _senderId;
}

@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *redPacketId; // @synthesize redPacketId=_redPacketId;
- (void).cxx_destruct;
- (int)constructor;

@end

