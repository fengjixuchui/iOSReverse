//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface DeleteGroupChatUserResp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *groupTitle; // @dynamic groupTitle;
@property(copy, nonatomic) NSString *notification; // @dynamic notification;
@property(nonatomic) int successNum; // @dynamic successNum;

@end

