//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogHelperNoticeCell.h"

@class UILabel, UIView;

@interface SGDialogHelperBillFailureNoticeCell : SGDialogHelperNoticeCell
{
    UILabel *_title;
    UIView *_bgView;
    UIView *_dotView;
    UILabel *_dateLabel;
    UILabel *_amountLabel;
    UILabel *_refundLabel;
    UILabel *_arriveTimeLabel;
    UILabel *_reasonLabel;
    UILabel *_remarksLabel;
    UILabel *_groupNameLabel;
}

@property(nonatomic) __weak UILabel *groupNameLabel; // @synthesize groupNameLabel=_groupNameLabel;
@property(nonatomic) __weak UILabel *remarksLabel; // @synthesize remarksLabel=_remarksLabel;
@property(nonatomic) __weak UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
@property(nonatomic) __weak UILabel *arriveTimeLabel; // @synthesize arriveTimeLabel=_arriveTimeLabel;
@property(nonatomic) __weak UILabel *refundLabel; // @synthesize refundLabel=_refundLabel;
@property(nonatomic) __weak UILabel *amountLabel; // @synthesize amountLabel=_amountLabel;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UIView *dotView; // @synthesize dotView=_dotView;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

