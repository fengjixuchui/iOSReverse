//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGDialogDetailCellModel.h"

@class NSString;

@interface SGDialogHelperWithdrawNotic : SGDialogDetailCellModel
{
    NSString *_titleText;
    NSString *_dateLabelText;
    NSString *_bankNameText;
    NSString *_nameText;
    NSString *_amountLabelText;
    NSString *_bankAccountText;
    NSString *_arrivalTimeStr;
}

@property(copy, nonatomic) NSString *arrivalTimeStr; // @synthesize arrivalTimeStr=_arrivalTimeStr;
@property(copy, nonatomic) NSString *bankAccountText; // @synthesize bankAccountText=_bankAccountText;
@property(copy, nonatomic) NSString *amountLabelText; // @synthesize amountLabelText=_amountLabelText;
@property(copy, nonatomic) NSString *nameText; // @synthesize nameText=_nameText;
@property(copy, nonatomic) NSString *bankNameText; // @synthesize bankNameText=_bankNameText;
@property(copy, nonatomic) NSString *dateLabelText; // @synthesize dateLabelText=_dateLabelText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (double)cellHeight;
- (Class)getCellClass;
- (id)initWithMessage:(id)arg1 member:(id)arg2;

@end

