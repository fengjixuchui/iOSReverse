//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGJiFenModel : NSObject
{
    NSString *_title;
    NSString *_goldCoinAmount;
    NSString *_sendTime;
    NSString *_desc;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *sendTime; // @synthesize sendTime=_sendTime;
@property(copy, nonatomic) NSString *goldCoinAmount; // @synthesize goldCoinAmount=_goldCoinAmount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)contentDic;
- (id)contentStr;
- (id)contentArr;
- (id)goldCoinAmountStr;

@end

