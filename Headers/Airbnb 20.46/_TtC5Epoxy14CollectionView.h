//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import "UITraitEnvironment-Protocol.h"

@interface _TtC5Epoxy14CollectionView : UICollectionView <UITraitEnvironment>
{
    // Error parsing type: , name: accessibilityDelegate
    // Error parsing type: , name: scrollDelegate
    // Error parsing type: , name: layoutDelegate
    // Error parsing type: , name: epoxyItemDisplayDelegate
    // Error parsing type: , name: epoxyItemPrefetchDataSource
    // Error parsing type: , name: selectionStyle
    // Error parsing type: , name: autoDeselectItems
    // Error parsing type: , name: transitionLayoutDelegate
    // Error parsing type: , name: reorderingDelegate
    // Error parsing type: , name: didTriggerPullToRefresh
    // Error parsing type: , name: $__lazy_storage_$_pullToRefreshControl
    // Error parsing type: , name: pullToRefreshEnabled
    // Error parsing type: , name: epoxyDataSource
    // Error parsing type: , name: epoxyLogger
    // Error parsing type: , name: queuedUpdate
    // Error parsing type: , name: isUpdating
    // Error parsing type: , name: infiniteScrollingLoader
    // Error parsing type: , name: infiniteScrollingDelegate
    // Error parsing type: , name: infiniteScrollingState
    // Error parsing type: , name: ephemeralStateCache
    // Error parsing type: , name: lastFocusedDataID
    // Error parsing type: , name: $__lazy_storage_$_scrollAnimator
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didTriggerPullToRefreshControlWithSender:(id)arg1;
@property(nonatomic) struct CGSize contentSize;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

