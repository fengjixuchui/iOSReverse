//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASSSecureSdk : NSObject
{
}

+ (id)loadTrustData;
+ (void)saveTrustData:(id)arg1;
+ (id)getUtdid;
+ (id)getTokenResult;
+ (void)initToken:(long long)arg1 parameters:(id)arg2 callback:(CDUnknownBlockType)arg3;
+ (void)initToken:(long long)arg1 utdid:(id)arg2 tid:(id)arg3 callback:(CDUnknownBlockType)arg4;

@end

