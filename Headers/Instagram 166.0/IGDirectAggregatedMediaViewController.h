//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGCollectionViewLayoutDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAggregatedMediaCacheListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectAggregatedMediaSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGDirectAggregatedMediaCache, IGListAdapter, IGUserSession, NSString, UICollectionView;

@interface IGDirectAggregatedMediaViewController : IGViewController <IGDirectAggregatedMediaCacheListener, IGDirectAggregatedMediaSectionControllerDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGCollectionViewLayoutDataSource, UIScrollViewDelegate>
{
    NSString *_threadId;
    IGDirectAggregatedMediaCache *_aggregatedMediaCache;
    long long _mediaType;
    IGUserSession *_userSession;
    IGListAdapter *_listAdapter;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)_fetchMoreMediaIfNeeded;
- (struct UIEdgeInsets)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 insetForSection:(long long)arg3;
- (struct CGSize)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 sizeForHeaderViewAtIndexPath:(id)arg3;
- (struct CGSize)layoutDataSourceCollectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 performAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4;
- (_Bool)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2;
- (void)aggregatedMediaViewer:(id)arg1 didViewMedia:(id)arg2;
- (id)aggregatedMediaViewer:(id)arg1 animationViewForMedia:(id)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingObject:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)aggregatedMediaCacheDidUpdateForThreadId:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithThreadId:(id)arg1 aggregatedMediaCache:(id)arg2 mediaType:(long long)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

