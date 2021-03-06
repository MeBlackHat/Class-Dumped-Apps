//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/BDMAdapterLoadingDelegate-Protocol.h>
#import <Funny/BDMDisplayAd-Protocol.h>
#import <Funny/BDMNativeAdServiceAdapterLoadingDelegate-Protocol.h>

@class BDMResponse, BDMViewabilityMetricConfiguration, NSString, UIView;
@protocol BDMDisplayAdDelegate;

@interface BDMBaseDisplayAd : NSObject <BDMDisplayAd, BDMAdapterLoadingDelegate, BDMNativeAdServiceAdapterLoadingDelegate>
{
    _Bool _hasLoadedCreative;
    id <BDMDisplayAdDelegate> _delegate;
    UIView *_adView;
    BDMResponse *_response;
}

+ (id)displayAdWithResponse:(id)arg1 placementType:(long long)arg2;
@property(nonatomic) _Bool hasLoadedCreative; // @synthesize hasLoadedCreative=_hasLoadedCreative;
@property(retain, nonatomic) BDMResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <BDMDisplayAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)service:(id)arg1 didLoadNativeAds:(id)arg2;
- (void)adapter:(id)arg1 failedToPrepareContentWithError:(id)arg2;
- (void)adapterPreparedContent:(id)arg1;
- (void)prepareAdapter:(id)arg1;
@property(readonly, copy, nonatomic) BDMViewabilityMetricConfiguration *viewabilityConfig;
@property(readonly, copy, nonatomic) NSString *responseID;
@property(readonly, copy, nonatomic) NSString *displayManager;
- (void)prepare;
- (void)presentAd:(id)arg1 container:(id)arg2;
- (void)invalidate;
@property(readonly, nonatomic) _Bool availableToPresent;
- (id)initWithResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

