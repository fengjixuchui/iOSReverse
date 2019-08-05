//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSString, UITextField;
@protocol ZPassWordViewDelegate;

@interface ZPassWordView : UIView
{
    UITextField *_passwordTF;
    long long _passwordNum;
    NSMutableArray *_pointViewArr;
    NSString *_tmpPassword;
    id <ZPassWordViewDelegate> _delegate;
}

@property(nonatomic) id <ZPassWordViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *tmpPassword; // @synthesize tmpPassword=_tmpPassword;
@property(retain, nonatomic) NSMutableArray *pointViewArr; // @synthesize pointViewArr=_pointViewArr;
@property(nonatomic) long long passwordNum; // @synthesize passwordNum=_passwordNum;
@property(retain, nonatomic) UITextField *passwordTF; // @synthesize passwordTF=_passwordTF;
- (void).cxx_destruct;
- (void)becomPasswordFirstResponder;
- (void)resignTextFirstResponder;
- (void)clearText;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)textDidChangAction:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 withPasswordNum:(long long)arg2 withDelegate:(id)arg3;

@end

