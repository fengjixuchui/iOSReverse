//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SCRecorderFocusTargetView : UIView
{
    float _insideFocusTargetImageSizeRatio;
    UIImageView *_outsideCircle;
    UIImageView *_insideCircle;
}

@property(retain, nonatomic) UIImageView *insideCircle; // @synthesize insideCircle=_insideCircle;
@property(retain, nonatomic) UIImageView *outsideCircle; // @synthesize outsideCircle=_outsideCircle;
@property(nonatomic) float insideFocusTargetImageSizeRatio; // @synthesize insideFocusTargetImageSizeRatio=_insideFocusTargetImageSizeRatio;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *outsideFocusTargetImage;
@property(retain, nonatomic) UIImage *insideFocusTargetImage;
- (void)layoutSubviews;
- (void)stopTargeting;
- (void)startTargeting;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

