//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCRecorderTools : NSObject
{
}

+ (id)assetWriterMetadata;
+ (id)bestCaptureSessionPresetCompatibleWithAllDevices;
+ (id)bestCaptureSessionPresetForDevice:(id)arg1 withMaxSize:(struct CGSize)arg2;
+ (id)bestCaptureSessionPresetForDevicePosition:(long long)arg1 withMaxSize:(struct CGSize)arg2;
+ (id)captureSessionPresetForDimension:(CDStruct_1ef3fb1f)arg1;
+ (id)videoDeviceForPosition:(long long)arg1;
+ (int)maxFrameRateForFormat:(id)arg1 minFrameRate:(int)arg2;
+ (_Bool)formatInRange:(id)arg1 frameRate:(int)arg2 dimensions:(CDStruct_1ef3fb1f)arg3;
+ (_Bool)formatInRange:(id)arg1 frameRate:(int)arg2;

@end

