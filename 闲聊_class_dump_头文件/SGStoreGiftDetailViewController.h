//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SGDialogs, SGGroupMember, SGStoreGiftListModel, UIButton, UIImageView, UILabel, UITableView;

@interface SGStoreGiftDetailViewController : SGViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _totalGoldenBean;
    NSArray *_groupMemebers;
    SGDialogs *_groupDialog;
    SGStoreGiftListModel *_giftModel;
    UITableView *_tableView;
    UIImageView *_giftImageView;
    UILabel *_giftNameLab;
    UILabel *_charmLab;
    UILabel *_consumLab;
    NSString *_selectNick;
    long long _selectUid;
    SGGroupMember *_selectedMember;
    UIButton *_buyButton;
}

@property(nonatomic) __weak UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) SGGroupMember *selectedMember; // @synthesize selectedMember=_selectedMember;
@property(nonatomic) long long selectUid; // @synthesize selectUid=_selectUid;
@property(copy, nonatomic) NSString *selectNick; // @synthesize selectNick=_selectNick;
@property(retain, nonatomic) UILabel *consumLab; // @synthesize consumLab=_consumLab;
@property(retain, nonatomic) UILabel *charmLab; // @synthesize charmLab=_charmLab;
@property(retain, nonatomic) UILabel *giftNameLab; // @synthesize giftNameLab=_giftNameLab;
@property(retain, nonatomic) UIImageView *giftImageView; // @synthesize giftImageView=_giftImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SGStoreGiftListModel *giftModel; // @synthesize giftModel=_giftModel;
@property(retain, nonatomic) SGDialogs *groupDialog; // @synthesize groupDialog=_groupDialog;
@property(retain, nonatomic) NSArray *groupMemebers; // @synthesize groupMemebers=_groupMemebers;
@property(nonatomic) long long totalGoldenBean; // @synthesize totalGoldenBean=_totalGoldenBean;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)buyGift:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)creatTopView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

