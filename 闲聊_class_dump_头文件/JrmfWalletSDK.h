//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JYangWalletNavController, NSString, UIColor;

@interface JrmfWalletSDK : NSObject
{
    double _themeFontSize;
    UIColor *_themePageColor;
    UIColor *_pageBtnColor;
    UIColor *_themeBtnColor;
    UIColor *_themeNavColor;
    UIColor *_NavTitColor;
    double _NavTitfontSize;
    double _pageChargeFont;
    NSString *_pageTitleStr;
    JYangWalletNavController *_selectedNav;
}

+ (id)getCurrentVersion;
+ (void)destroyWalletModule;
+ (void)doUpdateStatistics;
+ (void)instanceJrmfWalletSDKWithPartnerId:(id)arg1 dynamicToken:(_Bool)arg2 customerClass:(id)arg3 AppMethod:(_Bool)arg4;
+ (void)instanceJrmfWalletSDKWithPartnerId:(id)arg1 dynamicToken:(_Bool)arg2 AppMethod:(_Bool)arg3;
+ (void)instanceJrmfWalletSDKWithPartnerId:(id)arg1 AppMethod:(_Bool)arg2;
+ (id)shareHelper;
@property(retain, nonatomic) JYangWalletNavController *selectedNav; // @synthesize selectedNav=_selectedNav;
@property(retain, nonatomic) NSString *pageTitleStr; // @synthesize pageTitleStr=_pageTitleStr;
@property(nonatomic) double pageChargeFont; // @synthesize pageChargeFont=_pageChargeFont;
@property(nonatomic) double NavTitfontSize; // @synthesize NavTitfontSize=_NavTitfontSize;
@property(retain, nonatomic) UIColor *NavTitColor; // @synthesize NavTitColor=_NavTitColor;
@property(retain, nonatomic) UIColor *themeNavColor; // @synthesize themeNavColor=_themeNavColor;
@property(retain, nonatomic) UIColor *themeBtnColor; // @synthesize themeBtnColor=_themeBtnColor;
@property(retain, nonatomic) UIColor *pageBtnColor; // @synthesize pageBtnColor=_pageBtnColor;
@property(retain, nonatomic) UIColor *themePageColor; // @synthesize themePageColor=_themePageColor;
@property(nonatomic) double themeFontSize; // @synthesize themeFontSize=_themeFontSize;
- (void).cxx_destruct;
- (void)doPresentJrmfWalletPageWithUserId:(id)arg1 userName:(id)arg2 userHeadLink:(id)arg3 thirdToken:(id)arg4;
- (void)doPresentJrmfWalletPageWithBaseViewController:(id)arg1 userId:(id)arg2 userName:(id)arg3 userHeadLink:(id)arg4 thirdToken:(id)arg5;
- (id)init;

@end

