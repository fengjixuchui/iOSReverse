//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

@interface SGChatTableView : UITableView
{
    _Bool _scrollViewToBottom;
    _Bool _animation;
}

@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool scrollViewToBottom; // @synthesize scrollViewToBottom=_scrollViewToBottom;
- (void)reloadData;
- (void)scrollViewToIndexPath:(id)arg1 duration:(double)arg2;
- (void)setContentSize:(struct CGSize)arg1;

@end

