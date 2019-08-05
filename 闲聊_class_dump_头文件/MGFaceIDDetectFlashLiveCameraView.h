//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "CALayerDelegate-Protocol.h"

@class AVCaptureVideoPreviewLayer, MGFaceIDDetectFlashLiveWhiteRoundLayer, MGFaceIDLiveDetectCustomConfigItem, NSArray, NSString, NSTimer, UIButton, UIImage, UIImageView, UILabel, UITextView;
@protocol MGFaceIDDetectFlashLiveCameraVDelegate;

@interface MGFaceIDDetectFlashLiveCameraView : UIView <CALayerDelegate, CAAnimationDelegate>
{
    _Bool _isLookMirror;
    unsigned long long _halfwayIndex;
    id <MGFaceIDDetectFlashLiveCameraVDelegate> _delegate;
    AVCaptureVideoPreviewLayer *_previewLayer;
    UIButton *_closeButton;
    UIImage *_logoImage;
    MGFaceIDDetectFlashLiveWhiteRoundLayer *_roundLayer;
    UIView *_colorView;
    UIImageView *_maskFaceImageV;
    UIImageView *_activeityIndeImageV;
    UITextView *_messageTV;
    UILabel *_tooBrightLable;
    MGFaceIDLiveDetectCustomConfigItem *_customConfigItem;
    NSTimer *_halfwayTimer;
    NSArray *_colorOrder;
}

@property(retain, nonatomic) NSArray *colorOrder; // @synthesize colorOrder=_colorOrder;
@property(retain, nonatomic) NSTimer *halfwayTimer; // @synthesize halfwayTimer=_halfwayTimer;
@property(retain, nonatomic) MGFaceIDLiveDetectCustomConfigItem *customConfigItem; // @synthesize customConfigItem=_customConfigItem;
@property(retain, nonatomic) UILabel *tooBrightLable; // @synthesize tooBrightLable=_tooBrightLable;
@property(retain, nonatomic) UITextView *messageTV; // @synthesize messageTV=_messageTV;
@property(retain, nonatomic) UIImageView *activeityIndeImageV; // @synthesize activeityIndeImageV=_activeityIndeImageV;
@property(retain, nonatomic) UIImageView *maskFaceImageV; // @synthesize maskFaceImageV=_maskFaceImageV;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(retain, nonatomic) MGFaceIDDetectFlashLiveWhiteRoundLayer *roundLayer; // @synthesize roundLayer=_roundLayer;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) __weak id <MGFaceIDDetectFlashLiveCameraVDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)changeImageColorWithImageName:(id)arg1 color:(id)arg2 fuseImage:(id)arg3;
- (void)setCurrentFlashLiveDetectState:(unsigned long long)arg1;
- (void)showFlashDetectProgress:(double)arg1;
- (void)flashWithColor:(id)arg1;
- (void)progressHUD:(_Bool)arg1 animation:(_Bool)arg2;
- (void)flashDetectHalfway:(id)arg1;
- (void)finishHalfway;
- (void)isTooBirghtRemind;
- (void)isStartHalfway;
- (void)isStartFlashing;
- (void)isDetectFailure;
- (void)isDetectFinish;
- (void)isLookMirror;
- (void)showFaceIDDetectLiveMessage:(id)arg1;
- (void)changeMaskFaceImage:(_Bool)arg1;
- (void)loadDefaultView:(id)arg1;
- (void)flashHalfwayColorCollect:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)loadRingAnimationWithColor:(id)arg1 time:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 uiConfig:(id)arg2 logoImage:(id)arg3 colorOrder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

