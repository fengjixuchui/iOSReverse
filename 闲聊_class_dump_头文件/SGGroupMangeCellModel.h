//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SGGroupMangeCellModel : NSObject
{
    _Bool _hiddenArrowSign;
    _Bool _redRewind;
    _Bool _switchOn;
    _Bool _isShowRedDot;
    NSString *_nameTitle;
    NSString *_subInfoTitle;
    unsigned long long _cellType;
    double _cellHeight;
}

@property(nonatomic) _Bool isShowRedDot; // @synthesize isShowRedDot=_isShowRedDot;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool switchOn; // @synthesize switchOn=_switchOn;
@property(nonatomic) _Bool redRewind; // @synthesize redRewind=_redRewind;
@property(nonatomic) _Bool hiddenArrowSign; // @synthesize hiddenArrowSign=_hiddenArrowSign;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
@property(copy, nonatomic) NSString *subInfoTitle; // @synthesize subInfoTitle=_subInfoTitle;
@property(copy, nonatomic) NSString *nameTitle; // @synthesize nameTitle=_nameTitle;
- (void).cxx_destruct;

@end

