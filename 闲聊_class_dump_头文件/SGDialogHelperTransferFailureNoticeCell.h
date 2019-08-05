//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogHelperNoticeCell.h"

@class UIImageView, UILabel, UIView;

@interface SGDialogHelperTransferFailureNoticeCell : SGDialogHelperNoticeCell
{
    UILabel *_titleLabel;
    UIView *_bgView;
    UILabel *_timeLabel;
    UILabel *_amountLabel;
    UILabel *_transferWayLabel;
    UILabel *_transferRefuseLabel;
    UILabel *_refuseTimeLabel;
    UIImageView *_dotImageView;
    UILabel *_transferTimeLabel;
    UILabel *_remarkLabel;
    UILabel *_refuseExplainLabel;
    UILabel *_remarkExplainLabel;
}

@property(nonatomic) __weak UILabel *remarkExplainLabel; // @synthesize remarkExplainLabel=_remarkExplainLabel;
@property(nonatomic) __weak UILabel *refuseExplainLabel; // @synthesize refuseExplainLabel=_refuseExplainLabel;
@property(nonatomic) __weak UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(nonatomic) __weak UILabel *transferTimeLabel; // @synthesize transferTimeLabel=_transferTimeLabel;
@property(nonatomic) __weak UIImageView *dotImageView; // @synthesize dotImageView=_dotImageView;
@property(nonatomic) __weak UILabel *refuseTimeLabel; // @synthesize refuseTimeLabel=_refuseTimeLabel;
@property(nonatomic) __weak UILabel *transferRefuseLabel; // @synthesize transferRefuseLabel=_transferRefuseLabel;
@property(nonatomic) __weak UILabel *transferWayLabel; // @synthesize transferWayLabel=_transferWayLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

