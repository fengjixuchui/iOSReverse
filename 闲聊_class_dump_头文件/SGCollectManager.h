//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SGCollectManager : NSObject
{
    NSMutableArray *_collectMessageArray;
}

+ (id)instance;
@property(retain, nonatomic) NSMutableArray *collectMessageArray; // @synthesize collectMessageArray=_collectMessageArray;
- (void).cxx_destruct;
- (void)deleteCollect;
- (void)updateCollectMessagesArray:(id)arg1;
- (void)deleteHelpLink:(id)arg1;
- (_Bool)addHelpLink:(id)arg1;
- (_Bool)containHelpLine:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)deleteMessagesArray:(id)arg1;
- (_Bool)addMessage:(id)arg1;
- (_Bool)containMessage:(id)arg1;
- (void)addMessages:(id)arg1;
- (id)init;

@end

