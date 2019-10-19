//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADraggablePopUpViewController.h"

#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"

@class NSArray, NSString, UIActivityIndicatorView, UICollectionView, UISearchBar, UIView, WAEmojiSearchEngine, WAStickerEventCategoryManager;
@protocol WAStickerSearchViewControllerDelegate;

@interface WAStickerSearchViewController : WADraggablePopUpViewController <UICollectionViewDelegate, UISearchBarDelegate, UIScrollViewDelegate>
{
    WAEmojiSearchEngine *_searchEngine;
    NSArray *_stickersSearched;
    double _lastKnownCollectionViewWidth;
    UIView *_noResultsView;
    UIActivityIndicatorView *_activityIndicatorView;
    WAStickerEventCategoryManager *_recentCategoryManager;
    _Bool _activateSearchBar;
    UIView *_emptyView;
    id <WAStickerSearchViewControllerDelegate> _delegate;
    UISearchBar *_searchBar;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak id <WAStickerSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchQueryWithText:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)invalidateCollectionViewLayout;
- (void)closeStickerPicker:(id)arg1;
- (void)predefinedSearch:(id)arg1;
- (void)showEmptyScreenIfNeeded;
- (void)showLoadingScreen:(_Bool)arg1;
- (void)showNoResultsScreen:(_Bool)arg1;
- (void)showRecents;
- (void)longPressContentCollectionView:(id)arg1;
- (void)resignAllFirstResponders;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)stickerSearchCollectionViewFlowLayout;
- (struct CGSize)stickerSize;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

