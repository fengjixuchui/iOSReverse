//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JYPacketViewController.h"

#import "JrmfPayStatDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UITextField, typeClipInfo;
@protocol JrmfTransferDelegate;

@interface JrmfTransferPageViewController : JYPacketViewController <UIAlertViewDelegate, UITextFieldDelegate, JrmfPayStatDelegate>
{
    NSString *tmpString;
    UITextField *amoutF;
    UILabel *transDesLab;
    UIButton *transferDesBtn;
    UIButton *transferChangeBtn;
    typeClipInfo *selectedInfo;
    long long tmpSelectedIndex;
    NSString *payPwdString;
    _Bool isNeedPwd;
    _Bool isHasPwd;
    _Bool isHasCard;
    _Bool isAuth;
    _Bool isComp;
    NSMutableArray *cardListArray;
    NSString *jdTradeId;
    NSString *transferOrderID;
    NSString *alipayOrderStr;
    id <JrmfTransferDelegate> _transferDelegate;
    NSString *_userName;
    NSString *_userHeadLink;
    NSString *_custuid;
    NSString *_receiveId;
    NSString *_recUserName;
    NSString *_recUserHeadLink;
    NSString *_maxLimitMoney;
    NSString *_payParam;
}

@property(copy, nonatomic) NSString *payParam; // @synthesize payParam=_payParam;
@property(retain, nonatomic) NSString *maxLimitMoney; // @synthesize maxLimitMoney=_maxLimitMoney;
@property(retain, nonatomic) NSString *recUserHeadLink; // @synthesize recUserHeadLink=_recUserHeadLink;
@property(retain, nonatomic) NSString *recUserName; // @synthesize recUserName=_recUserName;
@property(retain, nonatomic) NSString *receiveId; // @synthesize receiveId=_receiveId;
@property(retain, nonatomic) NSString *custuid; // @synthesize custuid=_custuid;
@property(retain, nonatomic) NSString *userHeadLink; // @synthesize userHeadLink=_userHeadLink;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <JrmfTransferDelegate> transferDelegate; // @synthesize transferDelegate=_transferDelegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)doActionClickBack;
- (_Bool)stringContainsEmoji:(id)arg1;
- (id)keepString:(id)arg1 withDotNum:(long long)arg2;
- (void)amoutFValueChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)doActionAlipayBack;
- (void)doActionSetTransferMsg;
- (void)doActionClickSetTradersPwd;
- (void)doPushTransferStatusPage;
- (void)doJrmfPayStatWithAddNewCardNeedPassword:(_Bool)arg1 Password:(id)arg2 selectedClip:(id)arg3;
- (void)doJrmfPayStatWithBankCardInfo:(id)arg1 JDTradeId:(id)arg2 msgCode:(id)arg3;
- (void)doJrmfPayStatWithThirdStat:(unsigned long long)arg1 selectedClip:(id)arg2;
- (void)doJrmfPayStatWithChargePassword:(id)arg1 selectedClip:(id)arg2;
- (void)doCreateJYangEnvePayViewWithPayClioInfo:(id)arg1 isRepate:(_Bool)arg2;
- (void)doOpenPayTypeView;
- (void)doDealTransferStatWithConut:(id)arg1;
- (void)doActionTransfer;
- (void)doSubmissionResultsWithRepect:(_Bool)arg1 userName:(id)arg2;
- (void)formatDataWithResponseObj:(id)arg1 inputMoney:(id)arg2;
- (void)postGetTransferPayRequestDataWithParamter:(id)arg1;
- (void)loadPayResult;
- (void)postGetRequestDataWithSubmitTransfer;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

