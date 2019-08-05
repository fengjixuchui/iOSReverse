//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary, SGModernConversationController;
@protocol OS_dispatch_queue;

@interface SGDialogsManger : NSObject
{
    int _unreadCount;
    NSMutableArray *_sgDialogs;
    NSMutableDictionary *_sgDialogsDic;
    CDUnknownBlockType _callBack;
    SGModernConversationController *_conversationVC;
    NSMutableArray *_deleteSgDialogs;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_deleteSgDialogsDic;
    NSLock *_sgDicLock;
}

+ (id)sharedDialogsManger;
@property(retain, nonatomic) NSLock *sgDicLock; // @synthesize sgDicLock=_sgDicLock;
@property(retain, nonatomic) NSMutableDictionary *deleteSgDialogsDic; // @synthesize deleteSgDialogsDic=_deleteSgDialogsDic;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *deleteSgDialogs; // @synthesize deleteSgDialogs=_deleteSgDialogs;
@property(readonly, nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak SGModernConversationController *conversationVC; // @synthesize conversationVC=_conversationVC;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
@property(retain, nonatomic) NSMutableDictionary *sgDialogsDic; // @synthesize sgDialogsDic=_sgDialogsDic;
@property(retain, nonatomic) NSMutableArray *sgDialogs; // @synthesize sgDialogs=_sgDialogs;
- (void).cxx_destruct;
- (void)updateTemBuildMessageForEmpty:(id)arg1 withMessageArray:(id)arg2;
- (void)updateLocalRedpacketDialogMessageForEmpty:(id)arg1;
- (long long)getNextUnReadCount:(long long)arg1;
- (void)removeFromDeleteDialogs:(long long)arg1;
- (void)deleteAndLeaveGroupChatWithDialogId:(long long)arg1;
- (void)setUnreadCount;
- (void)updateDialog:(long long)arg1 text:(id)arg2;
- (void)setArraydialog:(id)arg1 deleteFlag:(_Bool)arg2;
- (void)updateDialog:(long long)arg1 message:(id)arg2 text:(id)arg3;
- (void)setDialog:(long long)arg1 draft:(id)arg2;
- (void)updateDialogViewUnread:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updateDialog:(long long)arg1 title:(id)arg2 smallAvatarUrl:(id)arg3;
- (id)updateDialog:(long long)arg1 title:(id)arg2;
- (id)updateDialogSmallAvatarUrl:(long long)arg1 smallAvatarUrl:(id)arg2;
- (id)getGroupTitleWithResp:(id)arg1;
- (id)getGroupChatDialogDetailNewResp:(id)arg1 urlListArr:(id)arg2;
- (id)getGroupDialogDetailNewResp:(id)arg1 urlListArr:(id)arg2;
- (id)joinGroupChatBy:(long long)arg1 groupTitle:(id)arg2 groupMemberSmallAvatarURLArray:(id)arg3 totalMemberNumber:(int)arg4;
- (id)dialogVerifyGroupCodeResp:(id)arg1;
- (id)SGIdentifyXCodeResp:(id)arg1;
- (id)SGScanGoodsQrCodeResp:(id)arg1;
- (id)dialogScanGroupQrcodeNewResp:(id)arg1;
- (id)dialogAgreeJoinGroupChatResp:(id)arg1;
- (id)dialogJoinGroupChatByGroupCodeResp:(id)arg1;
- (id)dialogJoinGroupChatByInvitationLinkNewResp:(id)arg1;
- (id)joinGroupChatByQrcodeEntryNewResp:(id)arg1;
- (id)setDialog:(long long)arg1 groupMessageLifetime:(long long)arg2;
- (id)setDialog:(long long)arg1 blockFlag:(_Bool)arg2;
- (id)setDialog:(long long)arg1 stickyFlag:(_Bool)arg2;
- (id)setDialog:(long long)arg1 muteFlag:(_Bool)arg2;
- (id)setDialog:(long long)arg1 takeScreengFlag:(_Bool)arg2;
- (id)setDialog:(long long)arg1 burflag:(_Bool)arg2;
- (void)deleteDialogs:(id)arg1;
- (void)callSGDialogListBack;
- (void)deleteDialog:(long long)arg1;
- (id)createDialog:(id)arg1;
- (id)createGroupDialogWithDuplicateDialogResp:(id)arg1;
- (id)createGroupDialogWith:(id)arg1;
- (void)addFriendWith:(long long)arg1;
- (id)createDialogBy:(id)arg1;
- (id)createDialogWith:(long long)arg1;
- (id)setDialog:(long long)arg1 deleteFlag:(_Bool)arg2;
- (id)selectDialogs:(long long)arg1;
- (void)deleteDialogBy:(long long)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (void)deleteDialog:(id)arg1 completeHandle:(CDUnknownBlockType)arg2;
- (void)clearHistory:(id)arg1;
- (void)clearLoaclHistory:(id)arg1;
- (void)clearDialogsHistory:(id)arg1;
- (void)clearDialogHistroy:(id)arg1 update:(_Bool)arg2;
- (id)clearDialogHistroyBy:(long long)arg1;
- (void)sortDialg:(id)arg1;
- (void)setUnreadCount:(id)arg1 loopBlock:(CDUnknownBlockType)arg2;
- (id)setmsgTtxt:(id)arg1;
- (void)setDialogListMessageContent:(id)arg1;
- (void)updateDialogList:(id)arg1 inDb:(_Bool)arg2;
- (void)updateDialog:(long long)arg1 maxSeqNo:(long long)arg2;
- (void)updateDialog:(long long)arg1 score:(long long)arg2;
- (void)updateAllDialogLastRowId;
- (id)selectAllDialogIds;
- (void)clearData;
- (void)updateAllDialogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAllDialogs;
- (void)updateDialogContent:(id)arg1;
- (void)updateDialogs:(id)arg1 orginalDialogs:(id)arg2 async:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateDbDialog:(id)arg1;
- (void)updateSingleDialog:(id)arg1;
- (_Bool)isShareMessageGroup:(id)arg1;
- (void)getGroupMessageShareByTimer:(id)arg1;
- (void)getGroupMessageShare;
- (id)init;

@end

