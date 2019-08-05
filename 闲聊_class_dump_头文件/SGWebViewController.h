//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, SGNewGetRealNameInfoResp, SGWebLoadFiledView, SGWebProgressView, SGWebShareView, UIBarButtonItem, UIViewController, UIWebView;

@interface SGWebViewController : SGViewController <UIWebViewDelegate>
{
    _Bool _isNeedAddCardOpenTl;
    _Bool _complain;
    _Bool _isShowRightButton;
    CDUnknownBlockType _exitBlock;
    UIViewController *_reamVC;
    SGNewGetRealNameInfoResp *_infoResp;
    UIViewController *_lastFromVC;
    CDUnknownBlockType _loadWebFinishBlock;
    UIWebView *_web;
    NSString *_titleString;
    NSURL *_url;
    NSString *_postParams;
    SGWebProgressView *_webProgressView;
    SGWebLoadFiledView *_loadFiledView;
    SGWebShareView *_shareView;
    NSURL *_loadUrl;
    long long _loadIndex;
    UIBarButtonItem *_closeItem;
    UIBarButtonItem *_backItem;
    long long _toUin;
    NSString *_h5PayFuncName;
    NSString *_defaultUserAgent;
}

+ (void)deleteCookieName:(id)arg1;
+ (void)addCookieName:(id)arg1 cookieValue:(id)arg2 host:(id)arg3;
+ (void)addCookieName:(id)arg1 cookieValue:(id)arg2 url:(id)arg3;
+ (id)addUserAgent;
+ (void)gotoFeedBackWithPostId:(id)arg1 openId:(id)arg2 token:(id)arg3 fromVc:(id)arg4;
+ (void)gotoWebComplain:(id)arg1 fromUin:(long long)arg2 toUin:(long long)arg3 fromOpenId:(id)arg4 toUin:(id)arg5 token:(id)arg6 tyep:(id)arg7;
+ (void)gotoWebHelp:(id)arg1;
@property(copy, nonatomic) NSString *defaultUserAgent; // @synthesize defaultUserAgent=_defaultUserAgent;
@property(copy, nonatomic) NSString *h5PayFuncName; // @synthesize h5PayFuncName=_h5PayFuncName;
@property(nonatomic) _Bool isShowRightButton; // @synthesize isShowRightButton=_isShowRightButton;
@property(nonatomic) long long toUin; // @synthesize toUin=_toUin;
@property(nonatomic) _Bool complain; // @synthesize complain=_complain;
@property(retain, nonatomic) UIBarButtonItem *backItem; // @synthesize backItem=_backItem;
@property(retain, nonatomic) UIBarButtonItem *closeItem; // @synthesize closeItem=_closeItem;
@property(nonatomic) long long loadIndex; // @synthesize loadIndex=_loadIndex;
@property(retain, nonatomic) NSURL *loadUrl; // @synthesize loadUrl=_loadUrl;
@property(retain, nonatomic) SGWebShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) SGWebLoadFiledView *loadFiledView; // @synthesize loadFiledView=_loadFiledView;
@property(retain, nonatomic) SGWebProgressView *webProgressView; // @synthesize webProgressView=_webProgressView;
@property(copy, nonatomic) NSString *postParams; // @synthesize postParams=_postParams;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) UIWebView *web; // @synthesize web=_web;
@property(copy, nonatomic) CDUnknownBlockType loadWebFinishBlock; // @synthesize loadWebFinishBlock=_loadWebFinishBlock;
@property(nonatomic) _Bool isNeedAddCardOpenTl; // @synthesize isNeedAddCardOpenTl=_isNeedAddCardOpenTl;
@property(nonatomic) __weak UIViewController *lastFromVC; // @synthesize lastFromVC=_lastFromVC;
@property(retain, nonatomic) SGNewGetRealNameInfoResp *infoResp; // @synthesize infoResp=_infoResp;
@property(nonatomic) __weak UIViewController *reamVC; // @synthesize reamVC=_reamVC;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gotoReamName;
- (void)checkIsSetPayPassword;
- (void)webH5OperationAboutTLPay:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (id)addUserAgent;
- (void)loadWebAssress;
- (void)clickClose;
- (void)setLeftNavgation:(_Bool)arg1;
- (void)viewDidLoad;
- (void)deleteUserDeiveidSessionIdAndUserId;
- (void)payFinish:(long long)arg1;
- (void)addSecurityCookie;
- (void)addGroupIDForCookie:(id)arg1 destOpenId:(id)arg2;
- (id)initWebWithUrl:(id)arg1 withPostParams:(id)arg2;
- (id)initWebWithUrl:(id)arg1 withTitle:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)backAction;
- (void)chooseMoreOption;
- (void)addRightChoose;
- (void)complainAddCookie:(id)arg1 withDestOpenId:(id)arg2 withToken:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

