//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SGCustomTitleLabButton, SGRobetListModel, UIImageView, UILabel;
@protocol SGMyRobetListCellDelegate;

@interface SGMyRobetListCell : UITableViewCell
{
    id <SGMyRobetListCellDelegate> _cellDelegate;
    SGRobetListModel *_model;
    UIImageView *_iconView;
    UILabel *_nameLab;
    UILabel *_detailLab;
    SGCustomTitleLabButton *_addButton;
}

@property(retain, nonatomic) SGCustomTitleLabButton *addButton; // @synthesize addButton=_addButton;
@property(retain, nonatomic) UILabel *detailLab; // @synthesize detailLab=_detailLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) SGRobetListModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SGMyRobetListCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)addButtonClick:(id)arg1;
- (void)setChildView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

