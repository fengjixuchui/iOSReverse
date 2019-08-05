//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, SGUser, UILabel, UITextView;

@interface SGAddFriendVerifyViewController : SGViewController <UITextViewDelegate>
{
    long long _fromType;
    NSString *_token;
    SGUser *_user;
    CDUnknownBlockType _addBlock;
    UITextView *_textView;
    UILabel *_countLabel;
}

@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) CDUnknownBlockType addBlock; // @synthesize addBlock=_addBlock;
@property(retain, nonatomic) SGUser *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)complete:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

