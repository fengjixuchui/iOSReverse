//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface UIImageView (PlayGIF)
+ (void)load;
- (id)frames;
- (float)frameDurationAtIndex:(unsigned long long)arg1;
- (struct CGSize)GIFDimensionalSize;
- (float)gifFrameDurationAtIndex:(unsigned long long)arg1;
- (struct CGImage *)gifCreateImageForFrameAtIndex:(long long)arg1;
- (struct CGSize)gifPixelSize;
- (_Bool)isGIFPlaying;
- (int)indexForDuration:(float)arg1;
- (void)play;
- (void)stopGIF;
- (id)gifLength;
- (id)buildIndexAndReturnLength;
- (void)startGIFWithRunLoopMode:(id)arg1;
- (void)startGIF;
@property(copy, nonatomic) CDUnknownBlockType currentIndexBLock;
@property(retain, nonatomic) NSDictionary *indexDurations; // @dynamic indexDurations;
@property(retain, nonatomic) NSNumber *timestamp; // @dynamic timestamp;
@property(retain, nonatomic) NSNumber *frameCount; // @dynamic frameCount;
@property(retain, nonatomic) NSNumber *index; // @dynamic index;
@property(retain, nonatomic) NSData *gifData; // @dynamic gifData;
@property(retain, nonatomic) NSString *gifPath; // @dynamic gifPath;
- (void)yfgif_removeFromSuperview;
@end

