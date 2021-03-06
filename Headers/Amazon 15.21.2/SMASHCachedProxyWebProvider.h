//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SMASHProxyProviderProtocol-Protocol.h"

@class NSURLRequest, SMASHWebProviderManager, UIView;
@protocol SMASHWebProviderProtocol;

@interface SMASHCachedProxyWebProvider : UIViewController <SMASHProxyProviderProtocol>
{
    _Bool isFromMemoryCache;
    _Bool _animatedTransition;
    NSURLRequest *_request;
    UIViewController<SMASHWebProviderProtocol> *_originalWebProvider;
    SMASHWebProviderManager *_providerManager;
    UIView *_snapshotView;
}

@property(nonatomic) _Bool animatedTransition; // @synthesize animatedTransition=_animatedTransition;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) SMASHWebProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(retain, nonatomic) UIViewController<SMASHWebProviderProtocol> *originalWebProvider; // @synthesize originalWebProvider=_originalWebProvider;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic) _Bool isFromMemoryCache; // @synthesize isFromMemoryCache;
- (void).cxx_destruct;
- (void)clearHistory;
- (void)requestTitleUpdate;
- (long long)invalidIntrapageCount;
- (void)setWebHostingDelegate:(id)arg1;
- (id)proxyToReplaceProvider:(_Bool)arg1;
- (id)getScreenshotView;
- (void)shutDownWebView;
- (void)stopLoading;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)injectAndEvaluateJS:(id)arg1;
- (void)notifyHashChange;
- (void)notifyPopState;
- (long long)getInternalHistoryCount;
- (void)intrapageSync;
- (void)informOfIntraPageNavigationFinishedPopping;
- (void)informOfIntraPageNavigationFinishedShowing;
- (void)informOfIntraPageNavigation;
- (id)getCurrentURL;
- (id)getScrollView;
- (_Bool)loading;
- (_Bool)canGoForward;
- (void)goForward;
- (_Bool)canGoBack;
- (void)goBackToProxy:(id)arg1;
- (void)goBack;
- (id)getWebView;
- (void)refresh;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)createWebView;
- (void)restore:(_Bool)arg1;
- (id)containingSMASHWebViewController;
- (void)smash_passivate;
- (id)getCurrentRequest;
- (void)setCurrentRequest:(id)arg1;
- (void)viewDidLoad;
- (id)initWithOriginalProvider:(id)arg1 webProviderManager:(id)arg2 snapshotView:(id)arg3;

@end

