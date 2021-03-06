//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIFeatureManager, NSDictionary;
@protocol DataBrokerDataProviderProtocol, OS_dispatch_queue;

@interface NFUIConfigManager : NSObject
{
    NSObject<OS_dispatch_queue> *_configFileQueue;
    _Bool _canaryAllocationChecked;
    id <DataBrokerDataProviderProtocol> _delegate;
    NFUIFeatureManager *_featureManager;
}

+ (id)lolomoModel;
+ (id)sharedInstance;
@property(retain, nonatomic, getter=feature) NFUIFeatureManager *featureManager; // @synthesize featureManager=_featureManager;
@property(nonatomic) _Bool canaryAllocationChecked; // @synthesize canaryAllocationChecked=_canaryAllocationChecked;
@property(nonatomic) __weak id <DataBrokerDataProviderProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)configFilePath;
- (id)configDirPath;
- (void)suppressCanaryAllocationTest:(id)arg1;
- (void)setCanaryAllocationTest:(id)arg1 andCell:(id)arg2;
@property(readonly, nonatomic) NSDictionary *config;
- (id)init;
- (_Bool)isGenreFilterEnabled;
- (_Bool)isImprovedVisibilityForFiltersEnabled;
- (_Bool)isGenrePromenenceEnabled;
- (_Bool)isBrightnessControlEnabled;
- (_Bool)isLockControlEnabled;
- (_Bool)additionalPlayabackControlsEnabled;
- (_Bool)isSpeedControlEnabled;
- (_Bool)autoplaySettingsSwitchEnabled;
- (id)extrasCTAOptions;
- (_Bool)isExtasCTAEnabled;
- (_Bool)isCircumventAssetEnabled;
- (_Bool)videoInDP_isRotationUpdatedEnabled;
- (_Bool)videoInDP_isAutoPlayIntoTitleEnabled;
- (_Bool)videoInDP_isInlineMerchEnabled;
- (_Bool)videoInDP_isMerchButtonEnabled;
- (_Bool)videoMerchInDPEnabled;
- (_Bool)newNavigationBarDownloadsEnabled;
- (_Bool)newNavigationUseDefaultAccountIcon;
- (_Bool)newNavigationUseDefaultAccountTab;
- (_Bool)newNavigationUseDefaultMdxBug;
- (_Bool)newNavigationBarEnabled;
- (_Bool)isParentalControlWebLinksEnabled;
- (_Bool)isParentalControlEnabled;
- (_Bool)isSkipContentEnabled;
- (_Bool)hasMidnightStorm;
- (_Bool)hasTopTenTitles;
- (_Bool)isContentAdvisoryEnabled;
- (_Bool)shouldShowShareToolTipBeforeDownload;
- (_Bool)mobileDownloadTooltipEnabled;
- (_Bool)mobileSharingTooltipEnabled;
- (_Bool)mobileSharingEnabled;
- (_Bool)atreyu2NoReduxEnabled;
- (_Bool)atreyu2Enabled;
- (_Bool)atreyuEnabled;
- (long long)graphqlSearchMaxFailures;
- (_Bool)graphqlApolloEnabled;
- (_Bool)graphqlSearchEnabled;
- (_Bool)prequerySearchShouldPrefetchResults;
- (_Bool)prequerySearchLegacyEnabled;
- (_Bool)prequerySearchEnabled;
- (_Bool)mobileCollectionsEssentialsEnabled;
- (_Bool)mobileCollectionsForceToolTip;
- (_Bool)mobileCollectionsTitleGroupsEnabled;
- (_Bool)mobileCollectionsAltRowName;
- (_Bool)mobileCollectionsNoHorizontalScrollModule;
- (_Bool)mobileCollectionsNoCategoryFilter;
- (_Bool)mobileCollectionsNoEditorialContent;
- (_Bool)mobileCollectionsNoCategoryTreatment;
- (_Bool)mobileCollectionsEnabled;
- (_Bool)clipsCollectionListEnabled;
- (_Bool)clipsClipFeedEnabled;
- (_Bool)clipsCollectionFeedEnabled;
- (_Bool)clipsEnabled;
- (_Bool)isDownloadsTabBadgeV2DismissOnTap;
- (id)snapchatOAuthClientID;
- (_Bool)isSimpleSharingEnabled;
- (_Bool)isOfflinePlaybackAirplaneWiFiErrorHandlingEnabled;
- (_Bool)familiarityForceReloadEnabled;
- (_Bool)familiarityPreloadDisabled;
- (_Bool)familiaritySimpleHeadersEnabled;
- (_Bool)familiarityAllRowsEnabled;
- (_Bool)familiarityPlaybackScrollHeuristicsEnabled;
- (_Bool)familiarityPrefetchingEnabled;
- (_Bool)familiarityParallaxBillboardEnabled;
- (_Bool)familiaritySuppressPlayButton;
- (_Bool)familiarityTitleCardTreatmentEnabled;
- (_Bool)familiarityUIEnabled;
- (_Bool)updatedPlaybackOnHoldError;
- (_Bool)boxArtLabelsEnabled;
- (_Bool)imageLabelAccessibilityEnabled;
- (_Bool)branchingPlaylistPlayerEnabled:(id)arg1;
- (_Bool)branchingPlaylistPlayerEnabled;
- (_Bool)playgraphPlayerForBranchingEnabled;
- (_Bool)playgraphPlayerEnabled;
- (_Bool)playlistPlayerEnabled;
- (long long)failedDownloadAlertStyle;
- (_Bool)shouldContinueAudioOnLockScreenWithLowBitrate;
- (_Bool)shouldContinueAudioOnLockScreenOnWiFiOnly;
- (_Bool)isContinueAudioOnLockScreenActive;
- (unsigned long long)quickPlayMaxPrebufferCount;
- (_Bool)isLolomoContainerEnabled;
- (_Bool)volumeLoggingEnabled;
- (_Bool)shouldShrinkOrHideTabLabels;
- (long long)updatesPageSize;
- (long long)updatesExpiryDurationInMinutes;
- (id)updatesTabKey;
- (id)updatesScrollType;
- (_Bool)isNotificationsInUpdatesTab;
- (_Bool)isUpdatesEnabled;
- (id)timeDurationAfterCrashToAutoplay;
- (_Bool)isPlaybackAfterCrashEnabled;
- (_Bool)aroGalleriesSearchAsTab;
- (_Bool)aroGalleriesForceFullLogo;
- (_Bool)aroGalleriesSuppressSubGenre;
- (_Bool)aroGalleriesIncludeRecentlyAdded;
- (_Bool)aroGalleriesSubGenreFilterText;
- (_Bool)aroGalleriesShouldHideSubGenreMenu;
- (id)loadingSkeletonDelay;
- (_Bool)isMDXSkipIntroEnabled;
- (_Bool)pipContinueWatchingSwipeToBringBack;
- (_Bool)pipContinueWatchingOnlyShowIfPositionOne;
- (_Bool)pipContinueWatchingDismissAfterPlay;
- (_Bool)pipContinueWatchingHomeTabOnly;
- (_Bool)pipContinueWatchingImageProgressBar;
- (_Bool)pipContinueWatchingHasCWRow;
- (_Bool)pipContinueWatchingLoopingImages;
- (_Bool)pipContinueWatchingSingleTitleDisplay;
- (_Bool)isPipContinueWatchingEnabled;
- (id)tabTypeOverrides;
- (_Bool)audioOnByDefault;
- (_Bool)shouldGoBackToFirstPreview;
- (_Bool)canHandleOrcDataCallForBillboard;
- (_Bool)shouldDisablePreviewsRow;
- (_Bool)canHandleBillboardMultipleVideos;
- (_Bool)previewsItemUIInBillboardEnabled;
- (_Bool)pageControlEnabled;
- (_Bool)canHandleTrailersInBillboard;
- (_Bool)multipleStaticBillboardsEnabled;
- (_Bool)previewsInBillboardEnabled;
- (_Bool)shouldShowDownloadsBumblebee;
- (_Bool)shouldExplicitlySetExternalPlayback;
- (_Bool)isLottieBasedThumbs;
- (_Bool)isTitleGroupsRowEnabled;
- (_Bool)isPreviewsPrefetchEnabled;
- (_Bool)isPreviewsRowEnabled;
- (_Bool)enhancedDPGesturesUseMorphTransition;
- (_Bool)isColorDPEnabled;
- (id)viewPortWidth;
- (id)titlesPerRow;
- (id)maxRows;
- (_Bool)shouldUseCharacterStoryArt;
- (_Bool)invalidateOnAdultProfileMismatch;

@end

