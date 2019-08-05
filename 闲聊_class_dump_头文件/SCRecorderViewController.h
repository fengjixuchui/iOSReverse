//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCRecorderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"

@class CAShapeLayer, CMMotionManager, NSString, SCRecordSession, SCRecorder, SCRecorderToolsView, SGVideoView, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface SCRecorderViewController : UIViewController <SCRecorderDelegate, UIImagePickerControllerDelegate, UIGestureRecognizerDelegate>
{
    SCRecorder *_recorder;
    UIImage *_photo;
    SCRecordSession *_recordSession;
    UIImageView *_ghostImageView;
    unsigned long long recordTime1;
    unsigned long long recordTime2;
    UIView *_recordView;
    UIView *_recordInnerView;
    UIView *_previewView;
    UIView *_loadingView;
    UILabel *_timeRecordedLabel;
    UIView *_downBar;
    UIButton *_reverseCamera;
    CDUnknownBlockType _blockSendImage;
    CDUnknownBlockType _blockSendVideo;
    UILabel *_prompLabel;
    SCRecorderToolsView *_focusView;
    CAShapeLayer *_shapeLayer;
    CMMotionManager *_motionManager;
    long long _deviceOrientation;
    SGVideoView *_videoView;
}

@property(retain, nonatomic) SCRecorder *recorder; // @synthesize recorder=_recorder;
@property(nonatomic) __weak SGVideoView *videoView; // @synthesize videoView=_videoView;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) SCRecorderToolsView *focusView; // @synthesize focusView=_focusView;
@property(nonatomic) __weak UILabel *prompLabel; // @synthesize prompLabel=_prompLabel;
@property(copy, nonatomic) CDUnknownBlockType blockSendVideo; // @synthesize blockSendVideo=_blockSendVideo;
@property(copy, nonatomic) CDUnknownBlockType blockSendImage; // @synthesize blockSendImage=_blockSendImage;
@property(nonatomic) __weak UIButton *reverseCamera; // @synthesize reverseCamera=_reverseCamera;
@property(nonatomic) __weak UIView *downBar; // @synthesize downBar=_downBar;
@property(nonatomic) __weak UILabel *timeRecordedLabel; // @synthesize timeRecordedLabel=_timeRecordedLabel;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak UIView *previewView; // @synthesize previewView=_previewView;
@property(nonatomic) __weak UIView *recordInnerView; // @synthesize recordInnerView=_recordInnerView;
@property(nonatomic) __weak UIView *recordView; // @synthesize recordView=_recordView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)fixOrientation:(id)arg1;
- (void)handleDeviceMotion:(id)arg1;
- (void)startMotionManager;
- (void)closeCamera;
- (void)closeCameraTapped:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)capturePhoto;
- (void)addCircle;
- (void)handleTouchDetected:(id)arg1;
- (void)recorder:(id)arg1 didAppendVideoSampleBufferInSession:(id)arg2;
- (void)updateTimeRecordedLabel;
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2 inSession:(id)arg3 error:(id)arg4;
- (void)recorder:(id)arg1 didBeginSegmentInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didInitializeVideoInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didInitializeAudioInSession:(id)arg2 error:(id)arg3;
- (void)recorder:(id)arg1 didCompleteSession:(id)arg2;
- (void)prepareSession;
- (void)handleRetakeButtonTapped:(id)arg1;
- (void)saveAndShowSession:(id)arg1;
- (void)handleStopButtonTapped:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)handleReverseCameraTapped:(id)arg1;
- (void)showPhoto:(id)arg1;
- (void)showVideo;
- (void)showAlertViewWithTitle:(id)arg1 message:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)recorder:(id)arg1 didReconfigureVideoInput:(id)arg2;
- (void)recorder:(id)arg1 didReconfigureAudioInput:(id)arg2;
- (void)recorder:(id)arg1 didSkipVideoSampleBufferInSession:(id)arg2;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

