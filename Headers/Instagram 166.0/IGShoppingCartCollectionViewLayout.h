//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSDictionary;
@protocol IGCollectionViewLayoutDataSource, IGShoppingCartCollectionViewLayoutDelegate;

@interface IGShoppingCartCollectionViewLayout : UICollectionViewLayout
{
    NSDictionary *_layoutCache;
    double _layoutHeight;
    id <IGCollectionViewLayoutDataSource> _dataSource;
    id <IGShoppingCartCollectionViewLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShoppingCartCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <IGCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayout;

@end

