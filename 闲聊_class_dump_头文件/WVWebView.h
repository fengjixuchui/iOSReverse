//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "WVWebViewProtocol-Protocol.h"

@class NSDictionary, NSString, NSURL, NSURLRequest, UIScrollView, UIViewController, WVBridge, WVCommonWebView, WVNavigation, WVPageMeta, WVPagePerformance, WVUserContentController;
@protocol WVWebViewDelegate;

@interface WVWebView : UIWebView <WVWebViewProtocol>
{
    _Bool _useCustomPullToRefresh;
    long long _JSLogLevel;
    NSString *bizCode;
    NSString *_title;
    WVPageMeta *_pageMeta;
    WVCommonWebView *_commonWebView;
}

+ (void)setDefaultUrlScheme:(id)arg1;
+ (id)defaultUrlScheme;
+ (void)WindVaneReadyEventForJS:(id)arg1;
+ (_Bool)isPostRequest:(id)arg1;
+ (id)getRequestBodyForPost:(id)arg1;
+ (_Bool)isOpenURLInterruptedModule;
+ (void)openURLInterruptedModule;
+ (void)closeURLInterruptedModule;
@property(retain, nonatomic) WVCommonWebView *commonWebView; // @synthesize commonWebView=_commonWebView;
@property(nonatomic, getter=isUseCustomPullToRefresh) _Bool useCustomPullToRefresh; // @synthesize useCustomPullToRefresh=_useCustomPullToRefresh;
@property(readonly, nonatomic) WVPageMeta *pageMeta; // @synthesize pageMeta=_pageMeta;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *bizCode; // @synthesize bizCode;
@property(nonatomic) long long JSLogLevel; // @synthesize JSLogLevel=_JSLogLevel;
- (void).cxx_destruct;
- (CDUnknownBlockType)callBackResponeseForJSWithHandlerName:(id)arg1 className:(id)arg2;
- (void)openJSBridgeLog;
- (void)deallocWebViewService;
@property(nonatomic) _Bool isOpenAutoPlayAudio;
@property(nonatomic, getter=isAutoPlayAudio) _Bool autoPlayAudio;
@property(nonatomic, getter=isForbiddenPullScroll) _Bool forbiddenPullScroll;
- (_Bool)forbiddenPullScroll;
- (void)fetchElementValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5 withResultCallback:(CDUnknownBlockType)arg6;
- (void)callRegistedHandler:(id)arg1 withMethod:(id)arg2 withData:(id)arg3 withFatherClass:(id)arg4 withFatherMethod:(id)arg5;
- (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withClassName:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)setIsOpenLocalService:(_Bool)arg1;
- (id)getRequestUrl;
@property(readonly, nonatomic, getter=isMainFrame) _Bool mainFrame;
- (void)setContentType:(long long)arg1;
@property(readonly, nonatomic) WVBridge *webviewJSBContext;
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(nonatomic, getter=isOpenLocalService) _Bool openLocalService;
- (void)dealloc;
- (void)reuse;
- (void)recycle;
- (void)bindingWebViewService;
- (void)releaseWebViewService;
- (void)setDelegate:(id)arg1;
- (id)delegate;
@property(readonly, nonatomic) double estimatedProgress;
- (void)stopLoading;
- (void)reload;
@property(readonly, copy, nonatomic) NSURL *URL;
- (void)loadRequest:(id)arg1;
- (_Bool)isEmptyRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSURLRequest *request;
- (void)safeAreaInsetsDidChange;
@property(readonly, nonatomic) long long viewportFit;
@property(readonly, nonatomic) WVNavigation *navigation;
- (void)setTitle:(id)arg1;
- (void)setIsOpenLongPressSaveImage:(_Bool)arg1;
@property(nonatomic, getter=isOpenLongPressSaveImage) _Bool openLongPressSaveImage;
@property(nonatomic, getter=isOpenWebKitLongPress) _Bool openWebKitLongPress;
@property(nonatomic) _Bool scrollsToTop;
- (void)stopInfiniteScrollingAnimating;
@property(nonatomic, getter=isUseInfiniteScrolling) _Bool useInfiniteScrolling;
@property(nonatomic, getter=isUsePullToRefresh) _Bool usePullToRefresh;
@property(nonatomic) _Bool bounces;
@property(nonatomic) __weak id <WVWebViewDelegate> windVaneDelegate;
@property(readonly, nonatomic) NSDictionary *jsBridgeCallHistory;
- (id)perfRecorder;
@property(readonly, nonatomic) WVPagePerformance *pagePerformance;
- (void)isPageEmpty:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isPageEmpty) _Bool pageEmpty;
@property(readonly, nonatomic) long long contentType;
@property(readonly, nonatomic) long long visiblity;
@property(nonatomic) long long visibleInViewController;
@property(nonatomic) __weak UIViewController *sourceViewController;
@property(readonly, nonatomic) WVUserContentController *userContentController;
- (void)initWebView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) _Bool allowsInlineMediaPlayback;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

