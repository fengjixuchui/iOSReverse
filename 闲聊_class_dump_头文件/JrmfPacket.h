//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JYEnvelopedDelegate-Protocol.h"
#import "JrmfOpenPacketDelegate-Protocol.h"
#import "JrmfTransferDelegate-Protocol.h"
#import "TransferReceiptDelegate-Protocol.h"

@class JYPacketNavigationController, NSString, NSURLSessionDataTask, UIViewController;
@protocol jrmfManagerDelegate, jrmfManagerTrfDelegate;

@interface JrmfPacket : NSObject <JYEnvelopedDelegate, JrmfTransferDelegate, TransferReceiptDelegate, JrmfOpenPacketDelegate>
{
    _Bool _isOpenItem;
    float _titleFont;
    NSString *_packetRGB;
    NSString *_titleColorRGB;
    id <jrmfManagerDelegate> _delegate;
    id <jrmfManagerTrfDelegate> _trfDelegate;
    JYPacketNavigationController *_selectedNav;
    NSURLSessionDataTask *_dataTask;
    UIViewController *_currentHudVC;
}

+ (id)getCurrentVersion;
+ (void)setAppMethodOnLine:(_Bool)arg1;
+ (void)destroyPacketModule;
+ (void)isPersonalUserWithBaseVC:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)handlePayWith:(id)arg1;
+ (void)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
+ (void)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
+ (void)submitErrMsg:(id)arg1 userId:(id)arg2 msg:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (void)mf_collectErrorMsg:(id)arg1 userId:(id)arg2;
+ (void)updateUserMsgWithUserId:(id)arg1 userName:(id)arg2 userHead:(id)arg3 thirdToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)showAlertViewWithMessage:(id)arg1;
+ (void)doUpdateStatistics;
+ (void)instanceJrmfPacketWithPartnerId:(id)arg1 EnvelopeName:(id)arg2 aliPaySchemeUrl:(id)arg3 weChatSchemeUrl:(id)arg4 customerClass:(id)arg5 dynamicToken:(_Bool)arg6 appMothod:(_Bool)arg7;
+ (void)instanceJrmfPacketWithPartnerId:(id)arg1 EnvelopeName:(id)arg2 aliPaySchemeUrl:(id)arg3 weChatSchemeUrl:(id)arg4 dynamicToken:(_Bool)arg5 appMothod:(_Bool)arg6;
+ (void)instanceJrmfPacketWithPartnerId:(id)arg1 EnvelopeName:(id)arg2 aliPaySchemeUrl:(id)arg3 weChatSchemeUrl:(id)arg4 appMothod:(_Bool)arg5;
+ (id)shareHelper;
@property(nonatomic) _Bool isOpenItem; // @synthesize isOpenItem=_isOpenItem;
@property(nonatomic) __weak UIViewController *currentHudVC; // @synthesize currentHudVC=_currentHudVC;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property(retain, nonatomic) JYPacketNavigationController *selectedNav; // @synthesize selectedNav=_selectedNav;
@property(nonatomic) __weak id <jrmfManagerTrfDelegate> trfDelegate; // @synthesize trfDelegate=_trfDelegate;
@property(nonatomic) __weak id <jrmfManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *titleColorRGB; // @synthesize titleColorRGB=_titleColorRGB;
@property(retain, nonatomic) NSString *packetRGB; // @synthesize packetRGB=_packetRGB;
@property(nonatomic) float titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doActionOpenPacket:(long long)arg1 total:(long long)arg2 totalMoney:(id)arg3 grabMoney:(id)arg4;
- (void)doActionOpenPacketWithGetDone:(_Bool)arg1;
- (void)doSendEnvelopedWithModel:(id)arg1 Stat:(int)arg2;
- (void)doTransferReceiptStatuaWithTransferOrder:(id)arg1 TransferOperateStatus:(int)arg2 Amount:(id)arg3;
- (void)doTransferAccountsWithReceivedUserID:(id)arg1 Message:(id)arg2 transferOrder:(id)arg3 Amount:(id)arg4;
- (void)doPresentTransferAccountsDetailWithBaseViewController:(id)arg1 thirdToken:(id)arg2 TransferOrder:(id)arg3 OperateUserId:(id)arg4;
- (void)doActionPresentTransferWithBaseViewController:(id)arg1 thirdToken:(id)arg2 receiveUserID:(id)arg3 receiveUserName:(id)arg4 receiveUserHead:(id)arg5 sendUserName:(id)arg6 sendUserHead:(id)arg7 sendUserID:(id)arg8;
- (void)doActionPresentPacketListInViewWithUserID:(id)arg1 thirdToken:(id)arg2;
- (void)doActionPresentPacketDetailInViewWithUserID:(id)arg1 packetID:(id)arg2 thirdToken:(id)arg3;
- (void)doActionPresentOpenViewController:(id)arg1 thirdToken:(id)arg2 withUserName:(id)arg3 userHead:(id)arg4 userID:(id)arg5 envelopeID:(id)arg6 isGroup:(_Bool)arg7;
- (void)doActionPresentSendRedEnvelopeViewController:(id)arg1 thirdToken:(id)arg2 withGroup:(_Bool)arg3 receiveID:(id)arg4 sendUserName:(id)arg5 sendUserHead:(id)arg6 sendUserID:(id)arg7 groupNumber:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

