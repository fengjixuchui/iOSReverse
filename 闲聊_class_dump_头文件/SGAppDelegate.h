//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "ASWatcher-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "WXApiDelegate-Protocol.h"

@class ASHandle, CLLocationManager, NSDate, NSString, SGMainTabsController, SGNavigationController, SGSafeBoard, UIWindow;

@interface SGAppDelegate : UIResponder <CLLocationManagerDelegate, WXApiDelegate, UIApplicationDelegate, ASWatcher>
{
    _Bool _accountSwitch;
    _Bool _isNeedHidden;
    _Bool _inBackground;
    _Bool _tokenAlreadyRequested;
    UIWindow *_window;
    ASHandle *_actionHandle;
    NSString *_fileKey;
    long long _currentLaunchTimeStamp;
    SGMainTabsController *_tab;
    SGSafeBoard *_safeView;
    NSString *_downloadUrl;
    CLLocationManager *_locationManager;
    NSDate *_enterBackDate;
    SGNavigationController *_loginVC;
    struct CLLocationCoordinate2D _location;
}

+ (id)documentsPath;
+ (id)app;
@property(nonatomic) __weak SGNavigationController *loginVC; // @synthesize loginVC=_loginVC;
@property(retain, nonatomic) NSDate *enterBackDate; // @synthesize enterBackDate=_enterBackDate;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(nonatomic) _Bool tokenAlreadyRequested; // @synthesize tokenAlreadyRequested=_tokenAlreadyRequested;
@property(nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool isNeedHidden; // @synthesize isNeedHidden=_isNeedHidden;
@property(nonatomic) __weak SGSafeBoard *safeView; // @synthesize safeView=_safeView;
@property(nonatomic) __weak SGMainTabsController *tab; // @synthesize tab=_tab;
@property(nonatomic) long long currentLaunchTimeStamp; // @synthesize currentLaunchTimeStamp=_currentLaunchTimeStamp;
@property(nonatomic) struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(nonatomic) _Bool accountSwitch; // @synthesize accountSwitch=_accountSwitch;
@property(retain, nonatomic) NSString *fileKey; // @synthesize fileKey=_fileKey;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)requestConfig:(_Bool)arg1;
- (_Bool)sgOpenURL:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)onResp:(id)arg1;
- (void)onReq:(id)arg1;
- (_Bool)inChina;
- (_Bool)isLocationEnabled;
- (void)initSource;
- (void)appDelegateDeleteFile:(id)arg1 withUin:(long long)arg2;
- (void)SGTcpMessagePush:(id)arg1 withType:(unsigned long long)arg2;
- (void)xianliaoIdConfig;
- (void)appDelegateGetUserConfigReq;
- (_Bool)isContainSpecialStr:(id)arg1;
- (void)getSensitiveWords;
- (void)getGroupChatConfig;
- (void)SGTcpConnectStatus:(_Bool)arg1;
- (void)networkChanged:(id)arg1;
- (void)clearWrongTimes;
- (void)registerRemoteNotification;
- (void)regManager;
- (void)appDelegateRootViewController:(_Bool)arg1;
- (void)removeAlertAndSearchBar;
- (void)changeFirstResponser;
- (void)authSafeView;
- (void)clearAllUserDefaultsData;
- (void)loginClean;
- (void)emojiShopAccountSetting;
- (void)loginActionWithModel:(id)arg1;
- (void)userDefaults:(long long)arg1 deviceId:(long long)arg2 sessionId:(long long)arg3;
- (void)logoutAction;
- (id)appDelegateGetCurrentVC;
- (id)getCurrentNav;
- (void)reSetDialogsUnreadCount;
- (id)getPushTopVC;
- (void)clearPaste:(id)arg1;
- (void)verfiyGroupCode:(id)arg1 originalUrl:(id)arg2;
- (void)verifyGoodsCode:(id)arg1 originalUrl:(id)arg2;
- (void)IdentifyXCode;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)processPossibleConfigUpdateNotification:(id)arg1;
- (void)processRemoteNotification:(id)arg1 removeView:(id)arg2;
- (void)processRemoteNotification:(id)arg1;
- (void)reUploadRemoteNotification;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)updateDeviceTokenWithDeviceToken:(id)arg1;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

