//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "SGSectionDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIColor;
@protocol SGTableViewDelegate;

@interface SGTableView : UITableView <UITableViewDelegate, UITableViewDataSource, SGSectionDelegate>
{
    id <SGTableViewDelegate> _sgTableViewDelegate;
    NSMutableArray *_sectionArr;
    UIColor *_sectionHeaderColor;
    NSMutableArray *_reusableIdentifierArr;
}

@property(retain, nonatomic) NSMutableArray *reusableIdentifierArr; // @synthesize reusableIdentifierArr=_reusableIdentifierArr;
@property(retain, nonatomic) UIColor *sectionHeaderColor; // @synthesize sectionHeaderColor=_sectionHeaderColor;
@property(retain, nonatomic) NSMutableArray *sectionArr; // @synthesize sectionArr=_sectionArr;
@property(nonatomic) __weak id <SGTableViewDelegate> sgTableViewDelegate; // @synthesize sgTableViewDelegate=_sgTableViewDelegate;
- (void).cxx_destruct;
- (void)sgReloadDataSection:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)insertSection:(id)arg1 atIndexe:(long long)arg2;
- (long long)indexOfSection:(id)arg1;
- (void)addSection:(id)arg1;
- (void)dealloc;
- (void)freshTable;
- (void)mutableArrayContentChange;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

