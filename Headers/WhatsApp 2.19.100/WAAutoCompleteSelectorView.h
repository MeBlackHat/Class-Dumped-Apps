//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSString, WAMentionsTableView;
@protocol WAAutoCompleteSelectorViewDelegate;

@interface WAAutoCompleteSelectorView : UIView <UITableViewDelegate>
{
    NSString *_searchTerm;
    struct _NSRange _textRange;
    unsigned long long _itemCount;
    unsigned long long _cachedItemCount;
    UIView *_maskView;
    UIView *_bottomView;
    _Bool _clearingTable;
    double _currentHeightLimit;
    double _previousContentOffset;
    _Bool _needsToUseCachedItems;
    id <WAAutoCompleteSelectorViewDelegate> _autoCompleteDelegate;
    WAMentionsTableView *_tableView;
}

@property(readonly, nonatomic) _Bool needsToUseCachedItems; // @synthesize needsToUseCachedItems=_needsToUseCachedItems;
@property(retain, nonatomic) WAMentionsTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WAAutoCompleteSelectorViewDelegate> autoCompleteDelegate; // @synthesize autoCompleteDelegate=_autoCompleteDelegate;
- (void).cxx_destruct;
- (id)bottomView;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectorViewWillBecomeHidden:(_Bool)arg1;
- (void)setHidden:(_Bool)arg1;
- (unsigned long long)totalNumberOfUncachedRows;
- (double)calculateHeightForRowAtIndexPath:(id)arg1;
- (double)autolayoutCalculatedHeightForNumberOfRows:(double)arg1;
- (double)heightForNumberOfRows:(double)arg1;
- (double)recommendedVisibleHeight;
- (double)tableViewHeightNeeded;
- (void)clearCachedItems;
- (void)updateCachedItems;
- (void)updateItemsMatchingSearchTerm:(id)arg1 forTextRange:(struct _NSRange)arg2;
- (void)updateFrame:(struct CGRect)arg1 animationCurve:(long long)arg2 animationDuration:(double)arg3;
- (void)reloadData;
- (_Bool)updateSearchTerm:(id)arg1 forTextRange:(struct _NSRange)arg2;
- (void)setVisibleHeightLimit:(double)arg1 animationOptions:(unsigned long long)arg2 animationDuration:(double)arg3;
- (double)preferredRowHeight;
- (double)preferredSectionHeaderHeight;
- (void)updateMask;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 roundCorners:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

