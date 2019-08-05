//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "SDCycleScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SDCycleScrollView, SGRedPacket, SGShowAlipayPacketResp, UILabel, UITableView, UIView;

@interface SGAlipayRedViewDetailController : SGViewController <UITableViewDelegate, UITableViewDataSource, SDCycleScrollViewDelegate>
{
    long long _packetId;
    NSArray *_groupMemberInfoArray;
    SGRedPacket *_redpacketMessage;
    UITableView *_redpacketListTable;
    UIView *_headView;
    UILabel *_footerView;
    UIView *_tableOffSetView;
    NSString *_centerTips;
    NSString *_footerTips;
    SGShowAlipayPacketResp *_showPacketResp;
    NSString *_alipayNickName;
    UILabel *_alreadyTipsLab;
    SDCycleScrollView *_bannerView;
    NSMutableArray *_bannerArray;
}

@property(retain, nonatomic) NSMutableArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(retain, nonatomic) SDCycleScrollView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UILabel *alreadyTipsLab; // @synthesize alreadyTipsLab=_alreadyTipsLab;
@property(copy, nonatomic) NSString *alipayNickName; // @synthesize alipayNickName=_alipayNickName;
@property(retain, nonatomic) SGShowAlipayPacketResp *showPacketResp; // @synthesize showPacketResp=_showPacketResp;
@property(retain, nonatomic) NSString *footerTips; // @synthesize footerTips=_footerTips;
@property(retain, nonatomic) NSString *centerTips; // @synthesize centerTips=_centerTips;
@property(retain, nonatomic) UIView *tableOffSetView; // @synthesize tableOffSetView=_tableOffSetView;
@property(retain, nonatomic) UILabel *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UITableView *redpacketListTable; // @synthesize redpacketListTable=_redpacketListTable;
@property(retain, nonatomic) SGRedPacket *redpacketMessage; // @synthesize redpacketMessage=_redpacketMessage;
@property(retain, nonatomic) NSArray *groupMemberInfoArray; // @synthesize groupMemberInfoArray=_groupMemberInfoArray;
@property(nonatomic) long long packetId; // @synthesize packetId=_packetId;
- (void).cxx_destruct;
- (void)openChangeAction;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)updateCenterAndBottomTips;
- (void)showMyPacketAction;
- (void)cycleScrollView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)setRightRedpacketRecord;
- (void)refreshView;
- (void)loadAlipaydata;
- (void)initNavBar;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

