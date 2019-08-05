//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGNetApi : NSObject
{
}

+ (id)shareApi;
- (id)ToHex:(int)arg1;
- (id)stringHanTTransFromCode:(int)arg1 withMsg:(id)arg2;
- (void)sgWxAuthAndGetBasicUserInfoReq:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgCancelGroupMemberForbiddenReceiveGroupChatRedPacketReq:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgSetGroupMemberForbiddenReceiveGroupChatRedPacketReq:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)validatePasscodeWithSignOutStatusForgetPasswordWithLangCode:(id)arg1 withMobile:(id)arg2 withPasscode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sendCodeWithSignOutStatusForgetPasswordWithLangCode:(id)arg1 withMobile:(id)arg2 withDeviceCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)overwritePasswordByBankCardValidationwithLangCode:(id)arg1 withMobile:(id)arg2 withTargetPassword:(id)arg3 withToken:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)validatePasscodeByForgetLoginPassWordWithReservedLangCode:(id)arg1 withReservedMobile:(id)arg2 withPasscode:(id)arg3 withMobile:(id)arg4 withLangCode:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)validateBankCardInfoSendCodeByForgetLoginPassWordWithBankCarNo:(id)arg1 withRealName:(id)arg2 withCertNo:(id)arg3 withMobile:(id)arg4 withLangCode:(id)arg5 withReservedLangCode:(id)arg6 withReservedMobile:(id)arg7 withCompletion:(CDUnknownBlockType)arg8;
- (void)updateUserPhoneNumWithLangCode:(id)arg1 withPhoneNum:(id)arg2 withPasscode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sendCodeWithChangeMobileWithLangCode:(id)arg1 withPhoneNum:(id)arg2 withToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)validatePasscodeByReservedMobileWithSignInStatusWithReservedLangCode:(id)arg1 withReservedMobile:(id)arg2 withPasscode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)validateBankCardInfoSendCodeByReservedMobileWithSignInStatusWithBankCarNo:(id)arg1 withRealName:(id)arg2 withCertNo:(id)arg3 withReservedLangCode:(id)arg4 withReservedMobile:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)getChangeMobileFlag:(CDUnknownBlockType)arg1;
- (void)adminRecallGroupChatMessageReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)joinGroupChatByGroupCode:(long long)arg1 invitedFromUid:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyGroupCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateGroupCode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgCancelGroupMemberSilenceReq:(long long)arg1 withUidArray:(id)arg2 WithCompletion:(CDUnknownBlockType)arg3;
- (void)sgSetGroupMemberSilenceReq:(long long)arg1 withUidArray:(id)arg2 withSilenceTime:(long long)arg3 WithCompletion:(CDUnknownBlockType)arg4;
- (void)sgGetGroupMemberSilenceTimeOptionReq:(long long)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)sgUpdateGroupSilenceFlagReq:(long long)arg1 withOn:(_Bool)arg2 WithCompletion:(CDUnknownBlockType)arg3;
- (void)updateUserAutoAgreeFriendStatus:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)uploadClientInfo:(id)arg1 url:(id)arg2;
- (void)applyJoinGroupFromInterst:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdataGroupInterst:(long long)arg1 withOpenFlag:(_Bool)arg2 withInterestTribeTypeId:(long long)arg3 withInterestTribeIntroduction:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sgGetGroupsInfoForInterst:(long long)arg1 withPageNo:(int)arg2 withPageSize:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sgGetMyIntersts:(int)arg1 withPageSize:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sgGetAllInterst:(CDUnknownBlockType)arg1;
- (void)sgDeleteFriendApply:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgGetFriendApplyListWithPageNo:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSendContactToken:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)AgreeAddFriendReq:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)newAddFriendWayWithUin:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endTypingGroupMessageWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startTypingGroupChatMessageWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)endTypingPrivateMessageWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgGetGroupChatFunctionConfigReqWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgQueryUpdateGroupMemberLimitResultReq:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgDeleteUserPhotoReqWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgUpdateUserPhotoReq:(id)arg1 withOriginalPhoto:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupMemberLimitReq:(long long)arg1 withUserId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startTypingPrivateChatMessageWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recallGroupChatMessageWithGroupId:(long long)arg1 withMessageId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupMessageLifetimeFlagReq:(long long)arg1 withGroupMessageLifetimeFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdatePrivateMessageLifetimeFlagReq:(long long)arg1 withPrivateMessageLifetimeFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)recallPrivateChatMessageWithDialogId:(long long)arg1 withMessageId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)getUserInfoWith:(id)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)saveConfigList:(id)arg1;
- (void)setDialogFileDomain:(id)arg1;
- (void)setUserFileDomain:(id)arg1;
- (void)getUserConfigReqhWithCompletion:(CDUnknownBlockType)arg1;
- (void)SGReleaseGroupNoticeReq:(long long)arg1 withGroupNotice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateFindMeByPhoneNumberConfig:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgDelContacts:(id)arg1 blockFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgGetMobileContactsByUinsNewWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgImportContacts:(id)arg1 withReplaceFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgGetContactsByUins:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgPrivateChatTakeScreenWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgGroupChatTakeScreenWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearGroupChatHistory:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearPrivateChatHistory:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgDuplicateGroupChatDialogReq:(id)arg1 gd:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)leaveChatWithDialogId:(long long)arg1 withGroupFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)enterChatWithDialogId:(long long)arg1 withUnreadCount:(int)arg2 withGroupFlag:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)updateGlobalMuteConfig:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deleteDialogWithUin:(long long)arg1 withGroupFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)deleteAndLeaveGroupChatWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getPrivateChatDetailWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgGetGroupMemberOnlineTimeReqWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getGroupChatDetailWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getGroupDialogDetailWithDialogId:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgCreatGroupChat:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgSendGroupChatPokeReqWithGroupId:(long long)arg1 withLocalId:(long long)arg2 withPokeContent:(id)arg3 withPokeSomeGroupMemberFlag:(_Bool)arg4 withGroupMemberUidArray:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)sgSendPrivateChatPokeReqWithDestId:(long long)arg1 withLocalId:(long long)arg2 withPokeContent:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sgDeleteTagToGroupMemberWithGroupId:(long long)arg1 withMemberUid:(long long)arg2 withDestTag:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sgUpdateGroupPrivilegeFlagReqWithGroupId:(long long)arg1 withGroupPrivililege:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupMemberMutualAddFriendFromGroupFlag:(_Bool)arg1 withGroupId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sgAddTagToGroupMemberWithGroupId:(long long)arg1 withOperateUserId:(long long)arg2 withDestUserId:(long long)arg3 withTag:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sgUpdateAddMeByCardConfigReq:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdateAddMeByQRCodeFlagReq:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdateAddMeByGroupFlagReq:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdateFindMeByXianliaoIdConfigReq:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdateXianliaoIdReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sgUpdateXlGroupIdReq:(long long)arg1 withXlGroupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sgQueryGroupMemberTagList:(long long)arg1 withMemberUid:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGroupContactWithPage:(int)arg1 rows:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)doConversationSendGroupMessage:(long long)arg1 localId:(long long)arg2 preContent:(id)arg3 messageText:(id)arg4 mediaFlag:(_Bool)arg5 mediaConstructor:(int)arg6 mediaAttribute:(id)arg7 atListArr:(id)arg8 isGroupChat:(_Bool)arg9 withCompletion:(CDUnknownBlockType)arg10;
- (void)doRequestGetBriefDialogListWithArr:(id)arg1 timeout:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)CheckMessageCompressReq:(long long)arg1 groupSharedialogs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)GetNewSharingGroupMessage:(long long)arg1 offset:(long long)arg2 rows:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)doRequestNewMessageWithOffset:(long long)arg1 withTimeout:(double)arg2 rows:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)joinGroupChatByInvitationLinkWithInvitedFromUin:(long long)arg1 withGroupUin:(long long)arg2 withCreateTime:(long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)verifyGroupChatInvitationLinkWithUin:(long long)arg1 withGroupUin:(long long)arg2 withCreateTime:(long long)arg3 withParamString:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)doReplyGroupMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)doReplyMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)replyGroupMessage:(id)arg1 dialogMessage:(id)arg2 dialogId:(long long)arg3 atList:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)replyMessage:(id)arg1 dialogMessage:(id)arg2 dialogId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)doConversationSendMessage:(long long)arg1 withLocalId:(long long)arg2 withPreContent:(id)arg3 withMessageText:(id)arg4 withMediaFlag:(_Bool)arg5 withMediaConstructor:(int)arg6 withMediaAttribute:(id)arg7 withMessage:(id)arg8 withIsGroupChat:(_Bool)arg9 withCompletion:(CDUnknownBlockType)arg10;
- (void)sgSetUserBlockWithUin:(long long)arg1 withBlockFlag:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateUserAliasWithUin:(long long)arg1 withAlias:(id)arg2 withPhoneArray:(id)arg3 withAliasDesc:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)sgEditAliasInGroupWithGroupUin:(long long)arg1 withAlias:(id)arg2 withMobile:(id)arg3 withWxUserName:(id)arg4 withAliUserName:(id)arg5 withOther1:(id)arg6 withOther2:(id)arg7 withCompletion:(CDUnknownBlockType)arg8;
- (void)sgEditGroupTitleWithGroupUin:(long long)arg1 withTitle:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupSaveToContacts:(long long)arg1 withSaveToContact:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupChatBurnAfterReadingConfig:(long long)arg1 withBurnAfterReading:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdatePrivateChatBurnAfterReadingConfig:(long long)arg1 withBurnAfterReading:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupChatStickyConfig:(long long)arg1 withSticky:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdatePrivateChatStickyConfig:(long long)arg1 withSticky:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupChatMuteConfig:(long long)arg1 withMute:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdatePrivateChatMuteConfig:(long long)arg1 withMute:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgChangeOwnerSHipTransferWith:(long long)arg1 withUserId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgDelGroupChatMember:(long long)arg1 withGroupMember:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgAddUserToGroupChat:(long long)arg1 withUser:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgJoinGroupChatByQrcodeWithInvitedFromUin:(long long)arg1 withGroupUin:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgDeleteGroupContacts:(long long)arg1 withSaveToContact:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgDeletePrivateChatMessage:(long long)arg1 withMessageId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgDeleteGroupChatMessage:(long long)arg1 withMessageId:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgGetDialogKey:(id)arg1 withCert:(id)arg2 withTimeout:(double)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sgGetGroupQuitListReq:(long long)arg1 withPage:(int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateApnsToken:(id)arg1 ithCompletion:(CDUnknownBlockType)arg2;
- (void)sgScanWebClickOK:(id)arg1 withcomletion:(CDUnknownBlockType)arg2;
- (void)sgScanWebQRCode:(id)arg1 withcomletion:(CDUnknownBlockType)arg2;
- (void)sgScanGroupQRCode:(id)arg1 withcomletion:(CDUnknownBlockType)arg2;
- (void)sgGetFriendListToHelpWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgScanPersonalQRCode:(id)arg1 withcompletion:(CDUnknownBlockType)arg2;
- (void)sgGetServerTimeCompletion:(CDUnknownBlockType)arg1;
- (void)sgUpdateVibrationAlertConfig:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgUpdateSoundAlertConfig:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgUpdatePokeNotifyConfig:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgGetAlertConfigCompleation:(CDUnknownBlockType)arg1;
- (void)sgGetFindMeByPhoneNumerConfigWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgUpdateUserAvatar:(id)arg1 withOrginAvatarUrl:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgDeleteInvitationReq:(long long)arg1 withDestIdArray:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgModifyAccountPassword:(id)arg1 withTragetPassword:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgGetBlockListCompletion:(CDUnknownBlockType)arg1;
- (void)sgModifyEmail:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgModifyGender:(unsigned char)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgModifyNickName:(id)arg1 withComleption:(CDUnknownBlockType)arg2;
- (void)sgForgetPasswdSetNewPasswd:(id)arg1 withLangCode:(id)arg2 withValidStr:(id)arg3 withTargetPasswd:(id)arg4 withLoginFlag:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)sgGetVerificationCodeToRecoverPasswordReq:(id)arg1 withPhone:(id)arg2 withToken:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sgGetVerifyInfoOfForgetPassword:(id)arg1 withMobile:(id)arg2 withuniqueDeviceNo:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sgHelpFriendFindPassword:(long long)arg1 withVerifyCode:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdateGroupChatTakeScreenConfigwithDestUin:(long long)arg1 takeScreenConfig:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgUpdatePrivateChatTakeScreenConfigwithDestUin:(long long)arg1 takeScreenConfig:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgGetCountryListWithCompletion:(CDUnknownBlockType)arg1;
- (void)SGGetIpList;
- (void)sgUpdateRestrictionLoginByPasscodeConfigReq:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)sgGetRestrictionLoginByPasscodeConfigReqWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgIsRegisteredByPhoneNumReqWith:(id)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)sgGetWebloginStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgAppForceWebLogoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgLogOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgGetPasswordSetFlagWithCompletion:(CDUnknownBlockType)arg1;
- (void)sgGetuserOpenIdwithDestId:(long long)arg1 Completion:(CDUnknownBlockType)arg2;
- (void)sgOverwritePasswdByTokenWithSignInStatusReq:(id)arg1 withMobile:(id)arg2 withPasscode:(id)arg3 withPassword:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)sgAuthLogOutSetPasswordReq:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)sgSendCodeWithSignInStatus:(id)arg1 withLangCode:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgLoginBySmsCodeReq:(id)arg1 withPasscode:(id)arg2 WithLangCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)sgSendCodeWithSignOutStatus:(id)arg1 withLangCode:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)sgLogin:(id)arg1 withPassword:(id)arg2 WithLangCode:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (_Bool)isTcpSuccesswithError:(id)arg1;
- (id)sha256:(id)arg1;

@end

