//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JSRNetManager : NSObject
{
}

+ (id)shared;
- (id)_formatParmas:(id)arg1;
- (id)postRequestWithCurrentVC:(id)arg1 url:(id)arg2 param:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)postRequestWithUrl:(id)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

