//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JrmfRefreshBaseView.h"

@class NSDate, UILabel;

@interface JrmfRefreshHeaderView : JrmfRefreshBaseView
{
    NSDate *_lastUpdateTime;
    UILabel *_lastUpdateTimeLabel;
}

+ (id)JrmfHeader;
@property(nonatomic) __weak UILabel *lastUpdateTimeLabel; // @synthesize lastUpdateTimeLabel=_lastUpdateTimeLabel;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)adjustStateWithContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTimeLabel;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

