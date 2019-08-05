//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "ASWatcher-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ASHandle, NSArray, NSMutableArray, NSString, NSTimer, SGDialogs, SGGetAccountBalanceResp, SGGetGroupbillDetailInfoResp, SGGroupBill, SGMessage, SGPayAlertView, UIButton, UILabel, UITableView;
@protocol SGBillDetailDelegate;

@interface SGBillDetailController : SGViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, ASWatcher>
{
    _Bool _isAllPayed;
    long long _billId;
    SGDialogs *_dialog;
    id <SGBillDetailDelegate> _delegate;
    long long _loaclID;
    NSArray *_groupMemberArr;
    SGMessage *_temMessage;
    unsigned long long _billType;
    unsigned long long _billPayStatus;
    unsigned long long _selfPayStatus;
    unsigned long long _billPayerType;
    UITableView *_billDetailTableView;
    SGGetGroupbillDetailInfoResp *_detailResp;
    NSMutableArray *_dataArr;
    double _totalPay;
    double _totalRecieve;
    long long _totalNum;
    long long _alreadyPayNum;
    long long _alreadyRecieveNum;
    double _alreadyPayAmount;
    double _alreadyRecieveAmount;
    double _selfPayAmount;
    double _selfRecieveAmount;
    UILabel *_leftTimeLab;
    UILabel *_footerTipsLab;
    NSTimer *_timer;
    long long _timeCount;
    SGPayAlertView *_payAlertView;
    SGGroupBill *_billInfo;
    ASHandle *_actionHandle;
    UIButton *_remindBtn;
    UILabel *_leftMoneyLabel;
    UIButton *_payBtn;
    SGGetAccountBalanceResp *_balance;
    long long _billBanlance;
}

@property(nonatomic) long long billBanlance; // @synthesize billBanlance=_billBanlance;
@property(retain, nonatomic) SGGetAccountBalanceResp *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *leftMoneyLabel; // @synthesize leftMoneyLabel=_leftMoneyLabel;
@property(nonatomic) _Bool isAllPayed; // @synthesize isAllPayed=_isAllPayed;
@property(nonatomic) __weak UIButton *remindBtn; // @synthesize remindBtn=_remindBtn;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
@property(retain, nonatomic) SGGroupBill *billInfo; // @synthesize billInfo=_billInfo;
@property(retain, nonatomic) SGPayAlertView *payAlertView; // @synthesize payAlertView=_payAlertView;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *footerTipsLab; // @synthesize footerTipsLab=_footerTipsLab;
@property(retain, nonatomic) UILabel *leftTimeLab; // @synthesize leftTimeLab=_leftTimeLab;
@property(nonatomic) double selfRecieveAmount; // @synthesize selfRecieveAmount=_selfRecieveAmount;
@property(nonatomic) double selfPayAmount; // @synthesize selfPayAmount=_selfPayAmount;
@property(nonatomic) double alreadyRecieveAmount; // @synthesize alreadyRecieveAmount=_alreadyRecieveAmount;
@property(nonatomic) double alreadyPayAmount; // @synthesize alreadyPayAmount=_alreadyPayAmount;
@property(nonatomic) long long alreadyRecieveNum; // @synthesize alreadyRecieveNum=_alreadyRecieveNum;
@property(nonatomic) long long alreadyPayNum; // @synthesize alreadyPayNum=_alreadyPayNum;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) double totalRecieve; // @synthesize totalRecieve=_totalRecieve;
@property(nonatomic) double totalPay; // @synthesize totalPay=_totalPay;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) SGGetGroupbillDetailInfoResp *detailResp; // @synthesize detailResp=_detailResp;
@property(retain, nonatomic) UITableView *billDetailTableView; // @synthesize billDetailTableView=_billDetailTableView;
@property(nonatomic) unsigned long long billPayerType; // @synthesize billPayerType=_billPayerType;
@property(nonatomic) unsigned long long selfPayStatus; // @synthesize selfPayStatus=_selfPayStatus;
@property(nonatomic) unsigned long long billPayStatus; // @synthesize billPayStatus=_billPayStatus;
@property(nonatomic) unsigned long long billType; // @synthesize billType=_billType;
@property(retain, nonatomic) SGMessage *temMessage; // @synthesize temMessage=_temMessage;
@property(retain, nonatomic) NSArray *groupMemberArr; // @synthesize groupMemberArr=_groupMemberArr;
@property(nonatomic) long long loaclID; // @synthesize loaclID=_loaclID;
@property(nonatomic) id <SGBillDetailDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SGDialogs *dialog; // @synthesize dialog=_dialog;
@property(nonatomic) long long billId; // @synthesize billId=_billId;
- (void).cxx_destruct;
- (void)gotoLeftMoney;
- (void)setPayBtnBackgroundColor;
- (void)remindOther;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)remindAction;
- (void)receiptForBillAction;
- (void)payForBillActionAfterCheckPassword;
- (void)updateMessageWithResult:(id)arg1;
- (void)pushToSetPayController:(CDUnknownBlockType)arg1;
- (void)checkHaveSetPayPassword:(CDUnknownBlockType)arg1;
- (void)checkIsSetPassword:(CDUnknownBlockType)arg1;
- (void)payForBillAction;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)getLefTimeAttributedString:(long long)arg1;
- (void)leftTimeRefreshAction;
- (id)billFooterView;
- (id)loadHeadView;
- (void)initView;
- (void)initData;
- (void)updateMessageWithResp:(id)arg1;
- (void)sgRequestData;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

