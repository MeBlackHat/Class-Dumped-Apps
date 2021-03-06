//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBContentView-Protocol.h"
#import "DBFileEntryListUpdateObserver-Protocol.h"
#import "DBFileListThumbnailProviderObserver-Protocol.h"

@class DBFileEntryListLayoutView, DBFileThumbnailGridCollectionView, DBObserverHandle, DBPathResizeLabel, DBRecentsMultiThumbContentViewObject, DBThemeTemplatesFileCell, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;
@protocol DBContentViewObject;

@interface DBRecentsMultiThumbContentView : UIView <DBFileEntryListUpdateObserver, DBFileListThumbnailProviderObserver, DBContentView>
{
    DBRecentsMultiThumbContentViewObject *_recentsContentViewObject;
    DBFileEntryListLayoutView *_layoutView;
    UIView *_selectedBackgroundView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    DBPathResizeLabel *_pathLabel;
    DBFileThumbnailGridCollectionView *_thumbnailGridView;
    NSLayoutConstraint *_thumbnailBottomConstraint;
    NSArray *_cachedAccessibilityElements;
    DBObserverHandle *_groupedEntryObserver;
    DBObserverHandle *_thumbnailProviderObserver;
    DBThemeTemplatesFileCell *_currentTemplates;
    _Bool _selected;
    _Bool _highlighted;
    id _viewerDidChangeObserver;
}

+ (struct CGSize)sizeForContentViewFittingSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)db_viewerDidChangeNotification:(id)arg1;
- (void)fileListThumbnailProvider:(id)arg1 didLoadImage:(id)arg2 forFileEntry:(id)arg3;
- (id)accessibilityElements;
- (_Bool)shouldGroupAccessibilityChildren;
- (_Bool)isAccessibilityElement;
- (void)db_updateForHighlightState;
- (void)db_updateVisibility;
- (void)db_resetViewForReuse;
- (void)db_startObservingThumbnailProvider:(id)arg1;
- (void)db_startObservingRecentsTimeGroupedEntry:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic, getter=isSelected) _Bool selected;
- (void)prepareForReuse;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
@property(readonly, nonatomic) id <DBContentViewObject> contentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (void)db_updateThumbnailGridView;
- (void)db_setupConstraints;
- (void)db_updateCurrentTemplates;
- (void)db_updateLayoutViewContents;
- (void)db_setupView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)groupedEntry:(id)arg1 didSetExpanded:(_Bool)arg2;
- (void)groupedEntry:(id)arg1 didRemoveEntry:(id)arg2 fromIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 willRemoveEntry:(id)arg2 fromIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 didAddEntry:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)groupedEntry:(id)arg1 willAddEntry:(id)arg2 toIndex:(unsigned long long)arg3;
- (void)groupedEntryDidEndUpdates:(id)arg1;
- (void)groupedEntryWillBeginUpdates:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPretendingToNotBeAnAccessibilityElement;
@property(readonly) Class superclass;

@end

