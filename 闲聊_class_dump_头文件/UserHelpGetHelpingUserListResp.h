//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UserHelpGetHelpingUserListResp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(retain, nonatomic) NSMutableArray *helperArray; // @dynamic helperArray;
@property(readonly, nonatomic) unsigned long long helperArray_Count; // @dynamic helperArray_Count;
@property(nonatomic) _Bool meetRequirement; // @dynamic meetRequirement;

@end

