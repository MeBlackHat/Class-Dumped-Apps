//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMABaseInterstitialAdManager.h"

#import "AMAInterstitialAdViewControllerDelegate-Protocol.h"

@class AMAInterstitialAdViewController, AMAdConfiguration, NSString, UIViewController;
@protocol AMAInterstitialAdManagerDelegate;

@interface AMAInterstitialAdManager : AMABaseInterstitialAdManager <AMAInterstitialAdViewControllerDelegate>
{
    id <AMAInterstitialAdManagerDelegate> _delegate;
    AMAInterstitialAdViewController *_interstitialAdViewController;
    UIViewController *_clientViewController;
    AMAdConfiguration *_sharedConfiguration;
}

+ (id)adManagerWithDelegate:(id)arg1;
@property(retain, nonatomic) AMAdConfiguration *sharedConfiguration; // @synthesize sharedConfiguration=_sharedConfiguration;
@property(nonatomic) __weak UIViewController *clientViewController; // @synthesize clientViewController=_clientViewController;
@property(retain, nonatomic) AMAInterstitialAdViewController *interstitialAdViewController; // @synthesize interstitialAdViewController=_interstitialAdViewController;
@property(nonatomic) __weak id <AMAInterstitialAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interstitialAdViewControllerDidClickOnPrivateURL:(id)arg1;
- (void)interstitialAdViewControllerWillDismissOnLeaveApplication;
- (void)interstitialAdViewControllerDidDismiss;
- (void)interstitialAdViewControllerWillDismiss;
- (void)interstitialAdViewControllerDidFailToRenderWithError:(id)arg1;
- (void)interstitialAdViewControllerDidRender;
- (void)interstitialAdViewControllerDidFailToPrerenderWithError:(id)arg1;
- (void)interstitialAdViewControllerDidPrerender;
- (void)didReceiveAdHtml:(id)arg1 withInstrPixel:(id)arg2 andBridgesEnabled:(id)arg3;
- (void)didFailToLoadWithError:(id)arg1;
- (void)openPrivateURL:(id)arg1;
- (_Bool)isAdExpanded;
@property(readonly) _Bool isAnyInterstitialDisplayed;
- (void)presentFromViewController:(id)arg1;
@property(readonly) _Bool isReady;
- (_Bool)canLoadInterstitial;
- (void)recordMetricsOnLoadAttempt;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

