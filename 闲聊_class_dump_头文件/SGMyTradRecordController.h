//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AccountDetailIdlVO, NSMutableArray, NSString, UITableView, UIView;

@interface SGMyTradRecordController : SGViewController <UITableViewDelegate, UITableViewDataSource>
{
    AccountDetailIdlVO *_model;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSMutableArray *_titleArrays;
    UIView *_headView;
    NSMutableArray *_mArray;
}

@property(retain, nonatomic) NSMutableArray *mArray; // @synthesize mArray=_mArray;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableArray *titleArrays; // @synthesize titleArrays=_titleArrays;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AccountDetailIdlVO *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)lookMore:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

