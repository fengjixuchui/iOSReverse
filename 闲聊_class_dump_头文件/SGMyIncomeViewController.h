//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGGoodsBaseViewController.h"

@class SGGetMyIncomeStatisticsResp, SGSetGameLoadingView, UILabel;

@interface SGMyIncomeViewController : SGGoodsBaseViewController
{
    long long _groupId;
    UILabel *_totalMoneyLab;
    UILabel *_moneyLab;
    UILabel *_numLab;
    SGGetMyIncomeStatisticsResp *_icomeResp;
    SGSetGameLoadingView *_loadingView;
    UILabel *_choosGroupNameLab;
    UILabel *_totalEstimateMoneyLab;
}

@property(retain, nonatomic) UILabel *totalEstimateMoneyLab; // @synthesize totalEstimateMoneyLab=_totalEstimateMoneyLab;
@property(retain, nonatomic) UILabel *choosGroupNameLab; // @synthesize choosGroupNameLab=_choosGroupNameLab;
@property(retain, nonatomic) SGSetGameLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SGGetMyIncomeStatisticsResp *icomeResp; // @synthesize icomeResp=_icomeResp;
@property(retain, nonatomic) UILabel *numLab; // @synthesize numLab=_numLab;
@property(retain, nonatomic) UILabel *moneyLab; // @synthesize moneyLab=_moneyLab;
@property(retain, nonatomic) UILabel *totalMoneyLab; // @synthesize totalMoneyLab=_totalMoneyLab;
@property(nonatomic) long long groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tapChooseMyGroup;
- (void)clcikButton:(id)arg1;
- (void)enterMyBanlance;
- (void)showOrderDetail;
- (id)getButtonList:(id)arg1 buttonTag:(long long)arg2;
- (void)setData;
- (void)getMyGroupIncom;
- (void)retryRequest;
- (void)getMyIncom;
- (void)creatChildeView;
- (void)askHelp;
- (void)viewDidLoad;

@end

