//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UISwitch, UIView;
@protocol SetInterstCellDelegate;

@interface SGSetInterstCell : UITableViewCell
{
    id <SetInterstCellDelegate> _cellDelegate;
    UILabel *_leftTitleLab;
    UILabel *_nameLabel;
    UISwitch *_openSwitch;
    UILabel *_detailLab;
    UIView *_lineV;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *lineV; // @synthesize lineV=_lineV;
@property(retain, nonatomic) UILabel *detailLab; // @synthesize detailLab=_detailLab;
@property(retain, nonatomic) UISwitch *openSwitch; // @synthesize openSwitch=_openSwitch;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *leftTitleLab; // @synthesize leftTitleLab=_leftTitleLab;
@property(nonatomic) id <SetInterstCellDelegate> cellDelegate; // @synthesize cellDelegate=_cellDelegate;
- (void).cxx_destruct;
- (void)switchOperation:(id)arg1;
- (void)configData:(id)arg1 name:(id)arg2 detailText:(id)arg3 openSwitch:(_Bool)arg4;
- (void)creatChildView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

