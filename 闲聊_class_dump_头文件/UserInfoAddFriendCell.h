//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SGButton, UIButton, UIView;

@interface UserInfoAddFriendCell : UITableViewCell
{
    _Bool _inBlock;
    UIView *_bgView;
    SGButton *_addBtn;
    UIButton *_blockBtn;
}

@property(nonatomic) _Bool inBlock; // @synthesize inBlock=_inBlock;
@property(retain, nonatomic) UIButton *blockBtn; // @synthesize blockBtn=_blockBtn;
@property(retain, nonatomic) SGButton *addBtn; // @synthesize addBtn=_addBtn;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1 withNewFriend:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

