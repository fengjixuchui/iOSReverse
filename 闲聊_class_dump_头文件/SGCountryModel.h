//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGCountryModel : NSObject
{
    NSString *_country;
    NSString *_code;
    NSString *_first;
    NSString *_chineseName;
    NSString *_firstPinYinName;
}

@property(copy, nonatomic) NSString *firstPinYinName; // @synthesize firstPinYinName=_firstPinYinName;
@property(copy, nonatomic) NSString *chineseName; // @synthesize chineseName=_chineseName;
@property(copy, nonatomic) NSString *first; // @synthesize first=_first;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
- (void).cxx_destruct;
- (id)resp_deserialize:(id)arg1;

@end

