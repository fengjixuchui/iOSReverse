//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SGContactSelectView : UIView
{
    _Bool _selected;
    UIView *_windowView;
    UILabel *_title;
    UIButton *_selectBtn;
    UIButton *_sureBtn;
    UIButton *_cancelBtn;
    CDUnknownBlockType _selectBlock;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *sureBtn; // @synthesize sureBtn=_sureBtn;
@property(retain, nonatomic) UIButton *selectBtn; // @synthesize selectBtn=_selectBtn;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIView *windowView; // @synthesize windowView=_windowView;
- (void).cxx_destruct;
- (void)actionClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

