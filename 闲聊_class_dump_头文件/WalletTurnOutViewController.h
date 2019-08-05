//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JYangWalletViewController.h"

#import "SelectedCardDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "WalletSubBankDelegate-Protocol.h"
#import "WalletVriPwdDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UILabel, UIPickerView, UISegmentedControl, UIThemeButton, UIView, WalletCardInfoObj, WalletItemView, WalletTurnView;

@interface WalletTurnOutViewController : JYangWalletViewController <SelectedCardDelegate, WalletSubBankDelegate, WalletVriPwdDelegate, UITextFieldDelegate, UIAlertViewDelegate, UIPickerViewDelegate, UIPickerViewDataSource>
{
    NSMutableArray *bankCradArray;
    WalletCardInfoObj *selectedInfo;
    WalletTurnView *_turnView;
    WalletItemView *_timeView;
    WalletItemView *_amountView;
    WalletItemView *_bankProvinceView;
    WalletItemView *_bankCityView;
    UILabel *bankLimitLab;
    _Bool isHasCard;
    _Bool isFreeOut;
    NSString *maxRedeemMoney;
    UIThemeButton *_nextBtn;
    UILabel *_chargeLab;
    UILabel *notiLab;
    UILabel *notiFreeLab;
    UILabel *_friendlyNoti;
    NSString *totalBalance;
    NSString *redeemDesc;
    NSString *_quickRedeemDesc;
    NSString *_maxQuickRedeemMoney;
    NSString *_maxDayQuickRedeemMoney;
    NSString *_maxQuickRedeemMaxMoney;
    NSString *_quickRedemLeft;
    NSString *totalChargeStr;
    NSString *_minRedeemMoney;
    NSMutableArray *provinceArray;
    NSString *provinceName;
    NSString *provinceCode;
    NSString *cityName;
    NSString *cityCode;
    NSString *subBankName;
    _Bool _isShow;
    UIPickerView *_selectedPickerView;
    UIView *_pickerBGView;
    long long _indexSelected;
    long long _ProCellSel;
    long long _CitCellSel;
    NSMutableArray *_currentProArray;
    NSMutableArray *_currentCitArray;
    _Bool _isFuming;
    _Bool _isSupportQuickRedeem;
    _Bool _isServiceChargeRedeem;
    _Bool _isNewUser;
    UISegmentedControl *_segment;
    UIButton *_addBankBtn;
    NSMutableArray *_cityArray;
    NSString *_serviceChargeScale;
    NSString *_showServiceCharge;
}

@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(copy, nonatomic) NSString *showServiceCharge; // @synthesize showServiceCharge=_showServiceCharge;
@property(copy, nonatomic) NSString *serviceChargeScale; // @synthesize serviceChargeScale=_serviceChargeScale;
@property(retain, nonatomic) NSMutableArray *cityArray; // @synthesize cityArray=_cityArray;
@property(nonatomic) __weak UIButton *addBankBtn; // @synthesize addBankBtn=_addBankBtn;
@property(nonatomic) __weak UISegmentedControl *segment; // @synthesize segment=_segment;
@property(nonatomic) _Bool isServiceChargeRedeem; // @synthesize isServiceChargeRedeem=_isServiceChargeRedeem;
@property(nonatomic) _Bool isSupportQuickRedeem; // @synthesize isSupportQuickRedeem=_isSupportQuickRedeem;
@property(nonatomic) _Bool isFuming; // @synthesize isFuming=_isFuming;
- (void).cxx_destruct;
- (double)resetWidthWithLabel:(id)arg1;
- (void)dealloc;
- (void)questionBtn;
- (void)doActionTouchTap;
- (void)walletSelectedBindingNewCard;
- (void)walletSelectedCardViewWithSelectedCardInfo:(id)arg1;
- (void)doWalletSelectedSubBankMsgWithProvinceName:(id)arg1 ProvinceCode:(id)arg2 CityName:(id)arg3 CityCode:(id)arg4 SubBankName:(id)arg5;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)itemTFieldMoneyChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)doActionCheckFormatData;
- (void)doActionSubmitConfirmation;
- (void)doActionClickSubmit;
- (void)doActionClickTurnAll;
- (void)ShowDatePicker;
- (void)doActionSelectedSubBank;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)postGetCityDataRequest;
- (void)doActionSelectedCity;
- (void)doActionSelectedProvince:(id)arg1;
- (void)DimissDatePicker:(id)arg1;
- (void)doMakePickerView;
- (void)doActionClickSelectedCard;
- (void)doActionClickAddCard;
- (void)segmentedControlChange:(id)arg1;
- (void)doCreateSegMentView;
- (void)doRefreshView;
- (void)postGetTurnOutRequest;
- (void)doNotificationBindNewCardDone;
- (void)walletVerifyPageForgetPassword;
- (void)doNotificationBindNewCard;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

