//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor, UIImage, UIImageView, UIView;

@interface SGModernButton : UIButton
{
    _Bool _animateHighlight;
    UIColor *_titleColor;
    _Bool _modernHighlight;
    _Bool _stretchHighlightImage;
    UIImage *_highlightImage;
    UIColor *_highlightBackgroundColor;
    CDUnknownBlockType _highlitedChanged;
    UIImageView *_highlightImageView;
    UIView *_highlightBackgroundView;
    struct UIEdgeInsets _backgroundSelectionInsets;
    struct UIEdgeInsets _extendedEdgeInsets;
}

@property(retain, nonatomic) UIView *highlightBackgroundView; // @synthesize highlightBackgroundView=_highlightBackgroundView;
@property(retain, nonatomic) UIImageView *highlightImageView; // @synthesize highlightImageView=_highlightImageView;
@property(copy, nonatomic) CDUnknownBlockType highlitedChanged; // @synthesize highlitedChanged=_highlitedChanged;
@property(nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property(nonatomic) struct UIEdgeInsets backgroundSelectionInsets; // @synthesize backgroundSelectionInsets=_backgroundSelectionInsets;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(nonatomic) _Bool stretchHighlightImage; // @synthesize stretchHighlightImage=_stretchHighlightImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(nonatomic) _Bool modernHighlight; // @synthesize modernHighlight=_modernHighlight;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setHighligtedAnimated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

