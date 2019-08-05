//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JYPacketViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UISegmentedControl, UITableView;

@interface JrmfMyPacketViewController : JYPacketViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool isReceive;
    NSMutableArray *pckRecArray;
    NSMutableArray *pckSedArray;
    int receivePage;
    int recMaxPage;
    int sendPage;
    int sendMaxPage;
    NSString *userName;
    NSString *sendAmout;
    NSString *sendCount;
    NSString *recAmount;
    NSString *recPckCount;
    NSString *recBest;
    NSString *avatarStr;
    UISegmentedControl *_segmentControl;
    UITableView *_pckRecList;
    UITableView *_pckSedList;
}

@property(retain, nonatomic) UITableView *pckSedList; // @synthesize pckSedList=_pckSedList;
@property(retain, nonatomic) UITableView *pckRecList; // @synthesize pckRecList=_pckRecList;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)doCreateTopUserInfoMsgViewWithIsSendPacket:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)segmentedControlChange:(id)arg1;
- (void)doCreateSegMentView;
- (void)postGetSendPacketDataRequest;
- (void)postGetReceivePacketDataRequest;
- (void)viewDidLoad;
- (id)tableViewWithTage:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

