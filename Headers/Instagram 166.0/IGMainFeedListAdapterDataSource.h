//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedSectionControllerDirectSharingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListWorkingRangeDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMainFeedNetegoImpressionExtrasProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayLoggingContextDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGTitleAndActionSectionControllerDelegate-Protocol.h>

@class IGAdItemMapper, IGCollectionViewVisibility, IGFeedPlayerPreloader, IGFeedStatusView, IGMainFeedNetegoImpressionStrategy, IGMainFeedNetworkSource, IGMainFeedSlideshowToggle, IGMainStoryTrayDataSource, IGQPMegaphone, IGQPMegaphoneSectionControllerPresenter, IGQuickPromotionCoordinator, IGStoryTraySectionController, IGTitleAndActionItemViewModel, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGDirectShareSheetControlling, IGFeedMegaphoneProvider, IGFeedSectionControllerComponentsType, IGMainFeedListAdapterDataSourceDelegate, IGMainFeedStoryTrayLoggingContextProvider, IGStoryTraySectionControllerViewerDelegate;

@interface IGMainFeedListAdapterDataSource : NSObject <IGFeedSectionControllerDirectSharingDelegate, IGTitleAndActionSectionControllerDelegate, IGListWorkingRangeDelegate, IGListAdapterDataSource, IGStoryTrayLoggingContextDataSource, IGMainFeedNetegoImpressionExtrasProvider>
{
    IGQuickPromotionCoordinator *_qpCoordinator;
    IGQPMegaphone *_qpMegaphone;
    IGQPMegaphoneSectionControllerPresenter *_qpMegaphoneSectionControllerPresenter;
    IGMainFeedNetegoImpressionStrategy *_netegoStrategy;
    IGFeedPlayerPreloader *_feedPlayerPreloader;
    IGMainFeedSlideshowToggle *_slideshowToggle;
    IGAdItemMapper *_adItemMapper;
    _Bool _isAdRemodelingEnabled;
    IGStoryTraySectionController *_currentMainStoryTraySectionControllerForDebugging;
    _Bool _containsTopOfFeed;
    IGCollectionViewVisibility *_collectionViewVisibility;
    IGTitleAndActionItemViewModel *_followingHeaderViewModel;
    NSMutableDictionary *_inFeedStoriesTrayModelToDataSourceDict;
    _Bool _enableCacheDataSourceForInFeedUnit;
    _Bool _showPlaceholders;
    _Bool _neverShowWelcomeCard;
    _Bool _hideStoriesTray;
    _Bool _showWelcomeCard;
    id <IGFeedMegaphoneProvider> _megaphoneProvider;
    IGFeedStatusView *_feedStatusView;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    NSArray *_items;
    IGUserSession *_userSession;
    IGMainFeedNetworkSource *_networkSource;
    NSString *_analyticsModule;
    id <IGMainFeedListAdapterDataSourceDelegate> _delegate;
    id <IGMainFeedStoryTrayLoggingContextProvider> _loggingContextProvider;
    id <IGStoryTraySectionControllerViewerDelegate> _storyTrayViewerDelegate;
    IGMainStoryTrayDataSource *_mainStoryTrayDataSource;
    id <IGDirectShareSheetControlling> _reshareController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showWelcomeCard; // @synthesize showWelcomeCard=_showWelcomeCard;
@property(readonly, nonatomic) id <IGDirectShareSheetControlling> reshareController; // @synthesize reshareController=_reshareController;
@property(readonly, nonatomic) IGMainStoryTrayDataSource *mainStoryTrayDataSource; // @synthesize mainStoryTrayDataSource=_mainStoryTrayDataSource;
@property(readonly, nonatomic) __weak id <IGStoryTraySectionControllerViewerDelegate> storyTrayViewerDelegate; // @synthesize storyTrayViewerDelegate=_storyTrayViewerDelegate;
@property(readonly, nonatomic) __weak id <IGMainFeedStoryTrayLoggingContextProvider> loggingContextProvider; // @synthesize loggingContextProvider=_loggingContextProvider;
@property(readonly, nonatomic) __weak id <IGMainFeedListAdapterDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
@property(readonly, nonatomic) IGMainFeedNetworkSource *networkSource; // @synthesize networkSource=_networkSource;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool hideStoriesTray; // @synthesize hideStoriesTray=_hideStoriesTray;
@property(nonatomic) _Bool neverShowWelcomeCard; // @synthesize neverShowWelcomeCard=_neverShowWelcomeCard;
@property(nonatomic) _Bool showPlaceholders; // @synthesize showPlaceholders=_showPlaceholders;
@property(readonly, nonatomic) id <IGFeedSectionControllerComponentsType> feedSectionControllerComponents; // @synthesize feedSectionControllerComponents=_feedSectionControllerComponents;
@property(readonly, nonatomic) IGFeedStatusView *feedStatusView; // @synthesize feedStatusView=_feedStatusView;
@property(readonly, nonatomic) id <IGFeedMegaphoneProvider> megaphoneProvider; // @synthesize megaphoneProvider=_megaphoneProvider;
- (id)_trayDataSourceForInFeedTrayModel:(id)arg1;
- (_Bool)_postsContainOnlyOwnOrAYMFPosts:(id)arg1;
- (void)titleAndActionSectionController:(id)arg1 didSelectActionForViewModel:(id)arg2;
- (id)storyTrayViewModelsForLoggingContext;
- (void)_preloadVideoPlayerAtIndex:(unsigned long long)arg1 listAdapter:(id)arg2 objects:(id)arg3;
- (void)listAdapter:(id)arg1 sectionControllerDidExitWorkingRange:(id)arg2;
- (void)listAdapter:(id)arg1 sectionControllerWillEnterWorkingRange:(id)arg2;
- (void)feedSectionControllerDidDismissDirectShareSheet;
- (void)feedSectionController:(id)arg1 willPresentDirectShareSheet:(id)arg2;
- (_Bool)isHoldingStoryViewController;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (void)resetInFeedUnitDataSourceCache;
- (void)updateWithQPMegaphone:(id)arg1 qpSectionControllerPresenter:(id)arg2;
- (_Bool)shouldShowWelcomeCard;
- (id)objectsForListAdapter:(id)arg1;
- (id)_objects;
- (id)netEgoExtrasForObject:(id)arg1;
- (id)initWithUserSession:(id)arg1 feedComponents:(id)arg2 storyTrayLoggingContextProvider:(id)arg3 storyTrayViewerDelegate:(id)arg4 networkSource:(id)arg5 delegate:(id)arg6 analyticsModule:(id)arg7 netegoImpressionLogger:(id)arg8 slideshowToggle:(id)arg9 adItemMapper:(id)arg10 containsTopOfFeed:(_Bool)arg11 collectionViewVisibility:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

