//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGBaseSettingController.h"

@class SGIsPayPasswdSetResp, SGNewGetRealNameInfoResp, SGProfileInfoCellModel, SGSectionModel;

@interface SGPayMangerViewController : SGBaseSettingController
{
    SGSectionModel *_passwordSection;
    SGProfileInfoCellModel *_forgetPayPasswordCell;
    SGProfileInfoCellModel *_setPasswordCell;
    SGIsPayPasswdSetResp *_isPayPassWord;
    SGNewGetRealNameInfoResp *_infoResp;
    SGProfileInfoCellModel *_realNameSectionCell;
}

@property(retain, nonatomic) SGProfileInfoCellModel *realNameSectionCell; // @synthesize realNameSectionCell=_realNameSectionCell;
@property(retain, nonatomic) SGNewGetRealNameInfoResp *infoResp; // @synthesize infoResp=_infoResp;
@property(retain, nonatomic) SGIsPayPasswdSetResp *isPayPassWord; // @synthesize isPayPassWord=_isPayPassWord;
@property(retain, nonatomic) SGProfileInfoCellModel *setPasswordCell; // @synthesize setPasswordCell=_setPasswordCell;
@property(retain, nonatomic) SGProfileInfoCellModel *forgetPayPasswordCell; // @synthesize forgetPayPasswordCell=_forgetPayPasswordCell;
@property(retain, nonatomic) SGSectionModel *passwordSection; // @synthesize passwordSection=_passwordSection;
- (void).cxx_destruct;
- (void)gotoRealName;
- (void)clickSetPassWord;
- (void)setPassword:(_Bool)arg1;
- (void)loadIsPayPassWord;
- (void)addForgetPayPasswordCell;
- (void)getReamInfoWithIsLoading:(_Bool)arg1 withNextBlock:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

@end

