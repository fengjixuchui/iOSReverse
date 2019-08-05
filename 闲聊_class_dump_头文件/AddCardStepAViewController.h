//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JYPacketViewController.h"

#import "UITapLabelDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIImageView, UITextField;

@interface AddCardStepAViewController : JYPacketViewController <UITextFieldDelegate, UITapLabelDelegate>
{
    UITextField *currentF;
    float CELL_H;
    float CELL_T_H;
    float CELL_S_H;
    UIImageView *BG_PWD;
    NSString *passWord;
    _Bool _needSetPwd;
}

@property(nonatomic, getter=isNeedSetPwd) _Bool needSetPwd; // @synthesize needSetPwd=_needSetPwd;
- (void).cxx_destruct;
- (void)doActionClickGoBack;
- (void)doClickActionNext;
- (void)doActionClickPwdTextF;
- (void)doActionClickHidden;
- (void)doActionChangeFrameWithTag:(long long)arg1 keyBoardDone:(_Bool)arg2;
- (void)doChangePassWordPointWithCount:(long long)arg1 PasswordString:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tapLabel:(id)arg1 touchesWithTag:(long long)arg2;
- (void)postGetValiUserMsgRequestData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

