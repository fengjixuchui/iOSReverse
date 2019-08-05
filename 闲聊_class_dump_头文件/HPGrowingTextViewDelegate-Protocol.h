//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HPGrowingTextView, NSData, NSString, UIImage;

@protocol HPGrowingTextViewDelegate <NSObject>

@optional
- (void)growingTextViewTextChange:(NSString *)arg1;
- (void)inputViewDidClear;
- (void)growingTextView:(HPGrowingTextView *)arg1 receivedReturnKeyCommandWithModifierFlags:(long long)arg2;
- (void)growingTextView:(HPGrowingTextView *)arg1 didPasteData:(NSData *)arg2;
- (void)growingTextView:(HPGrowingTextView *)arg1 didPasteImage:(UIImage *)arg2;
- (_Bool)growingTextViewShouldReturn:(HPGrowingTextView *)arg1;
- (void)growingTextViewDidChangeSelection:(HPGrowingTextView *)arg1;
- (void)growingTextView:(HPGrowingTextView *)arg1 willChangeHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
- (void)growingTextViewDidChange:(HPGrowingTextView *)arg1 afterSetText:(_Bool)arg2;
- (_Bool)growingTextView:(HPGrowingTextView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (_Bool)growingTextViewEnabled:(HPGrowingTextView *)arg1 replacementText:(NSString *)arg2;
- (void)growingTextViewDidEndEditing:(HPGrowingTextView *)arg1;
- (void)growingTextViewDidBeginEditing:(HPGrowingTextView *)arg1;
- (_Bool)growingTextViewShouldBeginEditing:(HPGrowingTextView *)arg1;
@end

