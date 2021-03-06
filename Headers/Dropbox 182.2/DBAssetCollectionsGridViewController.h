//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBHeroHeaderAwareCollectionViewController.h"

@class DBAssetCollectionsGridLayout, DBAssetCollectionsGridNavigationItem, DBAssetCollectionsGridTopLayoutGuideProvider, DBBlockBarButtonItem, DBCollectionViewContentViewSizeProvider, NSSet, PHImageManager;
@protocol DBAssetAlbumListModelProtocol, DBAssetCollectionModelProtocol, DBAssetPickerPresenterProtocol, DBAssetSetProtocol, DBObserverHandleProtocol;

@interface DBAssetCollectionsGridViewController : DBHeroHeaderAwareCollectionViewController
{
    DBAssetCollectionsGridLayout *_layout;
    DBCollectionViewContentViewSizeProvider *_sizeProvider;
    id <DBAssetCollectionModelProtocol> _currentAlbumModel;
    PHImageManager *_imageManager;
    _Bool _photosOnly;
    id <DBAssetAlbumListModelProtocol> _albumListModel;
    id <DBAssetPickerPresenterProtocol> _presenter;
    unsigned long long _currentNumItemsPerRow;
    DBAssetCollectionsGridTopLayoutGuideProvider *_topLayoutGuideProvider;
    id <DBAssetSetProtocol> _selectedAssetSet;
    id <DBObserverHandleProtocol> _selectedAssetSetObserver;
    DBAssetCollectionsGridNavigationItem *_navigationItem;
    _Bool _didCompleteFirstLayout;
    struct CGSize _lastContentSize;
    _Bool _showNavigationLoadingItem;
    DBBlockBarButtonItem *_rightNavigationActionItem;
}

+ (id)db_fetchResultForAssetCollection:(id)arg1;
+ (unsigned long long)db_numItemsPerRowForBoundsWidth:(double)arg1;
+ (struct CGSize)db_itemSizeForBoundsWidth:(double)arg1;
+ (id)db_collectionViewLayout;
+ (id)gridViewControllerForAlbumWithAssetCollection:(id)arg1 albumListModel:(id)arg2 imageManager:(id)arg3 photosOnly:(_Bool)arg4 presenter:(id)arg5 selectedAssetSet:(id)arg6;
+ (id)gridViewControllerForAlbumWithAssetCollection:(id)arg1 albumListModel:(id)arg2 imageManager:(id)arg3 presenter:(id)arg4;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionModelDidRefresh:(id)arg1;
- (id)statusMessageForState:(long long)arg1;
- (id)statusViewForState:(long long)arg1;
- (void)db_updateLayoutWithTopLayoutGuideLength:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)navigationItem;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)db_handleContentSizeChangeFrom:(struct CGSize)arg1 to:(struct CGSize)arg2;
- (void)db_setCollectionToAlbumCollection:(id)arg1;
- (void)db_showAlbumSwitcher;
- (CDUnknownBlockType)db_didTapAlbumSwitcherBlock;
- (void)db_didUpdateSelectionAssetSet;
- (void)db_updateRightNavButtonActionEnabledWithSelectionCount:(unsigned long long)arg1;
- (void)db_registerSupplementaryViewClasses;
@property(readonly, nonatomic) NSSet *selectedAssetLocalIdentifiers;
- (void)useNavigationTitleAsBackButtonText:(_Bool)arg1;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (void)db_updateRightNavItems;
- (void)setRightNavButtonActionTitle:(id)arg1 style:(long long)arg2 withActionBlock:(CDUnknownBlockType)arg3;
- (void)setCancelActionTitle:(id)arg1 withActionBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithModel:(id)arg1 layout:(id)arg2 bindingController:(id)arg3;
- (id)initWithCollectionsModel:(id)arg1 currentAlbumModel:(id)arg2 selectedAssetSet:(id)arg3 imageManager:(id)arg4 photosOnly:(_Bool)arg5 albumListModel:(id)arg6 presenter:(id)arg7;

@end

