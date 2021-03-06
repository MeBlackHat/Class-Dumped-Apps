//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <InstagramAppCoreFramework/IGGridItemPositionProvider-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol IGCollectionViewLayoutDataSource;

@interface IGGridCollectionViewLayout : UICollectionViewLayout <IGGridItemPositionProvider>
{
    _Bool _disableMaximumContentLayoutWidth;
    id <IGCollectionViewLayoutDataSource> _dataSource;
    NSMutableDictionary *_cachedItemFrames;
    NSMutableDictionary *_cachedHeaderViewFrames;
    NSMutableDictionary *_cachedItemPositions;
    struct IGGridLayoutConfiguration _layoutConfig;
}

@property(readonly, nonatomic) NSMutableDictionary *cachedItemPositions; // @synthesize cachedItemPositions=_cachedItemPositions;
@property(readonly, nonatomic) NSMutableDictionary *cachedHeaderViewFrames; // @synthesize cachedHeaderViewFrames=_cachedHeaderViewFrames;
@property(readonly, nonatomic) NSMutableDictionary *cachedItemFrames; // @synthesize cachedItemFrames=_cachedItemFrames;
@property(nonatomic) __weak id <IGCollectionViewLayoutDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool disableMaximumContentLayoutWidth; // @synthesize disableMaximumContentLayoutWidth=_disableMaximumContentLayoutWidth;
@property(readonly, nonatomic) struct IGGridLayoutConfiguration layoutConfig; // @synthesize layoutConfig=_layoutConfig;
- (void).cxx_destruct;
- (double)_gridMaximumContentLayoutWidth:(double)arg1;
- (struct CGPoint)_firstCellPoint;
- (double)_horizontalPadding;
- (id)_previousCellIndexPathForIndexPath:(id)arg1;
- (id)_allPreviousIndexPathsTillIndexPath:(id)arg1;
- (struct CGRect)_cellFrameForItemAtIndexPath:(id)arg1;
- (struct CGSize)_headerViewSizeForItemAtIndexPath:(id)arg1;
- (struct CGRect)_headerViewFrameForItemAtIndexPath:(id)arg1;
- (struct CGSize)_cellSizeForItemAtIndexPath:(id)arg1;
- (id)_lastCellIndexPath;
- (long long)_totalItemCountInSection:(long long)arg1;
- (long long)_totalItemCount;
- (long long)_totalSectionCount;
- (void)_configureItemLayoutAttributes:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)_clearLayoutCache;
- (CDStruct_1d3354f4)positionForItemAtIndexPath:(id)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)initWithDataSource:(id)arg1 layoutConfiguration:(struct IGGridLayoutConfiguration)arg2;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

