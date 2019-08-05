//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UISearchController, UITableView, UIView, _TtC8xianliao23SearchNetPhoneOrIDModel;

@interface SGSearchFriendPhoneViewController : SGViewController <UITableViewDelegate, UITableViewDataSource, UISearchControllerDelegate, UISearchResultsUpdating, UISearchBarDelegate>
{
    _Bool _isShowSearchResult;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _addNewFriend;
    UITableView *_tableView;
    UISearchController *_searchController;
    NSArray *_searchResults;
    UIView *_noDataView;
    _TtC8xianliao23SearchNetPhoneOrIDModel *_searchModel;
    NSMutableArray *_contactNoAddArry;
    NSMutableArray *_searchContactNoAddArry;
}

@property(nonatomic) _Bool isShowSearchResult; // @synthesize isShowSearchResult=_isShowSearchResult;
@property(retain, nonatomic) NSMutableArray *searchContactNoAddArry; // @synthesize searchContactNoAddArry=_searchContactNoAddArry;
@property(retain, nonatomic) NSMutableArray *contactNoAddArry; // @synthesize contactNoAddArry=_contactNoAddArry;
@property(retain, nonatomic) _TtC8xianliao23SearchNetPhoneOrIDModel *searchModel; // @synthesize searchModel=_searchModel;
@property(retain, nonatomic) UIView *noDataView; // @synthesize noDataView=_noDataView;
@property(retain, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType addNewFriend; // @synthesize addNewFriend=_addNewFriend;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)addBuddy:(id)arg1;
- (void)searchRequest;
- (void)showCertifyView:(_Bool)arg1 infoResponse:(id)arg2;
- (void)checkCanRequestNetSearch;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)getLoacalContactData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

