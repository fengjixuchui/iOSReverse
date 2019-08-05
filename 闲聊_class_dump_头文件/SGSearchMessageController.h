//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UINavigationController, UISearchBar, UITableView, UIView;

@interface SGSearchMessageController : SGViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _groupFlag;
    _Bool _pushHiddenNavigaitonBar;
    long long _dialogId;
    NSArray *_allMessage;
    NSArray *_searchModels;
    UISearchBar *_searchBar;
    UITableView *_tableView;
    UIButton *_cancelButton;
    UIView *_seachBackView;
    UIView *_tableHeaderView;
    UILabel *_findTitleLabel;
    unsigned long long _resutlt;
    UINavigationController *_navi;
}

+ (id)getSearchMessageController;
@property(nonatomic) __weak UINavigationController *navi; // @synthesize navi=_navi;
@property(nonatomic) _Bool pushHiddenNavigaitonBar; // @synthesize pushHiddenNavigaitonBar=_pushHiddenNavigaitonBar;
@property(nonatomic) unsigned long long resutlt; // @synthesize resutlt=_resutlt;
@property(nonatomic) __weak UILabel *findTitleLabel; // @synthesize findTitleLabel=_findTitleLabel;
@property(retain, nonatomic) UIView *tableHeaderView; // @synthesize tableHeaderView=_tableHeaderView;
@property(nonatomic) __weak UIView *seachBackView; // @synthesize seachBackView=_seachBackView;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSArray *searchModels; // @synthesize searchModels=_searchModels;
@property(retain, nonatomic) NSArray *allMessage; // @synthesize allMessage=_allMessage;
@property(nonatomic) _Bool groupFlag; // @synthesize groupFlag=_groupFlag;
@property(nonatomic) long long dialogId; // @synthesize dialogId=_dialogId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchMessageReloadData;
- (void)upToOrignalState;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)cancel:(id)arg1;
- (void)jumpToFile:(_Bool)arg1;
- (void)clickQuickSearchButton:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

