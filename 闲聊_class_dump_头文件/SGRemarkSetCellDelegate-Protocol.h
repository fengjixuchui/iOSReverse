//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SGRemarkSetModel;

@protocol SGRemarkSetCellDelegate <NSObject>

@optional
- (void)setPhoneText:(NSString *)arg1 model:(SGRemarkSetModel *)arg2;
- (void)addPhoneCell:(SGRemarkSetModel *)arg1;
@end

