//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGInnerObject.h"

@class NSString;

@interface SGGroupMember : SGInnerObject
{
    _Bool _Property_SGGroupMember_admin;
    _Bool _Property_SGGroupMember_owner;
    _Bool _Property_SGGroupMember_isDelete;
    unsigned char _Property_SGGroupMember_participateType;
    _Bool _Property_SGGroupMember_isChoose;
    int _Property_SGGroupMember_joinChannel;
    long long _Property_SGGroupMember_memberUid;
    NSString *_Property_SGGroupMember_memberName;
    NSString *_Property_SGGroupMember_memberAlias;
    NSString *_Property_SGGroupMember_memberSmallAvatarUrl;
    NSString *_Property_SGGroupMember_referenceNickName;
    long long _Property_SGGroupMember_referenceUid;
    long long _Property_SGGroupMember_joinTime;
    NSString *_Property_SGGroupMember_mobile;
    NSString *_Property_SGGroupMember_wxUsername;
    NSString *_Property_SGGroupMember_aliUsername;
    NSString *_Property_SGGroupMember_other1;
    NSString *_Property_SGGroupMember_other2;
    long long _Property_SGGroupMember_lastOnlineTime;
    NSString *_Property_SGGroupMember_memberRemark;
    NSString *_Property_SGGroupMember_groupMemberXianliaoID;
    NSString *_Property_SGGroupMember_memberDisplayName;
    NSString *_Property_SGGroupMember_selectedAtName;
    long long _Property_SGGroupMember_amount;
    NSString *_Property_SGGroupMember_remarkPhone1;
    NSString *_Property_SGGroupMember_remarkPhone2;
    NSString *_Property_SGGroupMember_remarkDesc;
    long long _Property_SGGroupMember_groupQuitId;
    long long _Property_SGGroupMember_memberUserId;
    NSString *_Property_SGGroupMember_memberNickName;
    long long _Property_SGGroupMember_operateUserId;
    NSString *_Property_SGGroupMember_operateNickName;
    long long _Property_SGGroupMember_createTime;
}

