//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSReqModel.h"

@class NSMutableArray, NSString;

@interface SGCreateGroupbillReq : SGHTTPSReqModel
{
    unsigned char _billType;
    long long _billId;
    long long _groupId;
    NSString *_descriptionInfo;
    NSMutableArray *_participatorList;
}

@property(retain, nonatomic) NSMutableArray *participatorList; // @synthesize participatorList=_participatorList;
@property(copy, nonatomic) NSString *descriptionInfo; // @synthesize descriptionInfo=_descriptionInfo;
@property(nonatomic) unsigned char billType; // @synthesize billType=_billType;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
@property(nonatomic) long long billId; // @synthesize billId=_billId;
- (void).cxx_destruct;
- (int)constructor;

@end

