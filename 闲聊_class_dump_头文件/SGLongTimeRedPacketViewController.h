//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SGGroupInfo, SGSetGameLoadingView, UILabel, UITableView, UIView;

@interface SGLongTimeRedPacketViewController : SGViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _pageNo;
    long long _groupId;
    SGGroupInfo *_groupInfo;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    UILabel *_topLab;
    SGSetGameLoadingView *_loadingView;
    UIView *_noDataView;
}

@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) SGSetGameLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UILabel *topLab; // @synthesize topLab=_topLab;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SGGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)checkRedpacketPayPassword:(CDUnknownBlockType)arg1;
- (void)checkAmoutReam:(CDUnknownBlockType)arg1;
- (void)dealWithPacketInfoBeforeOpenResp:(id)arg1 withPacketModel:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)getNetData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

