//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSourcePrefetching-Protocol.h"

@class A9VSFezProductManager, A9VSFezRoomManager, NSMutableSet, NSString;
@protocol A9VSFezRecentlyViewedProductsCollectionViewControllerDelegate;

@interface A9VSFezRecentlyViewedProductsCollectionViewController : UICollectionViewController <UICollectionViewDataSourcePrefetching>
{
    _Bool _didLogRecentlyViewedFirstScrolled;
    id <A9VSFezRecentlyViewedProductsCollectionViewControllerDelegate> _delegate;
    A9VSFezProductManager *_productManager;
    A9VSFezRoomManager *_roomManager;
    NSMutableSet *_loadingProducts;
    NSString *_selectedRecentlyViewedASIN;
}

+ (double)height;
@property(nonatomic) _Bool didLogRecentlyViewedFirstScrolled; // @synthesize didLogRecentlyViewedFirstScrolled=_didLogRecentlyViewedFirstScrolled;
@property(retain, nonatomic) NSString *selectedRecentlyViewedASIN; // @synthesize selectedRecentlyViewedASIN=_selectedRecentlyViewedASIN;
@property(readonly, nonatomic) NSMutableSet *loadingProducts; // @synthesize loadingProducts=_loadingProducts;
@property(readonly, nonatomic) __weak A9VSFezRoomManager *roomManager; // @synthesize roomManager=_roomManager;
@property(readonly, nonatomic) __weak A9VSFezProductManager *productManager; // @synthesize productManager=_productManager;
@property(nonatomic) __weak id <A9VSFezRecentlyViewedProductsCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 cancelPrefetchingForItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 prefetchItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)cancelLoadForRecentlyViewedProductWithASIN:(id)arg1;
- (void)loadRecentlyViewedProductForASIN:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadRecentlyViewedProductForASIN:(id)arg1;
- (void)reloadRecentlyViewedASINs;
- (void)setUpInterface;
- (void)viewDidLoad;
- (void)setUpCollectionView;
- (id)initWithProductManager:(id)arg1 roomManager:(id)arg2;
@property(readonly, nonatomic) unsigned long long recentlyViewedProductsCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

