//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSString;

@interface SGSGShowDemandResp : SGHTTPSResponseModel
{
    unsigned char _demandResult;
    int _beDemandBeanNum;
    long long _sendUserId;
    NSString *_sendUserSmallAvatarUrl;
    NSString *_sendUserNickName;
    long long _beDemandUserId;
    NSString *_beDemandUserSmallAvatarUrl;
    NSString *_beDemandUserNickName;
    long long _dealTime;
    NSString *_remark;
    long long _leftMilliseconds;
    long long _demandSendTime;
}

+ (int)constructor;
@property(nonatomic) long long demandSendTime; // @synthesize demandSendTime=_demandSendTime;
@property(nonatomic) long long leftMilliseconds; // @synthesize leftMilliseconds=_leftMilliseconds;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) unsigned char demandResult; // @synthesize demandResult=_demandResult;
@property(nonatomic) long long dealTime; // @synthesize dealTime=_dealTime;
@property(nonatomic) int beDemandBeanNum; // @synthesize beDemandBeanNum=_beDemandBeanNum;
@property(copy, nonatomic) NSString *beDemandUserNickName; // @synthesize beDemandUserNickName=_beDemandUserNickName;
@property(copy, nonatomic) NSString *beDemandUserSmallAvatarUrl; // @synthesize beDemandUserSmallAvatarUrl=_beDemandUserSmallAvatarUrl;
@property(nonatomic) long long beDemandUserId; // @synthesize beDemandUserId=_beDemandUserId;
@property(copy, nonatomic) NSString *sendUserNickName; // @synthesize sendUserNickName=_sendUserNickName;
@property(copy, nonatomic) NSString *sendUserSmallAvatarUrl; // @synthesize sendUserSmallAvatarUrl=_sendUserSmallAvatarUrl;
@property(nonatomic) long long sendUserId; // @synthesize sendUserId=_sendUserId;
- (void).cxx_destruct;

@end

