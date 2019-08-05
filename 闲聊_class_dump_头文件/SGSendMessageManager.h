//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGSendMessageManager : NSObject
{
}

+ (id)sharedshareManager;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)setMessageMediaAttribute:(id)arg1 message:(id)arg2;
- (void)sendManeyTextMessage:(id)arg1 sendMessageBlock:(CDUnknownBlockType)arg2 complection:(CDUnknownBlockType)arg3;
- (void)doConversationSendGroupMessage:(long long)arg1 localId:(long long)arg2 preContent:(id)arg3 messageText:(id)arg4 mediaFlag:(_Bool)arg5 mediaConstructor:(int)arg6 mediaAttribute:(id)arg7 atListArr:(id)arg8 isGroupChat:(_Bool)arg9 message:(id)arg10 withCompletion:(CDUnknownBlockType)arg11;
- (id)handleImage:(id)arg1 thumImageData:(id)arg2 originalImageData:(id)arg3 dialog:(id)arg4 originalCompress:(_Bool)arg5;
- (id)handleMessage:(id)arg1;
- (id)handleMessage:(id)arg1 isCollect:(_Bool)arg2;
- (void)sendReplyMessage:(id)arg1 referenceIDialogMessage:(id)arg2 withDialogId:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sendGroupReplyMessage:(id)arg1 referenceIDialogMessage:(id)arg2 withDialogId:(long long)arg3 atList:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)sendGroupInvigationWithMessage:(id)arg1 withGroupUinArray:(id)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)doConversationSendMessage:(long long)arg1 localId:(long long)arg2 preContent:(id)arg3 messageText:(id)arg4 mediaFlag:(_Bool)arg5 mediaConstructor:(int)arg6 mediaAttribute:(id)arg7 isGroupChat:(_Bool)arg8 needUpdateMessage:(_Bool)arg9 message:(id)arg10 withCompletion:(CDUnknownBlockType)arg11;
- (id)handleImage:(id)arg1 dialog:(id)arg2;
- (void)sendAudioMessage:(id)arg1 needUpdate:(_Bool)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)sendAudioMessage:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)sendMessageFailed:(id)arg1 needUpdate:(_Bool)arg2;
- (void)sendMessageFailed:(id)arg1;
- (void)sendVideoMessage:(id)arg1 needUpdate:(_Bool)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)sendVideoMessage:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)sendlocationMessage:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)sendFileMessage:(id)arg1 thumObject:(id)arg2 thumFilePath:(id)arg3 withComplection:(CDUnknownBlockType)arg4;
- (void)sendImageMessage:(id)arg1 needUpdate:(_Bool)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)sendImageMessage:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)uploadLog:(id)arg1;
- (void)sendMessageWithMessage:(id)arg1 needUpdate:(_Bool)arg2 atListArr:(id)arg3 withComplection:(CDUnknownBlockType)arg4;
- (void)sendMessageWithMessage:(id)arg1 atListArr:(id)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)sendMessageWithMessage:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)sendMessge:(id)arg1 needUpdate:(_Bool)arg2 withComplection:(CDUnknownBlockType)arg3;
- (void)sendMessge:(id)arg1 withComplection:(CDUnknownBlockType)arg2;
- (void)disposeMessage:(id)arg1 withTargetDialog:(id)arg2;
- (void)shareGameAfterImageUpload:(id)arg1 gameDic:(id)arg2 key:(id)arg3 withTransMessageArr:(id)arg4 withTargetDialog:(id)arg5;
- (void)loadGame:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)shareGame:(id)arg1 withTransMessageArr:(id)arg2 withTargetDialog:(id)arg3;
- (void)showCallBackAlert:(id)arg1 thirdName:(id)arg2;
- (void)showAlertWithObject:(id)arg1 message:(id)arg2 transMessage:(id)arg3 thirdName:(id)arg4 withTargetDialog:(id)arg5;
- (void)share:(id)arg1 AfterLoadGame:(id)arg2 transMessageArr:(id)arg3 withTargetDialog:(id)arg4;
- (void)sendShareObject:(id)arg1 withTransMessageArr:(id)arg2 withTargetDialog:(id)arg3;
- (void)sendShareObject:(id)arg1 withTargetDialog:(id)arg2;
- (void)sgUploadMergerData:(id)arg1;
- (void)sendMergerMsgDict:(id)arg1 targetDialog:(id)arg2 remarkMessages:(id)arg3;
- (void)collectMessage:(id)arg1;
- (void)batchForwardMessage:(id)arg1 withTargetDialog:(id)arg2 isCollect:(_Bool)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

