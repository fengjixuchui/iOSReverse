//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOutputStream;

@interface MTOutputStream : NSObject
{
    NSOutputStream *_wrappedOutputStream;
}

- (void).cxx_destruct;
- (void)writeBytes:(id)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeBytesWithoutLength:(id)arg1;
- (void)writeString:(id)arg1;
- (void)writeData:(id)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeInt8:(BOOL)arg1;
- (void)writeInt64:(long long)arg1;
- (void)writeInt16:(short)arg1;
- (void)writeInt32:(int)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (id)currentBytes;
- (void)dealloc;
- (id)wrappedOutputStream;
- (id)init;

@end

