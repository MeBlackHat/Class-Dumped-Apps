//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "WASavedContentBrowserChildNoItemsViewDataSource-Protocol.h"

@class NSString, _WASavedContentBrowserChildNoItemsView;

@interface WASavedContentBrowserChildViewController : WAViewController <WASavedContentBrowserChildNoItemsViewDataSource>
{
    _WASavedContentBrowserChildNoItemsView *_noItemsView;
}

@property(retain, nonatomic) _WASavedContentBrowserChildNoItemsView *noItemsView; // @synthesize noItemsView=_noItemsView;
- (void).cxx_destruct;
- (id)noItemsViewImage;
- (id)noItemsViewSubheading;
- (id)noItemsViewHeading;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (id)toolbarItems;
- (id)navigationItem;
- (id)navigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

