//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "AlipayRedpacketHeadViewDelegate-Protocol.h"
#import "SGAlipayCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SGAlipayRedpacketHeadView, UIButton, UITableView, UIView;

@interface SGAlipayRedpacketDeatilViewController : SGViewController <UITableViewDelegate, UITableViewDataSource, SGAlipayCellDelegate, AlipayRedpacketHeadViewDelegate>
{
    _Bool _isRecive;
    _Bool _isShowMore;
    int _pageNo;
    int _pageSize;
    SGAlipayRedpacketHeadView *_headView;
    UITableView *_tableView;
    NSMutableArray *_dataArr;
    UIView *_bkgHeadView;
    UIView *_bottomView;
    NSMutableArray *_deleteIDarray;
    id _packetModel;
    UIButton *_deleteButton;
}

@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) id packetModel; // @synthesize packetModel=_packetModel;
@property(retain, nonatomic) NSMutableArray *deleteIDarray; // @synthesize deleteIDarray=_deleteIDarray;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) _Bool isShowMore; // @synthesize isShowMore=_isShowMore;
@property(retain, nonatomic) UIView *bkgHeadView; // @synthesize bkgHeadView=_bkgHeadView;
@property(retain, nonatomic) NSMutableArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) _Bool isRecive; // @synthesize isRecive=_isRecive;
@property(nonatomic) int pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) int pageNo; // @synthesize pageNo=_pageNo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SGAlipayRedpacketHeadView *headView; // @synthesize headView=_headView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)setNoramState;
- (void)cancleAction;
- (void)chooseMore;
- (void)allDelete;
- (void)deleteRedPacketRecord;
- (_Bool)canBecomeFirstResponder;
- (void)tapCellToPush:(id)arg1;
- (void)deleteSigalPacketModel;
- (void)longTapCell:(id)arg1 tapView:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)loadSendPacketData;
- (void)loadRecivePacketData;
- (void)loadAction;
- (void)switchAliPayRedPacket:(_Bool)arg1;
- (void)alipayRedpacketDeatilSwitchAction;
- (void)authForResp:(id)arg1 nextBlock:(CDUnknownBlockType)arg2;
- (void)checkAlipayAuthState:(CDUnknownBlockType)arg1;
- (void)chooseMoreOption;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

