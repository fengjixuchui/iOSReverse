//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, MGFaceIDLiveDetectStatisticsManager, NSDictionary;
@protocol MGFaceIDActionLiveManagerDelegate;

@interface MGFaceIDActionLiveManager : NSObject
{
    double _motionY;
    NSDictionary *_actionLiveConfigDict;
    NSDictionary *_resetActionLiveConfigDict;
    struct FaceIDActionLiveManager *_actionLiveManager;
    struct FaceIDActionLiveActionManager _actionManager;
    int _logActionType;
    unsigned long long _verticalType;
    _Bool _isStartDetect;
    int _currentActionStep;
    int _currentQualityError;
    id <MGFaceIDActionLiveManagerDelegate> _delegate;
    MGFaceIDLiveDetectStatisticsManager *_sdkLogManager;
    CMMotionManager *_motionManager;
    long long _currentActionIndex;
}

@property(nonatomic) long long currentActionIndex; // @synthesize currentActionIndex=_currentActionIndex;
@property(nonatomic) int currentQualityError; // @synthesize currentQualityError=_currentQualityError;
@property(nonatomic) int currentActionStep; // @synthesize currentActionStep=_currentActionStep;
@property(nonatomic) _Bool isStartDetect; // @synthesize isStartDetect=_isStartDetect;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) MGFaceIDLiveDetectStatisticsManager *sdkLogManager; // @synthesize sdkLogManager=_sdkLogManager;
@property(nonatomic) __weak id <MGFaceIDActionLiveManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getActionLiveDeltaWithBackGround;
- (id)liveDetectDictWithResult:(_Bool)arg1 failed:(int)arg2 isCancel:(_Bool)arg3;
- (id)liveDetectUploadDataResultDict:(id)arg1 result:(_Bool)arg2;
- (void)faceIDActionLiveDetectSuccess:(id)arg1;
- (void)faceIDActionLiveDetectFailedWithActionType:(int)arg1 failedType:(int)arg2;
- (void)faceIDActionLiveDetectWithNextAction:(int)arg1 failedType:(int)arg2;
- (void)faceIDActionLiveDetectWithCurrentActionIndex:(long long)arg1 actionTime:(float)arg2;
- (void)faceIDActionLiveDetectWithFinishLookMirror;
- (void)faceIDActionLiveDetectWithQualityErrorType:(int)arg1;
- (void)faceIDActionLiveDetectWithStartLookMirror;
- (void)faceIDActionLiveDetectResult:(id)arg1;
- (unsigned long long)actionLiveTimeout;
- (unsigned long long)actionCount;
- (void)cancelActionLiveDetection;
- (void)resetActionLiveDetection;
- (void)stopActionLiveDetection;
- (void)startActionLiveDetection;
- (void)detectFaceFrameWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (id)initActionLiveManagerWithTimeout:(unsigned long long)arg1 liveConfig:(id)arg2 resetLiveConfig:(id)arg3 actionManager:(id)arg4 sdkLogManager:(id)arg5 phoneVertical:(unsigned long long)arg6;
- (void)dealloc;

@end

