//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMethodSignature;

@interface ONIMehtodId : NSObject
{
    NSMethodSignature *_methodSignature;
    Class _class;
    SEL _selector;
}

+ (id)makeMethodIdWithMethodName:(const char *)arg1 class:(Class)arg2;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(nonatomic) Class class; // @synthesize class=_class;
@property(retain, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
- (void)dealloc;
- (_Bool)invokeWithTarget_pri:(struct LiteVM *)arg1 Target:(id)arg2 parameter:(char *)arg3 result:(void *)arg4;
- (_Bool)invokeWithTarget:(struct LiteVMContext *)arg1 Target:(id)arg2 parameter:(char *)arg3 result:(void *)arg4;

@end

