//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "SGDialogListSearchDelegate-Protocol.h"
#import "SGFirstDialogListSearchDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString, SGFirstPageDiaogSearchViewController, SGGameObject, SugramShareBaseObject, UISearchController, UITableView, UITableViewController, UIView;

@interface SGDialogsController : SGViewController <UITableViewDelegate, UITableViewDataSource, UISearchControllerDelegate, SGDialogListSearchDelegate, UISearchBarDelegate, UIPopoverControllerDelegate, UIPopoverPresentationControllerDelegate, SGFirstDialogListSearchDelegate>
{
    _Bool _isCollect;
    int _dialogStyle;
    NSMutableArray *_forwardMessages;
    id _transObject;
    SGGameObject *_game;
    SugramShareBaseObject *_shareObject;
    NSDictionary *_mergerForwardDict;
    UITableView *_tableView;
    SGFirstPageDiaogSearchViewController *_firstVC;
    UISearchController *_searchController;
    UIView *_headerView;
    NSMutableArray *_dataArray;
    UITableViewController *_shareConfirm;
    NSMutableArray *_segueMessagesArray;
}

@property(nonatomic) _Bool isCollect; // @synthesize isCollect=_isCollect;
@property(retain, nonatomic) NSMutableArray *segueMessagesArray; // @synthesize segueMessagesArray=_segueMessagesArray;
@property(retain, nonatomic) UITableViewController *shareConfirm; // @synthesize shareConfirm=_shareConfirm;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) SGFirstPageDiaogSearchViewController *firstVC; // @synthesize firstVC=_firstVC;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDictionary *mergerForwardDict; // @synthesize mergerForwardDict=_mergerForwardDict;
@property(retain, nonatomic) SugramShareBaseObject *shareObject; // @synthesize shareObject=_shareObject;
@property(retain, nonatomic) SGGameObject *game; // @synthesize game=_game;
@property(retain, nonatomic) id transObject; // @synthesize transObject=_transObject;
@property(retain, nonatomic) NSMutableArray *forwardMessages; // @synthesize forwardMessages=_forwardMessages;
@property(nonatomic) int dialogStyle; // @synthesize dialogStyle=_dialogStyle;
- (void).cxx_destruct;
- (void)pushToConversationController:(id)arg1;
- (void)popToLastViewControllerWithRootViewController:(_Bool)arg1;
- (void)backAction;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)selectDialogs:(long long)arg1;
- (void)dialogListSelectDialogs:(long long)arg1;
- (void)selectTableViewWithDialog:(id)arg1 withRemark:(id)arg2;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)selectCellWithDialog:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)headViewTap;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)setSearchControllerView;
- (void)viewDidLoad;
- (id)initWithCollect:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

