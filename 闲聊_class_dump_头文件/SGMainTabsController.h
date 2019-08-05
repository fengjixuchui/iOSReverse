//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "ASWatcher-Protocol.h"
#import "SGTabBarDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class ASHandle, ContactsViewController, DialogListViewController, MBProgressHUD, NSString, SGAccountSettingController, SGGoodsHomePageViewController, SGTabBar, SGTrembleViewController;

@interface SGMainTabsController : UITabBarController <UITabBarControllerDelegate, SGTabBarDelegate, ASWatcher>
{
    int _unreadCount;
    double _lastSameIndexTapTime;
    int _tapsInSuccession;
    SGTrembleViewController *_trembleViewController;
    DialogListViewController *_dialog;
    SGAccountSettingController *_setting;
    ContactsViewController *_contact;
    SGGoodsHomePageViewController *_homePageVc;
    SGTabBar *_customTabBar;
    ASHandle *_actionHandle;
    MBProgressHUD *_hud;
}

@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
@property(retain, nonatomic) SGTabBar *customTabBar; // @synthesize customTabBar=_customTabBar;
@property(retain, nonatomic) SGGoodsHomePageViewController *homePageVc; // @synthesize homePageVc=_homePageVc;
@property(retain, nonatomic) ContactsViewController *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) SGAccountSettingController *setting; // @synthesize setting=_setting;
@property(retain, nonatomic) DialogListViewController *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SGTrembleViewController *trembleViewController; // @synthesize trembleViewController=_trembleViewController;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setupChildViewController:(id)arg1 title:(id)arg2 imageName:(id)arg3 selectedImageName:(id)arg4;
- (void)tabBar:(id)arg1 didSelectedButtonFrom:(long long)arg2 to:(long long)arg3;
- (void)pokeControllerWithDestUin:(long long)arg1 withDict:(id)arg2 withGroupFlag:(_Bool)arg3;
- (void)pokePrivateWithDict:(id)arg1;
- (void)pokeWithDict:(id)arg1;
- (void)requestNotificationAgain;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setCustomSelectedIndex:(long long)arg1;
- (void)mergeMessageWithSugramShareBaseObject:(id)arg1;
- (void)showToUpSuccessWithMessage:(id)arg1;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)setupChildViewControllers;
- (void)setupTabBar;
- (void)viewDidLoad;
- (void)localizationUpdated;
- (void)setUnreadCount:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

