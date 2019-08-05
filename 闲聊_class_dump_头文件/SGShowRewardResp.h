//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGHTTPSResponseModel.h"

@class NSArray, NSString;

@interface SGShowRewardResp : SGHTTPSResponseModel
{
    unsigned char _rewardType;
    unsigned char _isExpired;
    int _receiveBeanNum;
    int _totalRewardNum;
    int _alreadyRewardNum;
    int _totalBeanNum;
    int _alreadyBeanNum;
    long long _sendUserId;
    NSString *_sendUserSmallAvatarUrl;
    NSString *_sendUserNickName;
    long long _receiveUserId;
    NSString *_remark;
    long long _durationMilliseconds;
    NSArray *_receiveUserList;
}

+ (id)modelContainerPropertyGenericClass;
+ (int)constructor;
@property(retain, nonatomic) NSArray *receiveUserList; // @synthesize receiveUserList=_receiveUserList;
@property(nonatomic) unsigned char isExpired; // @synthesize isExpired=_isExpired;
@property(nonatomic) unsigned char rewardType; // @synthesize rewardType=_rewardType;
@property(nonatomic) long long durationMilliseconds; // @synthesize durationMilliseconds=_durationMilliseconds;
@property(nonatomic) int alreadyBeanNum; // @synthesize alreadyBeanNum=_alreadyBeanNum;
@property(nonatomic) int totalBeanNum; // @synthesize totalBeanNum=_totalBeanNum;
@property(nonatomic) int alreadyRewardNum; // @synthesize alreadyRewardNum=_alreadyRewardNum;
@property(nonatomic) int totalRewardNum; // @synthesize totalRewardNum=_totalRewardNum;
@property(nonatomic) int receiveBeanNum; // @synthesize receiveBeanNum=_receiveBeanNum;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long receiveUserId; // @synthesize receiveUserId=_receiveUserId;
@property(copy, nonatomic) NSString *sendUserNickName; // @synthesize sendUserNickName=_sendUserNickName;
@property(copy, nonatomic) NSString *sendUserSmallAvatarUrl; // @synthesize sendUserSmallAvatarUrl=_sendUserSmallAvatarUrl;
@property(nonatomic) long long sendUserId; // @synthesize sendUserId=_sendUserId;
- (void).cxx_destruct;

@end

