//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;
@protocol UITapLabelDelegate;

@interface UITapLabel : UILabel
{
    struct CGPoint touchPoint;
    _Bool _enable;
    UIColor *_txtColor;
    id <UITapLabelDelegate> _delegate;
}

@property(nonatomic) id <UITapLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) UIColor *txtColor; // @synthesize txtColor=_txtColor;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

