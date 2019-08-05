//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, SGDialogMessageTextCellModel, SGSGMessageTextCellTextView;

@interface SGDoubleClickAmplificationView : UIView <UITextViewDelegate>
{
    SGSGMessageTextCellTextView *_contentLab;
    SGDialogMessageTextCellModel *_cellModel;
}

+ (void)showAmplificationView:(id)arg1;
@property(retain, nonatomic) SGDialogMessageTextCellModel *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) SGSGMessageTextCellTextView *contentLab; // @synthesize contentLab=_contentLab;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)tapContentLab;
- (void)exit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)addTap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

