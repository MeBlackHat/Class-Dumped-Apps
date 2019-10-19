//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

@class NSString, NSURL, UIBarButtonItem, UILabel, WKWebView;

@interface WAWebContentViewController : WAViewController
{
    _Bool _showURLAsTitle;
    _Bool _scalesPageToFit;
    _Bool _showActionButton;
    _Bool _navigationRestricted;
    _Bool _secureMode;
    _Bool _shouldGoBack;
    int _mode;
    NSString *_pageTitle;
    CDUnknownBlockType _dismissed;
    CDUnknownBlockType _unsafeWebpageAlertDismissed;
    CDUnknownBlockType _navigationCompleted;
    UIBarButtonItem *_customRightBarButtonItem;
    NSURL *_baseURL;
    NSURL *_currentURL;
    NSString *_htmlString;
    WKWebView *_webView;
    UILabel *_noConnectionLabel;
    UIBarButtonItem *_bbItemReload;
    UIBarButtonItem *_bbItemClose;
    UIBarButtonItem *_bbItemAction;
    UIBarButtonItem *_bbItemActivityIndicator;
    CDUnknownBlockType _toolbarItemHandlerBlock;
    UIBarButtonItem *_bbItemToolbarButton;
}

+ (id)controllerHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)controllerWithURL:(id)arg1;
@property(retain, nonatomic) UIBarButtonItem *bbItemToolbarButton; // @synthesize bbItemToolbarButton=_bbItemToolbarButton;
@property(copy, nonatomic) CDUnknownBlockType toolbarItemHandlerBlock; // @synthesize toolbarItemHandlerBlock=_toolbarItemHandlerBlock;
@property(retain, nonatomic) UIBarButtonItem *bbItemActivityIndicator; // @synthesize bbItemActivityIndicator=_bbItemActivityIndicator;
@property(retain, nonatomic) UIBarButtonItem *bbItemAction; // @synthesize bbItemAction=_bbItemAction;
@property(retain, nonatomic) UIBarButtonItem *bbItemClose; // @synthesize bbItemClose=_bbItemClose;
@property(retain, nonatomic) UIBarButtonItem *bbItemReload; // @synthesize bbItemReload=_bbItemReload;
@property(retain, nonatomic) UILabel *noConnectionLabel; // @synthesize noConnectionLabel=_noConnectionLabel;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) _Bool shouldGoBack; // @synthesize shouldGoBack=_shouldGoBack;
@property(retain, nonatomic) UIBarButtonItem *customRightBarButtonItem; // @synthesize customRightBarButtonItem=_customRightBarButtonItem;
@property(copy, nonatomic) CDUnknownBlockType navigationCompleted; // @synthesize navigationCompleted=_navigationCompleted;
@property(copy, nonatomic) CDUnknownBlockType unsafeWebpageAlertDismissed; // @synthesize unsafeWebpageAlertDismissed=_unsafeWebpageAlertDismissed;
@property(copy, nonatomic) CDUnknownBlockType dismissed; // @synthesize dismissed=_dismissed;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool secureMode; // @synthesize secureMode=_secureMode;
@property(nonatomic) _Bool navigationRestricted; // @synthesize navigationRestricted=_navigationRestricted;
@property(nonatomic) _Bool showActionButton; // @synthesize showActionButton=_showActionButton;
@property(nonatomic) _Bool scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
@property(nonatomic) _Bool showURLAsTitle; // @synthesize showURLAsTitle=_showURLAsTitle;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)reload;
- (void)closeAction:(id)arg1;
- (void)action:(id)arg1;
- (void)reloadAction:(id)arg1;
- (void)hideActivityIndicatorWithError:(_Bool)arg1;
- (void)showActivityIndicator;
- (void)setTitleBarText:(id)arg1;
- (void)reloadPageWithURL:(id)arg1;
- (void)dismissControllerAnimated:(_Bool)arg1;
- (void)handleToolbarItemEvent:(id)arg1;
- (void)addToolbarWithTitle:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)goBackIfNecessary;
- (void)wa_applicationDidEnterBackground;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithHTMLString:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

