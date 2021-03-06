//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OGLItemListViewController.h"

#import "OGLItemListDataSource-Protocol.h"
#import "OGLItemListDelegate-Protocol.h"

@class DYNRootSideListControllerOptions, NSArray, NSString;
@protocol DYNRootViewControllerProtocol;

@interface DYNRootSideListController : OGLItemListViewController <OGLItemListDelegate, OGLItemListDataSource>
{
    DYNRootSideListControllerOptions *_options;
    NSArray *_sideDrawerItems;
    id <DYNRootViewControllerProtocol> _rootViewController;
}

+ (id)dynamiteTheme;
- (void).cxx_destruct;
@property(nonatomic) __weak id <DYNRootViewControllerProtocol> rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)itemListViewController:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)itemListViewController:(id)arg1 itemAtIndexPath:(id)arg2;
- (long long)itemListViewController:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfItemSectionsInItemList:(id)arg1;
- (id)listItemAtIndexPath:(id)arg1;
- (id)itemsAtSection:(unsigned long long)arg1;
- (void)populateSideDrawerItems;
- (void)viewDidLoad;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

