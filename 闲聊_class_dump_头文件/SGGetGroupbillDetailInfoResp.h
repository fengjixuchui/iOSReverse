//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSMutableArray, NSString;

@interface SGGetGroupbillDetailInfoResp : SGHTTPSResponseModel
{
    unsigned char _billResult;
    unsigned char _billType;
    long long _sendUserId;
    NSString *_sendUserSmallAvatarUrl;
    NSString *_sendUserNickName;
    NSString *_descriptionInfo;
    long long _leftMilliseconds;
    NSMutableArray *_groupBillUserList;
}

+ (id)modelContainerPropertyGenericClass;
+ (int)constructor;
@property(retain, nonatomic) NSMutableArray *groupBillUserList; // @synthesize groupBillUserList=_groupBillUserList;
@property(nonatomic) long long leftMilliseconds; // @synthesize leftMilliseconds=_leftMilliseconds;
@property(nonatomic) unsigned char billType; // @synthesize billType=_billType;
@property(nonatomic) unsigned char billResult; // @synthesize billResult=_billResult;
@property(copy, nonatomic) NSString *descriptionInfo; // @synthesize descriptionInfo=_descriptionInfo;
@property(copy, nonatomic) NSString *sendUserNickName; // @synthesize sendUserNickName=_sendUserNickName;
@property(copy, nonatomic) NSString *sendUserSmallAvatarUrl; // @synthesize sendUserSmallAvatarUrl=_sendUserSmallAvatarUrl;
@property(nonatomic) long long sendUserId; // @synthesize sendUserId=_sendUserId;
- (void).cxx_destruct;

@end

