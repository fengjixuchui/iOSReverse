//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AesKeyAndIV, NSMutableArray, NSString, User;

@interface AuthSignIn2Resp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AesKeyAndIV *bodyAes; // @dynamic bodyAes;
@property(copy, nonatomic) NSString *cert; // @dynamic cert;
@property(nonatomic) int complaintLeftTimes; // @dynamic complaintLeftTimes;
@property(copy, nonatomic) NSString *complaintURL; // @dynamic complaintURL;
@property(retain, nonatomic) NSMutableArray *configItemListArray; // @dynamic configItemListArray;
@property(readonly, nonatomic) unsigned long long configItemListArray_Count; // @dynamic configItemListArray_Count;
@property(nonatomic) _Bool destroyAppInfoFlag; // @dynamic destroyAppInfoFlag;
@property(nonatomic) long long deviceId; // @dynamic deviceId;
@property(copy, nonatomic) NSString *dialogFileDomain; // @dynamic dialogFileDomain;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) int frozenDays; // @dynamic frozenDays;
@property(nonatomic) _Bool hasBodyAes; // @dynamic hasBodyAes;
@property(nonatomic) _Bool hasUser; // @dynamic hasUser;
@property(nonatomic) _Bool noEmail; // @dynamic noEmail;
@property(nonatomic) _Bool noNickName; // @dynamic noNickName;
@property(nonatomic) long long sessionId; // @dynamic sessionId;
@property(copy, nonatomic) NSString *shareFileDomain; // @dynamic shareFileDomain;
@property(retain, nonatomic) User *user; // @dynamic user;
@property(copy, nonatomic) NSString *userFileDomain; // @dynamic userFileDomain;
@property(nonatomic) _Bool xianliaoIdAlreadySetFlag; // @dynamic xianliaoIdAlreadySetFlag;

@end

