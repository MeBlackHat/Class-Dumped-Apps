//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IGListSectionController.h"

#import "IGListDisplayDelegate-Protocol.h"

@class NSString, UICollectionViewCell;

@interface IGListBindingSingleSectionController : IGListSectionController <IGListDisplayDelegate>
{
    id _item;
    UICollectionViewCell *_displayingCell;
    _Bool _enabledCellConfigurationDuringUpdate;
}

@property(nonatomic) _Bool enabledCellConfigurationDuringUpdate; // @synthesize enabledCellConfigurationDuringUpdate=_enabledCellConfigurationDuringUpdate;
- (void).cxx_destruct;
- (void)didUnhighlightItemAtIndex:(long long)arg1;
- (void)didHighlightItemAtIndex:(long long)arg1;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (struct CGSize)sizeForViewModel:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (void)didUnhighlightItemWithCell:(id)arg1;
- (void)didHighlightItemWithCell:(id)arg1;
- (void)didDeselectItemWithCell:(id)arg1;
- (void)didSelectItemWithCell:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

