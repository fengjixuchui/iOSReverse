//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WVUserScript : NSObject
{
    NSString *_key;
    NSString *_source;
}

@property(readonly, copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)initWithSourceURL:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

