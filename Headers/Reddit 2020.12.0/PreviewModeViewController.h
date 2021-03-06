//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PagingCollectionViewLayoutDelegate-Protocol.h"
#import "PreviewModeDataSourceDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateExtended-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BaseCollectionView, NSMutableSet, NSString, PagingCollectionViewLayout, PreviewModeDataSource;

@interface PreviewModeViewController : BaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, UICollectionViewDelegateExtended, PreviewModeDataSourceDelegate, PagingCollectionViewLayoutDelegate>
{
    NSString *_pk;
    CDUnknownBlockType _didScrollToViewController;
    PreviewModeDataSource *_previewModeDataSource;
    unsigned long long _initialIndex;
    BaseCollectionView *_collectionView;
    PagingCollectionViewLayout *_fullscreenPagingLayout;
    NSMutableSet *_willDisplayViews;
    NSMutableSet *_endDisplayViews;
}

@property(retain, nonatomic) NSMutableSet *endDisplayViews; // @synthesize endDisplayViews=_endDisplayViews;
@property(retain, nonatomic) NSMutableSet *willDisplayViews; // @synthesize willDisplayViews=_willDisplayViews;
@property(retain, nonatomic) PagingCollectionViewLayout *fullscreenPagingLayout; // @synthesize fullscreenPagingLayout=_fullscreenPagingLayout;
@property(retain, nonatomic) BaseCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) unsigned long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(retain, nonatomic) PreviewModeDataSource *previewModeDataSource; // @synthesize previewModeDataSource=_previewModeDataSource;
@property(copy, nonatomic) CDUnknownBlockType didScrollToViewController; // @synthesize didScrollToViewController=_didScrollToViewController;
@property(copy, nonatomic) NSString *pk; // @synthesize pk=_pk;
- (void).cxx_destruct;
- (void)logSwipePreviousEvent;
- (void)logSwipeNextEvent;
- (id)analyticsScreenViewName;
- (void)didInsertViewControllersAtIndexPaths:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 cellDidBecomeFullyVisible:(id)arg2;
- (void)collectionView:(id)arg1 didPaginateToIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willPaginateToIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)configureNavigationBarAppearance;
- (void)configureViewAppearance;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)currentViewContainsRect:(struct CGRect)arg1;
- (void)fireViewDidAppearUpdates:(_Bool)arg1;
- (void)fireViewWillAppearUpdates:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPreviewModeDataSource:(id)arg1 initialIndex:(unsigned long long)arg2;
- (id)initWithPreviewModeDataSource:(id)arg1;
- (id)initWithPreviewControllers:(id)arg1 initialIndex:(unsigned long long)arg2;
- (id)initWithPreviewControllers:(id)arg1;
- (id)collectionViewLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

