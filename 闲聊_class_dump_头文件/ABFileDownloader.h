//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABFileDownloader : NSObject
{
}

+ (_Bool)checkFile:(id)arg1 expectSize:(int)arg2 expectMd5:(id)arg3;
- (void)download:(id)arg1 fileSavePath:(id)arg2 expectSize:(int)arg3 expectMd5:(id)arg4 onError:(CDUnknownBlockType)arg5 onFinish:(CDUnknownBlockType)arg6;
- (void)deleteFile:(id)arg1;

@end

