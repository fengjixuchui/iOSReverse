//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface BriefDialog : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundImage; // @dynamic backgroundImage;
@property(nonatomic) _Bool blockFlag; // @dynamic blockFlag;
@property(nonatomic) _Bool burnAfterReadingFlag; // @dynamic burnAfterReadingFlag;
@property(nonatomic) long long destId; // @dynamic destId;
@property(copy, nonatomic) NSString *dialogTitle; // @dynamic dialogTitle;
@property(nonatomic) _Bool groupFlag; // @dynamic groupFlag;
@property(retain, nonatomic) NSMutableArray *groupMemberSmallAvatarURLArray; // @dynamic groupMemberSmallAvatarURLArray;
@property(readonly, nonatomic) unsigned long long groupMemberSmallAvatarURLArray_Count; // @dynamic groupMemberSmallAvatarURLArray_Count;
@property(nonatomic) _Bool groupPrivilegeFlag; // @dynamic groupPrivilegeFlag;
@property(copy, nonatomic) NSString *interestTribeTypeSmallAvatarURL; // @dynamic interestTribeTypeSmallAvatarURL;
@property(copy, nonatomic) NSString *interestTribeTypeVipSmallAvatarURL; // @dynamic interestTribeTypeVipSmallAvatarURL;
@property(nonatomic) _Bool muteFlag; // @dynamic muteFlag;
@property(copy, nonatomic) NSString *smallAvatarURL; // @dynamic smallAvatarURL;
@property(nonatomic) _Bool stickyFlag; // @dynamic stickyFlag;
@property(nonatomic) _Bool takeScreenshotFlag; // @dynamic takeScreenshotFlag;
@property(nonatomic) int totalMemberNumber; // @dynamic totalMemberNumber;

@end

