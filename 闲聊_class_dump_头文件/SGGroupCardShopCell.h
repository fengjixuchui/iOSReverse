//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDeatilBaseCell.h"

@class UIImageView, UILabel, UIView;

@interface SGGroupCardShopCell : SGDialogDeatilBaseCell
{
    UILabel *_topLabel;
    UIImageView *_topIconView;
    UILabel *_titleLabel;
    UILabel *_rmbLab;
    UILabel *_tagPriceLab;
    UIView *_tagLineV;
    UILabel *_activityNameLab;
    UILabel *_showLab;
    UIImageView *_goodIconView;
    UIView *_lineV;
    UILabel *_bottomLab;
}

@property(nonatomic) __weak UILabel *bottomLab; // @synthesize bottomLab=_bottomLab;
@property(nonatomic) __weak UIView *lineV; // @synthesize lineV=_lineV;
@property(retain, nonatomic) UIImageView *goodIconView; // @synthesize goodIconView=_goodIconView;
@property(nonatomic) __weak UILabel *showLab; // @synthesize showLab=_showLab;
@property(nonatomic) __weak UILabel *activityNameLab; // @synthesize activityNameLab=_activityNameLab;
@property(nonatomic) __weak UIView *tagLineV; // @synthesize tagLineV=_tagLineV;
@property(nonatomic) __weak UILabel *tagPriceLab; // @synthesize tagPriceLab=_tagPriceLab;
@property(nonatomic) __weak UILabel *rmbLab; // @synthesize rmbLab=_rmbLab;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *topIconView; // @synthesize topIconView=_topIconView;
@property(nonatomic) __weak UILabel *topLabel; // @synthesize topLabel=_topLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)awakeFromNib;

@end

