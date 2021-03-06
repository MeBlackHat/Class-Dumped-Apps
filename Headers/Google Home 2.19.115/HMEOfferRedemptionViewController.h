//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMEOfferRedemptionCompletionViewDelegate-Protocol.h"
#import "HMEThirdPartyAccountLinkingWebViewControllerDelegate-Protocol.h"

@class AnalyticsLogger, NSLayoutConstraint, NSString, SSOIdentity, UIButton, UIPageViewController, UIView;
@protocol HMEOfferManager, HMEOfferRedemptionViewControllerDelegate, SSOService;

@interface HMEOfferRedemptionViewController : UIViewController <HMEOfferRedemptionCompletionViewDelegate, HMEThirdPartyAccountLinkingWebViewControllerDelegate>
{
    _Bool _accountLinked;
    _Bool _isNativeOffer;
    id <HMEOfferRedemptionViewControllerDelegate> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIButton *_backButton;
    UIView *_chevronIcon;
    UIView *_separator;
    UIPageViewController *_pageViewController;
    unsigned long long _offerRedemptionStage;
    NSString *_offerID;
    NSString *_token;
    NSString *_learnMoreURL;
    NSString *_learnMoreText;
    NSString *_linkURL;
    NSString *_finalURL;
    SSOIdentity *_identity;
    id <SSOService> _SSOService;
    id <HMEOfferManager> _offersManager;
    AnalyticsLogger *_analyticsLogger;
    NSLayoutConstraint *_pageViewBottomConstraint;
}

@property(nonatomic) _Bool isNativeOffer; // @synthesize isNativeOffer=_isNativeOffer;
@property(retain, nonatomic) NSLayoutConstraint *pageViewBottomConstraint; // @synthesize pageViewBottomConstraint=_pageViewBottomConstraint;
@property(retain, nonatomic) AnalyticsLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) id <HMEOfferManager> offersManager; // @synthesize offersManager=_offersManager;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
@property(nonatomic) _Bool accountLinked; // @synthesize accountLinked=_accountLinked;
@property(copy, nonatomic) NSString *finalURL; // @synthesize finalURL=_finalURL;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(copy, nonatomic) NSString *learnMoreText; // @synthesize learnMoreText=_learnMoreText;
@property(copy, nonatomic) NSString *learnMoreURL; // @synthesize learnMoreURL=_learnMoreURL;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *offerID; // @synthesize offerID=_offerID;
@property(nonatomic) unsigned long long offerRedemptionStage; // @synthesize offerRedemptionStage=_offerRedemptionStage;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *chevronIcon; // @synthesize chevronIcon=_chevronIcon;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak id <HMEOfferRedemptionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)offerRedemptionCompletionView:(id)arg1 openURL:(id)arg2;
- (void)logUserActionWithType:(int)arg1 onPage:(int)arg2;
- (void)logErrorWithLocationPage:(int)arg1;
- (void)logImpressionWithLocationPage:(int)arg1;
- (void)showBottomBar;
- (void)hideBottomBar;
- (void)setUpConstriants;
- (void)backButtonTapped:(id)arg1;
- (void)rightButtonTapped:(id)arg1;
- (void)showLinkAccountWebView;
- (void)updateRightButtonWithTitle:(id)arg1;
- (void)showCompletionPage:(id)arg1;
- (void)fetchCompletionPage;
- (void)leftButtonTapped:(id)arg1;
- (void)webViewController:(id)arg1 openURL:(id)arg2;
- (void)webViewControllerDidDismiss:(id)arg1;
- (void)webViewControllerDidFinishLinking:(id)arg1 redirectURL:(id)arg2;
- (void)showOfferScreen:(id)arg1;
- (void)didRedeemOfferWithResponse:(id)arg1 error:(id)arg2;
- (void)fetchOfferScreen;
- (void)showRetryAlertWithAction:(id)arg1;
- (void)showSpinner;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithOfferID:(id)arg1 redemptionToken:(id)arg2 isNativeOffer:(_Bool)arg3 offersManager:(id)arg4 SSOIdentity:(id)arg5 SSOService:(id)arg6 analyticsLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

