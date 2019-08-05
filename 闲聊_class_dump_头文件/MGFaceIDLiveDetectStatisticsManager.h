//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface MGFaceIDLiveDetectStatisticsManager : NSObject
{
    NSDictionary *actionliveDetectEventDict;
    NSDictionary *actionliveLookMirrorFailEventDict;
    NSDictionary *actionliveFailLivenessDict;
    NSDictionary *actionTypeDict;
    NSDictionary *actionStateDict;
    NSDictionary *silentliveDetectEventDict;
    NSDictionary *flashliveDetectEventDict;
    NSString *_bizTokenStr;
    NSString *_bizNumberStr;
    NSMutableArray *_liveDetectLogList;
}

@property(retain, nonatomic) NSMutableArray *liveDetectLogList; // @synthesize liveDetectLogList=_liveDetectLogList;
@property(copy, nonatomic) NSString *bizNumberStr; // @synthesize bizNumberStr=_bizNumberStr;
@property(copy, nonatomic) NSString *bizTokenStr; // @synthesize bizTokenStr=_bizTokenStr;
- (void).cxx_destruct;
- (id)createUUID;
- (id)getEveneListJsonStr;
- (id)getBizNumberStr;
- (id)getBizTokenStr;
- (void)uploadLivenessInfoWithData:(id)arg1;
- (void)uploadFaceIDMegLiveActionLiveEvent:(int)arg1 actionIndex:(long long)arg2 actionState:(unsigned long long)arg3;
- (void)uploadFaceIDMegLiveActionLiveLivenessFailEvent:(int)arg1;
- (void)uploadFaceIDMegLiveActionLiveMirrorFailEvent:(int)arg1;
- (void)uploadFaceIDMegLiveActionLiveEvent:(unsigned long long)arg1;
- (void)uploadFaceIDMegLiveFlashLiveFailType:(unsigned long long)arg1 failEvent:(int)arg2 retry:(unsigned long long)arg3;
- (void)uploadFaceIDMegLiveFlashLiveEvent:(unsigned long long)arg1 retry:(unsigned long long)arg2;
- (void)uploadFaceIDMegLiveSilentLiveFailType:(unsigned long long)arg1 failEvent:(int)arg2;
- (void)uploadFaceIDMegLiveSilentLiveEvent:(unsigned long long)arg1;
- (void)uploadFaceIDMegLiveHeaderInfo;
- (id)initStatisticsManagerWithBizToken:(id)arg1 bizNumber:(id)arg2;

@end

