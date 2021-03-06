//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveMTFeedPageControlDataSource-Protocol.h"
#import "HTSLiveMTFeedPageControlDelegate-Protocol.h"
#import "IESLiveMTDislikeServiceDelegate-Protocol.h"
#import "IESLiveMTModernLiveFeedStreamingControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class IESLiveMTFeedPageControl, IESLiveMTFeedScrollTracker, IESLiveMTFeedStreamingDisplayHandler, IESLiveMTModernLiveFeedStreamingController, IESLiveMTPerformanceTimer, NSString, UICollectionView;
@protocol HTSLiveViewHierarchyProvider, IESLiveMTContainerRouter, IESLiveMTDislikeGuide, IESLiveMTDislikeService, IESLiveMTDislikeServiceFactory, IESLiveMTFeedADConvert, IESLiveMTFeedLayoutPageItem, IESLiveMTFeedMobileNetEnableService, IESLiveMTFeedPageViewDataSource, IESLiveMTFeedPageViewDelegate, IESLiveMTFeedTracker, IESLiveMTRoomInnerFeedContainerService, IESLivePerfSampler, IESLiveSettings, IESLiveTracker;

@interface IESLiveMTFeedPageView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, HTSLiveMTFeedPageControlDataSource, HTSLiveMTFeedPageControlDelegate, IESLiveMTDislikeServiceDelegate, IESLiveMTModernLiveFeedStreamingControllerDelegate>
{
    _Bool _isSubTabVaild;
    _Bool _enableUseInnerFeed;
    _Bool _isFeedDrawerMode;
    _Bool _pageControlSuspending;
    id <IESLiveMTFeedPageViewDataSource> _dataSource;
    id <IESLiveMTFeedPageViewDelegate> _delegate;
    UICollectionView *_collectionView;
    IESLiveMTFeedPageControl *_pageControl;
    id <IESLiveMTFeedLayoutPageItem> _currentPageItem;
    id <IESLiveMTFeedTracker> _feedTracker;
    IESLiveMTModernLiveFeedStreamingController *_streamingController;
    IESLiveMTFeedStreamingDisplayHandler *_streamingDisplayHandler;
    UIView *_headerView;
    id <IESLiveMTDislikeService> _dislikeService;
    IESLiveMTFeedScrollTracker *_scrollHandler;
    double _lastContentOffsety;
    double _oldContentOffsetY;
    id <IESLiveMTDislikeGuide> _dislikeGuide;
    id <IESLiveTracker> _track;
    id <IESLiveSettings> _settings;
    id <IESLiveMTContainerRouter> _liveRouter;
    id <IESLiveMTDislikeServiceFactory> _dislikeFactory;
    id <IESLiveMTFeedMobileNetEnableService> _netService;
    id <IESLiveMTFeedADConvert> _adConvert;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLivePerfSampler> _perfSampler;
    id <IESLiveMTRoomInnerFeedContainerService> _innerContainerService;
    IESLiveMTPerformanceTimer *_performanceTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IESLiveMTPerformanceTimer *performanceTimer; // @synthesize performanceTimer=_performanceTimer;
@property(retain, nonatomic) id <IESLiveMTRoomInnerFeedContainerService> innerContainerService; // @synthesize innerContainerService=_innerContainerService;
@property(nonatomic) __weak id <IESLivePerfSampler> perfSampler; // @synthesize perfSampler=_perfSampler;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveMTFeedADConvert> adConvert; // @synthesize adConvert=_adConvert;
@property(retain, nonatomic) id <IESLiveMTFeedMobileNetEnableService> netService; // @synthesize netService=_netService;
@property(retain, nonatomic) id <IESLiveMTDislikeServiceFactory> dislikeFactory; // @synthesize dislikeFactory=_dislikeFactory;
@property(retain, nonatomic) id <IESLiveMTContainerRouter> liveRouter; // @synthesize liveRouter=_liveRouter;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveTracker> track; // @synthesize track=_track;
@property(retain, nonatomic) id <IESLiveMTDislikeGuide> dislikeGuide; // @synthesize dislikeGuide=_dislikeGuide;
@property(nonatomic) _Bool pageControlSuspending; // @synthesize pageControlSuspending=_pageControlSuspending;
@property(nonatomic) double oldContentOffsetY; // @synthesize oldContentOffsetY=_oldContentOffsetY;
@property(nonatomic) double lastContentOffsety; // @synthesize lastContentOffsety=_lastContentOffsety;
@property(retain, nonatomic) IESLiveMTFeedScrollTracker *scrollHandler; // @synthesize scrollHandler=_scrollHandler;
@property(retain, nonatomic) id <IESLiveMTDislikeService> dislikeService; // @synthesize dislikeService=_dislikeService;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) IESLiveMTFeedStreamingDisplayHandler *streamingDisplayHandler; // @synthesize streamingDisplayHandler=_streamingDisplayHandler;
@property(retain, nonatomic) IESLiveMTModernLiveFeedStreamingController *streamingController; // @synthesize streamingController=_streamingController;
@property(retain, nonatomic) id <IESLiveMTFeedTracker> feedTracker; // @synthesize feedTracker=_feedTracker;
@property(retain, nonatomic) id <IESLiveMTFeedLayoutPageItem> currentPageItem; // @synthesize currentPageItem=_currentPageItem;
@property(retain, nonatomic) IESLiveMTFeedPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isFeedDrawerMode; // @synthesize isFeedDrawerMode=_isFeedDrawerMode;
@property(nonatomic) _Bool enableUseInnerFeed; // @synthesize enableUseInnerFeed=_enableUseInnerFeed;
@property(nonatomic) _Bool isSubTabVaild; // @synthesize isSubTabVaild=_isSubTabVaild;
@property(nonatomic) __weak id <IESLiveMTFeedPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IESLiveMTFeedPageViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (long long)preLoadMoreCount;
- (void)trackShowFeedItem;
- (void)dislikeService:(id)arg1 didDeleteIndexPath:(id)arg2;
- (void)streamingController:(id)arg1 roomFinished:(id)arg2;
- (void)pageControl:(id)arg1 didSelectItem:(id)arg2;
- (id)pageItems;
- (void)animationPageContol:(id)arg1 displayOnScreen:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fixedPageControl;
- (void)suspendingPageControl;
- (void)pageControlSinkingIfNeeded;
- (void)pageControlSuspendingIfNeeded;
- (struct CGSize)collectionViewHeaderSize;
- (struct CGRect)innerPageControlFrame;
- (struct CGRect)outerPageControlFrame;
- (void)removeStreamingController;
- (void)addStreamingController;
- (void)adjustStreamingControllerIfNeeded;
- (_Bool)isCurrentUserInRoom;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)getPerformance;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)isNewFeedDrawStyle;
- (_Bool)checkIndexPathsValid:(id)arg1;
- (unsigned long long)calculateOuterIndexByInnerIndex:(unsigned long long)arg1;
- (void)trackItemDisplayWithIndexPath:(id)arg1 cell:(id)arg2;
- (void)subTabTrack;
- (void)enterSwipeRoom:(id)arg1 player:(id)arg2 indexPath:(id)arg3;
- (void)enterSingleRoom:(id)arg1 player:(id)arg2;
- (void)enterLiveRoom:(id)arg1 indexPath:(id)arg2;
- (id)_getReusePlayerFromRoom:(id)arg1;
- (void)addDislikeService;
- (id)getVisibleCellIds;
- (_Bool)isOnScreen:(id)arg1;
- (void)loadView;
- (void)reloadTabPageControl;
- (void)reloadDataWithIndexPath:(id)arg1;
- (void)streaming:(_Bool)arg1;
- (void)scrollToIndex:(unsigned long long)arg1;
- (void)selectPageItem:(id)arg1;
- (void)didCloseItemAtIndexPath:(id)arg1;
- (void)appendItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)reloadDataOfPageItem:(id)arg1;
- (void)viewWillAppear;
- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect)arg1 feedDrawerMode:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

