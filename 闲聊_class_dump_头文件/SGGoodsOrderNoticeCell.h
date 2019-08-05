//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDeatilBaseCell.h"

@class UIImageView, UILabel, UIView;

@interface SGGoodsOrderNoticeCell : SGDialogDeatilBaseCell
{
    UIImageView *_userIconView;
    UILabel *_nameLab;
    UILabel *_topTitleLab;
    UILabel *_rmbLab;
    UILabel *_showOrderLab;
    UILabel *_contentLab;
    UIImageView *_arrowImageView;
    UIView *_whiteView;
    UIView *_lineView;
}

@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UILabel *contentLab; // @synthesize contentLab=_contentLab;
@property(nonatomic) __weak UILabel *showOrderLab; // @synthesize showOrderLab=_showOrderLab;
@property(nonatomic) __weak UILabel *rmbLab; // @synthesize rmbLab=_rmbLab;
@property(nonatomic) __weak UILabel *topTitleLab; // @synthesize topTitleLab=_topTitleLab;
@property(nonatomic) __weak UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(nonatomic) __weak UIImageView *userIconView; // @synthesize userIconView=_userIconView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)awakeFromNib;

@end

