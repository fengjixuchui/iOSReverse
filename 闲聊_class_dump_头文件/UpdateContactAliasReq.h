//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface UpdateContactAliasReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *aliasDesp; // @dynamic aliasDesp;
@property(retain, nonatomic) NSMutableArray *aliasMobileArray; // @dynamic aliasMobileArray;
@property(readonly, nonatomic) unsigned long long aliasMobileArray_Count; // @dynamic aliasMobileArray_Count;
@property(copy, nonatomic) NSString *destAlias; // @dynamic destAlias;
@property(nonatomic) long long destId; // @dynamic destId;

@end

