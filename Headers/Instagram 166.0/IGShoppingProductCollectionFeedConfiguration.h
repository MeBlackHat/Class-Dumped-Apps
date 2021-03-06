//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGShoppingBasicProductFeedViewControllerConfigurationType-Protocol.h>

@class IGSessionTracker, IGShoppingBasicProductFeedTitleConfiguration, IGShoppingNavigationAnalyticsContext, IGShoppingProductCollectionDataModel, IGShoppingProductCollectionProperties, IGUserSession, NSString;

@interface IGShoppingProductCollectionFeedConfiguration : NSObject <IGShoppingBasicProductFeedViewControllerConfigurationType>
{
    IGUserSession *_userSession;
    IGShoppingNavigationAnalyticsContext *_navigationAnalyticsContext;
    long long _entryPoint;
    _Bool _areProductCellsDismissable;
    IGSessionTracker *_shoppingSessionTracker;
    long long _surfaceNavigationTraits;
    _Bool _showReviewStatus;
    IGShoppingProductCollectionDataModel *_initialDataModel;
    IGShoppingBasicProductFeedTitleConfiguration *_titleConfiguration;
    IGShoppingProductCollectionProperties *_productCollectionProperties;
    long long _productCellFirstSubtitleType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool showReviewStatus; // @synthesize showReviewStatus=_showReviewStatus;
@property(readonly, nonatomic) long long productCellFirstSubtitleType; // @synthesize productCellFirstSubtitleType=_productCellFirstSubtitleType;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionProperties *productCollectionProperties; // @synthesize productCollectionProperties=_productCollectionProperties;
@property(readonly, copy, nonatomic) IGShoppingBasicProductFeedTitleConfiguration *titleConfiguration; // @synthesize titleConfiguration=_titleConfiguration;
@property(readonly, copy, nonatomic) IGShoppingProductCollectionDataModel *initialDataModel; // @synthesize initialDataModel=_initialDataModel;
- (_Bool)enableTopPadding;
- (_Bool)disablePullToRefresh;
- (id)rightBarButtonItemsWithViewController:(id)arg1;
- (id)productWithContextCardLoggingProvider;
- (id)sponsoredSupportConfiguration;
- (id)associatedFeedItemForInsights;
- (id)initialProducts;
- (_Bool)areProductCellsDismissable;
- (long long)entryPoint;
- (id)viewpointNamespace;
- (id)loggingExtras;
- (id)shoppingSessionTracker;
- (id)navigationAnalyticsContext;
- (id)priorModule;
- (id)analyticsModule;
- (id)initWithUserSession:(id)arg1 titleConfiguration:(id)arg2 navigationAnalyticsContext:(id)arg3 productCollectionProperties:(id)arg4 initialDataModel:(id)arg5 entryPoint:(long long)arg6 areProductCellsDismissable:(_Bool)arg7 shoppingSessionTracker:(id)arg8 productCellFirstSubtitleType:(long long)arg9 showReviewStatus:(_Bool)arg10 surfaceNavigationTraits:(long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

