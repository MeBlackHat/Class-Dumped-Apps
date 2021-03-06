//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGMonetizationEligibilityNotEligibleLearnMoreViewDelegate-Protocol.h>

@class IGMonetizationEligibilityNotEligibleLearnMoreView, IGUserSession, NSString, UIActivityIndicatorView;

@interface IGMonetizationToolsIGTVAdsNotEligibleStatusViewController : IGViewController <IGMonetizationEligibilityNotEligibleLearnMoreViewDelegate>
{
    IGUserSession *_userSession;
    IGMonetizationEligibilityNotEligibleLearnMoreView *_statusView;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)_presentBrowserForUrl:(id)arg1;
- (void)_handleAppealsDataRequestFailure;
- (void)_updateViewWithAppealsData:(id)arg1;
- (void)_handleViolationsRequestFailure;
- (void)_updateViewWithViolations:(id)arg1;
- (void)monetizationEligibilityNotEligibleLearnMoreViewDidTapViolationHelpCenterLink:(id)arg1 violationType:(id)arg2;
- (void)monetizationEligibilityNotEligibleLearnMoreViewDidTapHelpCenterLink:(id)arg1;
- (void)monetizationEligibilityNotEligibleLearnMoreViewDidTapAppealButton;
- (void)_requestAppealData;
- (void)_requestViolationData;
- (void)_setUpSpinner;
- (void)_setUpStatusView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)analyticsModule;
- (long long)preferredTabBarBehavior;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

