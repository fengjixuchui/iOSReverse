//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GroupInterestTribe, NSString, SGRightWordButton, UIButton, UIImageView, UILabel, UITableView;

@interface SGGroupInterstDetailViewController : SGViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isJoinGroup;
    GroupInterestTribe *_model;
    UIImageView *_iconView;
    UIImageView *_logoImageView;
    UILabel *_nameLabel;
    UILabel *_auditLab;
    SGRightWordButton *_numberButton;
    UILabel *_detailLabel;
    UIButton *_sureButton;
    UITableView *_tabaleView;
}

@property(nonatomic) _Bool isJoinGroup; // @synthesize isJoinGroup=_isJoinGroup;
@property(retain, nonatomic) UITableView *tabaleView; // @synthesize tabaleView=_tabaleView;
@property(retain, nonatomic) UIButton *sureButton; // @synthesize sureButton=_sureButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) SGRightWordButton *numberButton; // @synthesize numberButton=_numberButton;
@property(retain, nonatomic) UILabel *auditLab; // @synthesize auditLab=_auditLab;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GroupInterestTribe *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)buttonClick:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)creatChildView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

