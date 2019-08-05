//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UILabel, UITableView;
@protocol ShopCartNoUserListCellDelegate;

@interface SGShopCartNoUserListCell : UITableViewCell <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *_goodsModelArray;
    id <ShopCartNoUserListCellDelegate> _cellDelegate;
    UITableView *_tableView;
    UILabel *_nouserNumbLab;
    UIButton *_cleanAllButton;
}

@property(retain, nonatomic) UIButton *cleanAllButton; // @synthesize cleanAllButton=_cleanAllButton;
@property(retain, nonatomic) UILabel *nouserNumbLab; // @synthesize nouserNumbLab=_nouserNumbLab;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <ShopCartNoUserListCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
@property(retain, nonatomic) NSArray *goodsModelArray; // @synthesize goodsModelArray=_goodsModelArray;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cleanNoValidGoods;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

