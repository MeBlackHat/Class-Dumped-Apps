//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WASavedContentListViewController.h"

#import "WAWebLinkTableViewCellDelegate-Protocol.h"

@class NSString;

@interface WAWebLinksBrowserViewController : WASavedContentListViewController <WAWebLinkTableViewCellDelegate>
{
}

+ (id)localizedStringForItemCount:(long long)arg1;
+ (id)tableViewCellNibName;
+ (double)tableViewCellPreferredHeight;
- (struct CGRect)sourceRectForChatPreviewFromTableViewCell:(id)arg1 inTableView:(id)arg2;
- (id)itemPreviewViewControllerForItem:(id)arg1 location:(struct CGPoint)arg2 inTableViewCell:(id)arg3 tableView:(id)arg4 returningSourceRect:(struct CGRect *)arg5;
- (void)webLinkTableViewCell:(id)arg1 didRequestShowChatForItem:(id)arg2;
- (void)webLinkTableViewCell:(id)arg1 didRequestShowWebPageForItem:(id)arg2;
- (id)noItemsViewImage;
- (id)noItemsViewSubheading;
- (id)noItemsViewHeading;
- (void)checkAndOpenURL:(id)arg1 forMessage:(id)arg2;
- (void)showWebPageForItem:(id)arg1;
- (void)presentItemOnSelection:(id)arg1;
- (void)deselectAllRowsForMessage:(id)arg1;
- (void)selectAllRowsForMessage:(id)arg1;
- (id)itemsInMessage:(id)arg1;
- (id)messageForItem:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2 searchTerm:(id)arg3;
- (void)prepareTableViewCellForFirstUse:(id)arg1;
- (void)configureTableView:(id)arg1;
- (id)newSearchResultsController;
- (id)newFetchedResultsController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

