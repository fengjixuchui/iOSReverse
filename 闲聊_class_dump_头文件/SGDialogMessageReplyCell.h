//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDeatilBaseCell.h"

@class SGSGMessageTextCellTextView, UIImageView, UILabel;

@interface SGDialogMessageReplyCell : SGDialogDeatilBaseCell
{
    SGSGMessageTextCellTextView *_messageTextView;
    UIImageView *_replayBackIV;
    UILabel *_replayNameLabel;
    UIImageView *_replayIcon;
    SGSGMessageTextCellTextView *_replayTextView;
    UIImageView *_replayIV;
    UIImageView *_replayMaskIV;
}

@property(nonatomic) __weak UIImageView *replayMaskIV; // @synthesize replayMaskIV=_replayMaskIV;
@property(nonatomic) __weak UIImageView *replayIV; // @synthesize replayIV=_replayIV;
@property(nonatomic) __weak SGSGMessageTextCellTextView *replayTextView; // @synthesize replayTextView=_replayTextView;
@property(nonatomic) __weak UIImageView *replayIcon; // @synthesize replayIcon=_replayIcon;
@property(nonatomic) __weak UILabel *replayNameLabel; // @synthesize replayNameLabel=_replayNameLabel;
@property(nonatomic) __weak UIImageView *replayBackIV; // @synthesize replayBackIV=_replayBackIV;
@property(nonatomic) __weak SGSGMessageTextCellTextView *messageTextView; // @synthesize messageTextView=_messageTextView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setReplayIVImage:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

