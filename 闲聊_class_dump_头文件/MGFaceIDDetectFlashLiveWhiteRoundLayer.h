//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface MGFaceIDDetectFlashLiveWhiteRoundLayer : CALayer
{
    double _progressColorCompnents[3];
    _Bool _isHiddenRound;
    float _roundProgress;
}

- (void)drawInContext:(struct CGContext *)arg1;
- (void)setNearFlashing:(_Bool)arg1 progress:(double)arg2 R:(float)arg3 G:(float)arg4 B:(float)arg5;
- (void)isFinish;
- (void)isFailure;
- (void)isLookMirror;
- (void)setNearFlashing:(_Bool)arg1 progress:(double)arg2;

@end

