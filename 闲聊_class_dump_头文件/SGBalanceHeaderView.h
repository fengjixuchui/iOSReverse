//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;
@protocol SGChangeHeaderViewDelegate;

@interface SGBalanceHeaderView : UIView
{
    double _balance;
    id <SGChangeHeaderViewDelegate> _delegate;
    UILabel *_changeLab;
}

@property(retain, nonatomic) UILabel *changeLab; // @synthesize changeLab=_changeLab;
@property(nonatomic) id <SGChangeHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double balance; // @synthesize balance=_balance;
- (void).cxx_destruct;
- (void)withdrawAction;
- (void)topUpAction;
- (void)setNumberText:(id)arg1;
- (void)setBalanceWaiting;
- (void)initSubview;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;

@end

