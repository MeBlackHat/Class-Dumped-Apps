//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WAGimmickPickerViewConfiguring-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSMutableDictionary, NSMutableSet, NSString, UICollectionView, UIColor, WAGIFSearch, WAPersistentKeyValueStoreCursor;
@protocol WAGIFPickerManagerDelegate><UIScrollViewDelegate;

@interface WAGIFPickerManager : NSObject <UICollectionViewDelegateFlowLayout, WAGimmickPickerViewConfiguring, UICollectionViewDelegate>
{
    NSMutableDictionary *_contentCollectionViewMap;
    NSMutableDictionary *_contentBackgroundViewMap;
    UICollectionView *_categoryCollectionView;
    NSArray *_localCategories;
    NSArray *_remoteCategories;
    NSIndexPath *_currentCategory;
    WAGIFSearch *_search;
    NSDictionary *_categoryToGIFsMap;
    NSMutableSet *_playingGIFCells;
    WAPersistentKeyValueStoreCursor *_recentGIFCursor;
    WAPersistentKeyValueStoreCursor *_starredGIFCursor;
    _Bool _loadingMoreStarredGIFs;
    _Bool _loadingMoreGIFs;
    id <WAGIFPickerManagerDelegate><UIScrollViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WAGIFPickerManagerDelegate><UIScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)contentCollectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)contentCollectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)contentCollectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)contentCollectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)contentCollectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInContentCollectionView:(id)arg1;
- (void)categoryCollectionViewDidSelectItemAtIndexPath:(id)arg1;
- (id)categoryCollectionViewCellForItemAtIndexPath:(id)arg1;
- (long long)categoryCollectionViewNumberOfItemsInSection:(long long)arg1;
- (long long)numberOfSectionsInCategoryCollectionView;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)stopPlaybackInGIFCollectionViewCell:(id)arg1;
- (void)startPlaybackInGIFCollectionViewCell:(id)arg1;
- (void)contentCollectionViewDidEndDisplaying:(id)arg1;
@property(readonly, nonatomic) long long numberOfCategorySections;
- (long long)numberOfItemsInPagingCollectionViewSection:(long long)arg1;
@property(readonly, copy, nonatomic) NSString *pagingCollectionViewCellReuseIdentifier;
@property(readonly, nonatomic) long long numberOfSectionsInPagingCollectionView;
@property(readonly, nonatomic) NSIndexPath *currentCategory;
- (_Bool)userScrolledToCategory:(id)arg1;
- (void)contentCollectionView:(id)arg1 didLongPressAtIndexPath:(id)arg2;
- (id)contentCollectionViewBackgroundViewForCategory:(id)arg1;
- (id)collectionViewLayoutForCategoryCollectionView;
- (void)configureContentCollectionView:(id)arg1;
@property(readonly, nonatomic) UIColor *GIFButtonTintColor;
@property(readonly, nonatomic) UIColor *stickerButtonTintColor;
@property(readonly, nonatomic) NSString *accessibilityLabelForLeftButton;
@property(readonly, nonatomic) NSString *accessibilityLabelForRightButton;
@property(readonly, nonatomic) _Bool shouldShowLeftButton;
@property(readonly, nonatomic) _Bool shouldShowRightButtonUpdateIndicator;
@property(readonly, nonatomic) _Bool shouldShowRightButton;
@property(readonly, nonatomic) NSString *configurationIdentifier;
- (void)loadNextBatchForCategory:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadNextBatchIfNecessaryForIndexPath:(id)arg1;
- (_Bool)shouldTriggerLoadingNextBatchForIndexPath:(id)arg1;
- (_Bool)indexPathIsCloseToEndOfGIFContent:(id)arg1;
- (_Bool)reachedMaximumNumberOfBatches;
- (void)updateCurrentCategoryTo:(id)arg1;
- (id)categoryForCollectionView:(id)arg1;
- (void)showStarredCategory;
- (void)setDefaultGIFCategory;
- (id)currentGIFCollection;
- (id)contentBackgroundViewForCategory:(id)arg1;
- (id)placeholderViewForLocalCategoryItem:(unsigned long long)arg1;
- (id)loadingView;
- (void)didUpdateStarredGIFs:(id)arg1;
- (void)didUpdateRecentGIFs:(id)arg1;
- (void)appendMoreStarredGIFsWithCursor:(id)arg1 updateCollectionView:(id)arg2;
- (void)initializeStarredGIFs;
- (void)initializeRecentGIFs;
- (void)initializeRemoteGIFsForIndexPath:(id)arg1;
- (void)initializeLocalGIFs;
- (id)initWithCategoryCollectionView:(id)arg1 contentCollectionViewMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

