//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (WVUtility)
+ (_Bool)wv_swizzle:(Class)arg1 ClassMethod:(SEL)arg2 withClassMethod:(SEL)arg3;
+ (_Bool)wv_swizzle:(Class)arg1 Method:(SEL)arg2 withMethod:(SEL)arg3;
+ (_Bool)wvSwizzleClassMethod:(SEL)arg1 withClass:(Class)arg2 withClassMethod:(SEL)arg3;
+ (_Bool)wvSwizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (_Bool)wvSwizzleMethod:(SEL)arg1 withClass:(Class)arg2 withMethod:(SEL)arg3;
+ (_Bool)wvSwizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2 withBOOLResult:(_Bool *)arg3;
- (_Bool)wvTryInvoke:(SEL)arg1 withInt:(int)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withBOOL:(_Bool)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withObject:(id)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withBOOLResult:(_Bool *)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1 withResult:(id *)arg2;
- (_Bool)wvTryInvoke:(SEL)arg1;
- (double)wvInvokeWithDoubleResult:(SEL)arg1;
- (long long)wvInvokeWithIntegerResult:(SEL)arg1;
- (_Bool)wvInvokeWithBOOLResult:(SEL)arg1;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4 withObject:(id)arg5;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 withObject:(id)arg4;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)wvInvoke:(SEL)arg1 withObject:(id)arg2;
- (id)wvInvoke:(SEL)arg1;
@end

