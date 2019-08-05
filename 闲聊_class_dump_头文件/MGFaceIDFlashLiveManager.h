//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, MGFaceIDLiveDetectStatisticsManager, NSDictionary, NSString, NSTimer;
@protocol MGFaceIDFlashLiveManagerDelegate;

@interface MGFaceIDFlashLiveManager : NSObject
{
    double _motionY;
    _Bool _isStartLookMirror;
    _Bool _isStartDetect;
    _Bool _ignoreMotion;
    float _lightEV;
    NSDictionary *_flashLiveConfigDict;
    int _currentFlashStep;
    struct FaceIDFlashLiveManager *_flashLiveManager;
    unsigned long long _verticalType;
    int _liveFailedType;
    int _detectTimeout;
    int _currentQualityError;
    id <MGFaceIDFlashLiveManagerDelegate> _delegate;
    unsigned long long _colorIndex;
    NSString *_colorOrder;
    unsigned long long _retryCount;
    MGFaceIDLiveDetectStatisticsManager *_sdkLogManager;
    CMMotionManager *_motionManager;
    NSTimer *_ignoreMotionTimer;
    NSTimer *_timeoutTimer;
}

+ (void)imageBufferBGRA2BGRWithsrc:(const char *)arg1 dst:(char *)arg2 imageWidth:(int)arg3 imageHeight:(int)arg4;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) NSTimer *ignoreMotionTimer; // @synthesize ignoreMotionTimer=_ignoreMotionTimer;
@property(nonatomic) int currentQualityError; // @synthesize currentQualityError=_currentQualityError;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) MGFaceIDLiveDetectStatisticsManager *sdkLogManager; // @synthesize sdkLogManager=_sdkLogManager;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) int detectTimeout; // @synthesize detectTimeout=_detectTimeout;
@property(retain, nonatomic) NSString *colorOrder; // @synthesize colorOrder=_colorOrder;
@property(nonatomic) unsigned long long colorIndex; // @synthesize colorIndex=_colorIndex;
@property(nonatomic) __weak id <MGFaceIDFlashLiveManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)uintbyte2Int:(char *)arg1;
- (_Bool)checkMOVFile:(id)arg1 size:(char *)arg2 type:(char *)arg3;
- (_Bool)checkMOVFile:(id)arg1;
- (id)getFlashLiveDeltaWithBackGround;
- (id)liveDetectUploadDataResultDict:(int)arg1 isCancel:(_Bool)arg2 videoIntegrity:(_Bool)arg3;
- (id)liveDetectUploadDataResultDict:(int)arg1 isCancel:(_Bool)arg2;
- (id)liveDetectUploadDataResult:(int)arg1 isCancel:(_Bool)arg2;
- (id)liveDetectUploadDataWithvideoAbnormalResult:(int)arg1;
- (void)faceIDFlashLiveDetectFinish:(int)arg1;
- (void)faceIDFlashLiveDetectStartRecordVideo;
- (void)faceIDFlashLiveDetectLightEVStepError:(int)arg1;
- (void)faceIDFlashLiveDetectQualityStepError:(int)arg1;
- (void)faceIDFlashLiveDetectProgress:(float)arg1;
- (void)faceIDFlashLiveResetRecording;
- (void)faceIDFlashLiveStartLookMirror;
- (void)faceIDFlashLiveDetectResult:(id)arg1;
- (void)flashLiveTimeoutWithVertical:(id)arg1;
- (unsigned long long)flashLiveTimeout;
- (void)failedFlashLiveDetect;
- (void)finishFlashLiveDetect;
- (void)cancelFlashLiveDetection;
- (void)resetFlashLiveDetection;
- (void)stopFlashLiveDetection;
- (void)startFlashLiveDetection;
- (void)ignorePhoneVerticalDetect;
- (void)startTimerToIgnoreVerticalDetect;
- (void)startPhoneVerticalDetect;
- (_Bool)detectFaceFrameWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2 lightEV:(_Bool)arg3 record:(_Bool)arg4 cameraISO:(float)arg5 cameraTimer:(CDStruct_1b6d18a9)arg6 lensAperture:(float)arg7;
- (id)initFlashLiveManagerWithLiveConfig:(id)arg1 sdkLogManager:(id)arg2 phoneVertical:(unsigned long long)arg3;
- (void)deleteLiveManager;
- (void)dealloc;

@end

