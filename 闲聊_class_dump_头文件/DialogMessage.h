//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DialogMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool atFlag; // @dynamic atFlag;
@property(nonatomic) _Bool burnAfterReadingFlag; // @dynamic burnAfterReadingFlag;
@property(nonatomic) long long destId; // @dynamic destId;
@property(nonatomic) _Bool isOut; // @dynamic isOut;
@property(nonatomic) long long localId; // @dynamic localId;
@property(copy, nonatomic) NSString *mediaAttribute; // @dynamic mediaAttribute;
@property(nonatomic) int mediaConstructor; // @dynamic mediaConstructor;
@property(nonatomic) _Bool mediaFlag; // @dynamic mediaFlag;
@property(nonatomic) int msgCategory; // @dynamic msgCategory;
@property(nonatomic) long long msgId; // @dynamic msgId;
@property(nonatomic) long long msgIdReferenced; // @dynamic msgIdReferenced;
@property(copy, nonatomic) NSString *msgPostContent; // @dynamic msgPostContent;
@property(copy, nonatomic) NSString *msgPreContent; // @dynamic msgPreContent;
@property(nonatomic) long long msgSendTime; // @dynamic msgSendTime;
@property(nonatomic) int msgStatus; // @dynamic msgStatus;
@property(nonatomic) _Bool referenceFlag; // @dynamic referenceFlag;
@property(nonatomic) _Bool replyFlag; // @dynamic replyFlag;
@property(nonatomic) int senderCategory; // @dynamic senderCategory;
@property(nonatomic) long long seqno; // @dynamic seqno;
@property(nonatomic) _Bool sharingGroupFlag; // @dynamic sharingGroupFlag;
@property(nonatomic) long long srcId; // @dynamic srcId;

@end

