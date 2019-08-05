//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGTableViewCellBase.h"

@class NSLayoutConstraint, SGGameObject, UIButton, UIImageView, UILabel, UIView;
@protocol SGPopularzingCellDelegate;

@interface SGPopularzingCell : SGTableViewCellBase
{
    UIView *_bottomLine;
    SGGameObject *_gameVO;
    id <SGPopularzingCellDelegate> _delegate;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_descripe;
    UIButton *_stateButton;
    NSLayoutConstraint *_stateButtonWidth;
}

@property(nonatomic) __weak NSLayoutConstraint *stateButtonWidth; // @synthesize stateButtonWidth=_stateButtonWidth;
@property(nonatomic) __weak UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(nonatomic) __weak UILabel *descripe; // @synthesize descripe=_descripe;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SGPopularzingCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SGGameObject *gameVO; // @synthesize gameVO=_gameVO;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
- (void).cxx_destruct;
- (void)apply:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

