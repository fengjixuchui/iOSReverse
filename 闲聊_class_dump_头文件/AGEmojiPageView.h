//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, UIImage;
@protocol AGEmojiPageViewDelegate;

@interface AGEmojiPageView : UIView
{
    _Bool _isImage;
    _Bool _imageAtStart;
    id <AGEmojiPageViewDelegate> _delegate;
    NSMutableArray *_buttons;
    unsigned long long _columns;
    unsigned long long _rows;
    UIImage *_backSpaceButtonImage;
    NSArray *_buttonTexts;
    struct CGSize _buttonSize;
}

@property(nonatomic) _Bool imageAtStart; // @synthesize imageAtStart=_imageAtStart;
@property(nonatomic) _Bool isImage; // @synthesize isImage=_isImage;
@property(copy, nonatomic) NSArray *buttonTexts; // @synthesize buttonTexts=_buttonTexts;
@property(retain, nonatomic) UIImage *backSpaceButtonImage; // @synthesize backSpaceButtonImage=_backSpaceButtonImage;
@property(nonatomic) unsigned long long rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned long long columns; // @synthesize columns=_columns;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) id <AGEmojiPageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)emojiButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 backSpaceButtonImage:(id)arg2 buttonSize:(struct CGSize)arg3 rows:(unsigned long long)arg4 columns:(unsigned long long)arg5;
- (id)createButtonAtIndex:(unsigned long long)arg1;
- (double)YMarginForButtonInRow:(long long)arg1;
- (double)XMarginForButtonInColumn:(long long)arg1;
- (void)addToViewButton:(id)arg1;
- (void)setButtonTItleBy:(id)arg1 button:(id)arg2;
- (void)setButtonImageBy:(id)arg1 button:(id)arg2;
- (void)setButtonTexts:(id)arg1 isImage:(_Bool)arg2 isStart:(_Bool)arg3;

@end

