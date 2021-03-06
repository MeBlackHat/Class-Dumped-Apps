//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBHeroHeaderAwareCollectionViewController.h"

#import "DBCollectionViewTableLayoutDelegate-Protocol.h"

@class DBCollectionViewContentViewSizeProvider, NSString;

@interface DBCollectionViewTableLayoutViewController : DBHeroHeaderAwareCollectionViewController <DBCollectionViewTableLayoutDelegate>
{
    DBCollectionViewContentViewSizeProvider *_sizeProvider;
    _Bool _showsHeadersForEmptySections;
    _Bool _showsFootersForEmptySections;
    double _defaultSeparatorInset;
    struct UIEdgeInsets _defaultSectionInsets;
}

@property(nonatomic) _Bool showsFootersForEmptySections; // @synthesize showsFootersForEmptySections=_showsFootersForEmptySections;
@property(nonatomic) _Bool showsHeadersForEmptySections; // @synthesize showsHeadersForEmptySections=_showsHeadersForEmptySections;
@property(nonatomic) struct UIEdgeInsets defaultSectionInsets; // @synthesize defaultSectionInsets=_defaultSectionInsets;
@property(nonatomic) double defaultSeparatorInset; // @synthesize defaultSeparatorInset=_defaultSeparatorInset;
- (void).cxx_destruct;
- (struct CGSize)preferredContentViewSizeForModelObject:(id)arg1 minimumHeight:(double)arg2;
- (struct CGSize)db_preferredContentViewSizeForModelObject:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 separatorInsetForSupplementaryViewOfKind:(id)arg3 atIndexPath:(id)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 separatorInsetForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForEmptyStateInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForFooterInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 sectionInsetsForSection:(long long)arg3;
- (void)setModel:(id)arg1;
- (double)collectionView:(id)arg1 heightForRowAt:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)db_registerBindingsForSupplementaryViews;
- (id)initWithModel:(id)arg1 bindingController:(id)arg2;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

