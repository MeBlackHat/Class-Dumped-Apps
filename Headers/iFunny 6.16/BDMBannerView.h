//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/BDMAdEventProducer-Protocol.h>
#import <Funny/BDMDisplayAdDelegate-Protocol.h>
#import <Funny/BDMRequestDelegate-Protocol.h>

@class BDMAuctionInfo, BDMBannerRequest, BDMEventMiddleware, NSString, UIViewController;
@protocol BDMAdEventProducerDelegate, BDMBannerDelegate, BDMDisplayAd;

@interface BDMBannerView : UIView <BDMRequestDelegate, BDMDisplayAdDelegate, BDMAdEventProducer>
{
    _Bool _isCreativeOnScreen;
    id <BDMAdEventProducerDelegate> _producerDelegate;
    id <BDMBannerDelegate> _delegate;
    UIViewController *_rootViewController;
    long long _adSize;
    BDMEventMiddleware *_middleware;
    id <BDMDisplayAd> _displayAd;
    BDMBannerRequest *_currentRequest;
}

@property(retain, nonatomic) BDMBannerRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(nonatomic) _Bool isCreativeOnScreen; // @synthesize isCreativeOnScreen=_isCreativeOnScreen;
@property(retain, nonatomic) id <BDMDisplayAd> displayAd; // @synthesize displayAd=_displayAd;
@property(retain, nonatomic) BDMEventMiddleware *middleware; // @synthesize middleware=_middleware;
@property(nonatomic) long long adSize; // @synthesize adSize=_adSize;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak id <BDMBannerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <BDMAdEventProducerDelegate> producerDelegate; // @synthesize producerDelegate=_producerDelegate;
- (void).cxx_destruct;
- (void)displayAdDidDismissScreen:(id)arg1;
- (void)displayAdWillPresentScreen:(id)arg1;
- (void)displayAdWillLeaveApplication:(id)arg1;
- (void)displayAd:(id)arg1 failedToPresent:(id)arg2;
- (void)displayAdLogUserInteraction:(id)arg1;
- (void)displayAdLogFinishView:(id)arg1;
- (void)displayAdLogImpression:(id)arg1;
- (void)displayAdLogStartView:(id)arg1;
- (void)displayAd:(id)arg1 failedWithError:(id)arg2;
- (void)displayAdReady:(id)arg1;
- (void)requestDidExpire:(id)arg1;
- (void)request:(id)arg1 failedWithError:(id)arg2;
- (void)request:(id)arg1 completeWithInfo:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)removeFromSuperview;
- (_Bool)isOnScreen;
- (_Bool)hasLoadedCreative;
- (void)invalidate;
- (void)prepareDisplayAd;
- (void)presentFromRootViewController:(id)arg1;
@property(readonly, nonatomic) _Bool canShow;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(readonly, copy, nonatomic) BDMAuctionInfo *latestAuctionInfo;
- (void)populateWithRequest:(id)arg1;
- (void)makeRequest:(id)arg1;
- (void)dealloc;
- (void)configureAppearance;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

