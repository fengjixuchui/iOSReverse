//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SGNoBankCardView, SGTLGetBankListResp, UITableView;

@interface SGTLBankListViewController : SGViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isPayPasswdSet;
    _Bool _isAddBankCard;
    _Bool _isValidPassword;
    SGTLGetBankListResp *_getBankCardListResp;
    CDUnknownBlockType _selectedBlock;
    UITableView *_tableView;
    SGNoBankCardView *_noBankCardView;
}

@property(nonatomic) _Bool isValidPassword; // @synthesize isValidPassword=_isValidPassword;
@property(retain, nonatomic) SGNoBankCardView *noBankCardView; // @synthesize noBankCardView=_noBankCardView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) SGTLGetBankListResp *getBankCardListResp; // @synthesize getBankCardListResp=_getBankCardListResp;
@property(nonatomic) _Bool isAddBankCard; // @synthesize isAddBankCard=_isAddBankCard;
@property(nonatomic) _Bool isPayPasswdSet; // @synthesize isPayPasswdSet=_isPayPasswdSet;
- (void).cxx_destruct;
- (void)addBankCard;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadBank;
- (void)showQuestion;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

