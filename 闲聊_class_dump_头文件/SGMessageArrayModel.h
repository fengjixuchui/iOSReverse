//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SGMessageArrayModel : NSObject
{
    _Bool _loadFinish;
    NSMutableArray *_msgArray;
    NSMutableDictionary *_msgDic;
}

@property(nonatomic) _Bool loadFinish; // @synthesize loadFinish=_loadFinish;
@property(retain, nonatomic) NSMutableDictionary *msgDic; // @synthesize msgDic=_msgDic;
@property(retain, nonatomic) NSMutableArray *msgArray; // @synthesize msgArray=_msgArray;
- (void).cxx_destruct;
- (id)init;

@end

