//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGNewFriendModel : NSObject
{
    _Bool _agreeFlag;
    _Bool _newFlag;
    int _addMeType;
    int _gender;
    long long _rowId;
    long long _userId;
    NSString *_nickName;
    NSString *_smallAvatarURL;
    NSString *_xianliaoId;
    NSString *_leaveComments;
}

@property(retain, nonatomic) NSString *leaveComments; // @synthesize leaveComments=_leaveComments;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *xianliaoId; // @synthesize xianliaoId=_xianliaoId;
@property(nonatomic) _Bool newFlag; // @synthesize newFlag=_newFlag;
@property(nonatomic) int addMeType; // @synthesize addMeType=_addMeType;
@property(nonatomic) _Bool agreeFlag; // @synthesize agreeFlag=_agreeFlag;
@property(copy, nonatomic) NSString *smallAvatarURL; // @synthesize smallAvatarURL=_smallAvatarURL;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long rowId; // @synthesize rowId=_rowId;
- (void).cxx_destruct;
- (void)setValue:(id)arg1;

@end