+ (id)loadProperty_SGGroupMember_selectedAtNameKey;
+ (id)loadProperty_SGGroupMember_memberDisplayKey;
+ (id)loadProperty_SGGroupMember_remarkPhone2Key;
+ (id)loadProperty_SGGroupMember_remarkPhone1Key;
+ (id)loadProperty_SGGroupMember_remarkDescKey;
+ (id)loadProperty_SGGroupMember_memberRemarkKey;
+ (id)loadProperty_SGGroupMember_memberAliasKey;
+ (id)loadProperty_SGGroupMember_memberNameKey;
+ (id)loadProperty_SGGroupMember_memberUidKey;
+ (id)loadPredicatePerByKey:(id)arg1;
+ (id)initWithUser:(id)arg1;
+ (id)sgGroupMembercopyWithGroupMember:(id)arg1;
+ (id)sgGroupMemberCopyWithGroupMemberBriefInfo:(id)arg1;
+ (id)sgGroupMemberInitWithSGGroupInviteModel:(id)arg1;
+ (id)sgGroupmemberparaseWithDic:(id)arg1;
@property(nonatomic) long long Property_SGGroupMember_createTime; // @synthesize Property_SGGroupMember_createTime=_Property_SGGroupMember_createTime;
@property(copy, nonatomic) NSString *Property_SGGroupMember_operateNickName; // @synthesize Property_SGGroupMember_operateNickName=_Property_SGGroupMember_operateNickName;
@property(nonatomic) long long Property_SGGroupMember_operateUserId; // @synthesize Property_SGGroupMember_operateUserId=_Property_SGGroupMember_operateUserId;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberNickName; // @synthesize Property_SGGroupMember_memberNickName=_Property_SGGroupMember_memberNickName;
@property(nonatomic) long long Property_SGGroupMember_memberUserId; // @synthesize Property_SGGroupMember_memberUserId=_Property_SGGroupMember_memberUserId;
@property(nonatomic) long long Property_SGGroupMember_groupQuitId; // @synthesize Property_SGGroupMember_groupQuitId=_Property_SGGroupMember_groupQuitId;
@property(copy, nonatomic) NSString *Property_SGGroupMember_remarkDesc; // @synthesize Property_SGGroupMember_remarkDesc=_Property_SGGroupMember_remarkDesc;
@property(copy, nonatomic) NSString *Property_SGGroupMember_remarkPhone2; // @synthesize Property_SGGroupMember_remarkPhone2=_Property_SGGroupMember_remarkPhone2;
@property(copy, nonatomic) NSString *Property_SGGroupMember_remarkPhone1; // @synthesize Property_SGGroupMember_remarkPhone1=_Property_SGGroupMember_remarkPhone1;
@property(nonatomic) _Bool Property_SGGroupMember_isChoose; // @synthesize Property_SGGroupMember_isChoose=_Property_SGGroupMember_isChoose;
@property(nonatomic) long long Property_SGGroupMember_amount; // @synthesize Property_SGGroupMember_amount=_Property_SGGroupMember_amount;
@property(nonatomic) unsigned char Property_SGGroupMember_participateType; // @synthesize Property_SGGroupMember_participateType=_Property_SGGroupMember_participateType;
@property(readonly, copy, nonatomic) NSString *Property_SGGroupMember_selectedAtName; // @synthesize Property_SGGroupMember_selectedAtName=_Property_SGGroupMember_selectedAtName;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberDisplayName; // @synthesize Property_SGGroupMember_memberDisplayName=_Property_SGGroupMember_memberDisplayName;
@property(copy, nonatomic) NSString *Property_SGGroupMember_groupMemberXianliaoID; // @synthesize Property_SGGroupMember_groupMemberXianliaoID=_Property_SGGroupMember_groupMemberXianliaoID;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberRemark; // @synthesize Property_SGGroupMember_memberRemark=_Property_SGGroupMember_memberRemark;
@property(nonatomic) _Bool Property_SGGroupMember_isDelete; // @synthesize Property_SGGroupMember_isDelete=_Property_SGGroupMember_isDelete;
@property(nonatomic) long long Property_SGGroupMember_lastOnlineTime; // @synthesize Property_SGGroupMember_lastOnlineTime=_Property_SGGroupMember_lastOnlineTime;
@property(copy, nonatomic) NSString *Property_SGGroupMember_other2; // @synthesize Property_SGGroupMember_other2=_Property_SGGroupMember_other2;
@property(copy, nonatomic) NSString *Property_SGGroupMember_other1; // @synthesize Property_SGGroupMember_other1=_Property_SGGroupMember_other1;
@property(copy, nonatomic) NSString *Property_SGGroupMember_aliUsername; // @synthesize Property_SGGroupMember_aliUsername=_Property_SGGroupMember_aliUsername;
@property(copy, nonatomic) NSString *Property_SGGroupMember_wxUsername; // @synthesize Property_SGGroupMember_wxUsername=_Property_SGGroupMember_wxUsername;
@property(copy, nonatomic) NSString *Property_SGGroupMember_mobile; // @synthesize Property_SGGroupMember_mobile=_Property_SGGroupMember_mobile;
@property(nonatomic) int Property_SGGroupMember_joinChannel; // @synthesize Property_SGGroupMember_joinChannel=_Property_SGGroupMember_joinChannel;
@property(nonatomic) long long Property_SGGroupMember_joinTime; // @synthesize Property_SGGroupMember_joinTime=_Property_SGGroupMember_joinTime;
@property(nonatomic) long long Property_SGGroupMember_referenceUid; // @synthesize Property_SGGroupMember_referenceUid=_Property_SGGroupMember_referenceUid;
@property(copy, nonatomic) NSString *Property_SGGroupMember_referenceNickName; // @synthesize Property_SGGroupMember_referenceNickName=_Property_SGGroupMember_referenceNickName;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberSmallAvatarUrl; // @synthesize Property_SGGroupMember_memberSmallAvatarUrl=_Property_SGGroupMember_memberSmallAvatarUrl;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberAlias; // @synthesize Property_SGGroupMember_memberAlias=_Property_SGGroupMember_memberAlias;
@property(copy, nonatomic) NSString *Property_SGGroupMember_memberName; // @synthesize Property_SGGroupMember_memberName=_Property_SGGroupMember_memberName;
@property(nonatomic) _Bool Property_SGGroupMember_owner; // @synthesize Property_SGGroupMember_owner=_Property_SGGroupMember_owner;
@property(nonatomic) _Bool Property_SGGroupMember_admin; // @synthesize Property_SGGroupMember_admin=_Property_SGGroupMember_admin;
@property(nonatomic) long long Property_SGGroupMember_memberUid; // @synthesize Property_SGGroupMember_memberUid=_Property_SGGroupMember_memberUid;
- (void).cxx_destruct;
- (id)initWithGroupMember:(id)arg1;
- (id)loadGroupMemberDic;
- (id)selectedAtName;
- (id)resp_deserialize:(id)arg1;

@end

