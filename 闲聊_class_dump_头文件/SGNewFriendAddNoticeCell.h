//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDeatilBaseCell.h"

@class SGSGMessageTextCellTextView, UIImageView, UILabel, UIView;

@interface SGNewFriendAddNoticeCell : SGDialogDeatilBaseCell
{
    SGSGMessageTextCellTextView *_messageLabel;
    UIView *_whiteView;
    UIView *_lineView;
    UIImageView *_leftIconView;
    UILabel *_topTitleLab;
    UILabel *_userNameLab;
    UILabel *_xianliaoLab;
    struct _NSRange _range;
}

@property(nonatomic) __weak UILabel *xianliaoLab; // @synthesize xianliaoLab=_xianliaoLab;
@property(nonatomic) __weak UILabel *userNameLab; // @synthesize userNameLab=_userNameLab;
@property(nonatomic) __weak UILabel *topTitleLab; // @synthesize topTitleLab=_topTitleLab;
@property(nonatomic) __weak UIImageView *leftIconView; // @synthesize leftIconView=_leftIconView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) SGSGMessageTextCellTextView *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)awakeFromNib;

@end

