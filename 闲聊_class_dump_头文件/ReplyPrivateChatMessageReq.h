//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ReplyPrivateChatMessageReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long destId; // @dynamic destId;
@property(nonatomic) long long localId; // @dynamic localId;
@property(copy, nonatomic) NSString *mediaAttribute; // @dynamic mediaAttribute;
@property(copy, nonatomic) NSString *mediaAttributeReferenced; // @dynamic mediaAttributeReferenced;
@property(nonatomic) int mediaConstructor; // @dynamic mediaConstructor;
@property(nonatomic) int mediaConstructorReferenced; // @dynamic mediaConstructorReferenced;
@property(nonatomic) _Bool mediaFlag; // @dynamic mediaFlag;
@property(nonatomic) _Bool mediaFlagReferenced; // @dynamic mediaFlagReferenced;
@property(nonatomic) long long msgDestIdReferenced; // @dynamic msgDestIdReferenced;
@property(nonatomic) long long msgIdReferenced; // @dynamic msgIdReferenced;
@property(copy, nonatomic) NSString *msgPostContent; // @dynamic msgPostContent;
@property(copy, nonatomic) NSString *msgPostContentReferenced; // @dynamic msgPostContentReferenced;
@property(copy, nonatomic) NSString *msgPreContent; // @dynamic msgPreContent;
@property(copy, nonatomic) NSString *msgPreContentReferenced; // @dynamic msgPreContentReferenced;
@property(nonatomic) long long msgSendTimeReferenced; // @dynamic msgSendTimeReferenced;
@property(nonatomic) long long msgSrcIdReferenced; // @dynamic msgSrcIdReferenced;

@end

