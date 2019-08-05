//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGWelfareModel : NSObject
{
    _Bool _hiddenLineView;
    long long _type;
    NSString *_articleTitle;
    NSString *_articleImage;
    NSString *_jumpUrl;
    NSString *_articleSummary;
    double _cellHeight;
    double _bigIconHight;
}

@property(nonatomic) double bigIconHight; // @synthesize bigIconHight=_bigIconHight;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool hiddenLineView; // @synthesize hiddenLineView=_hiddenLineView;
@property(copy, nonatomic) NSString *articleSummary; // @synthesize articleSummary=_articleSummary;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *articleImage; // @synthesize articleImage=_articleImage;
@property(copy, nonatomic) NSString *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

