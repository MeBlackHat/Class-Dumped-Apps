//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGFeedConfigurationType-Protocol.h>

@class NSString;

@interface IGDefaultFeedConfiguration : NSObject <IGFeedConfigurationType>
{
    NSString *_moduleName;
    CDStruct_8ab98ee7 _carouselInteractionOptions;
}

- (void).cxx_destruct;
- (_Bool)shouldDisableSwipeToSwitchVideoAfterOpeningIGTVFeedPreview;
- (_Bool)shouldPauseVideoOnCompletionAfterOpeningIGTVFeedPreview;
- (struct UIEdgeInsets)CTAButtonTappableInsets;
- (unsigned long long)CTAButtonAccessoryPosition;
- (double)loadDistance;
- (_Bool)shouldShowTopSeparator;
- (_Bool)hideDismissedPostsOnDisappear;
- (_Bool)interactiveTagHints;
- (_Bool)persistentOverlayIndicators;
- (long long)UFIPageIndicatorPosition;
- (long long)pageIndicatorType;
- (long long)UFIExternalShareButtonStyle;
- (long long)UFISaveButtonStyle;
- (id)sponsoredSupportConfiguration;
- (_Bool)shouldRenderMediaInSquare;
- (_Bool)supportSeenState;
- (id)feedConsumptionTracker;
- (_Bool)supportCarouselIndexing;
- (_Bool)supportCarouselBumpingAnimation;
- (_Bool)shouldTombstoneForUnrelatedHashtagFeedItem;
- (_Bool)supportAccountRecommendations;
- (_Bool)shouldTrackCarouselSeenState;
- (CDStruct_8ab98ee7)carouselInteractionOptions;
- (unsigned long long)tombstoneTypeForFeed;
- (id)feedAccessibilityIdentifier;
- (id)savedMediaCollection;
- (id)analyticsModule;
- (_Bool)supportFavoritesTooltip;
- (_Bool)supportSocialContext;
- (_Bool)supportsEdgePostLabel;
- (_Bool)supportStoryRingInHeader;
- (_Bool)shouldPrefetchMediaForFeedItems;
- (_Bool)useAutoplayStrategyforHorizontalVideos;
- (_Bool)videoStitchingEnabled;
- (_Bool)shouldAutoplayVideos;
- (id)prioritizedDirectRecipient;
- (unsigned long long)igtvViewerFeedPreviewEntryPoint;
- (unsigned long long)sponsoredPostEntryPoint;
- (long long)feedItemHeaderStoryEntryPoint;
- (id)initWithModuleName:(id)arg1 carouselInteractionOptions:(CDStruct_8ab98ee7)arg2;
- (id)initWithModuleName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

