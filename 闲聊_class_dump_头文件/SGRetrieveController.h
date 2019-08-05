//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;

@interface SGRetrieveController : SGViewController <UITextFieldDelegate>
{
    UILabel *_errorLab;
    UITextField *_confirmPasswordTF;
    UITextField *_passWordTF;
}

@property(retain, nonatomic) UITextField *passWordTF; // @synthesize passWordTF=_passWordTF;
@property(retain, nonatomic) UITextField *confirmPasswordTF; // @synthesize confirmPasswordTF=_confirmPasswordTF;
@property(retain, nonatomic) UILabel *errorLab; // @synthesize errorLab=_errorLab;
- (void).cxx_destruct;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)confirmAction;
- (void)sgEndEditing;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

