//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "UserInteractionRequiredActionUpdateDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol MenuViewControllerDelegate;

@interface MenuViewController : UITableViewController <UserInteractionRequiredActionUpdateDelegate>
{
    _Bool _shouldDisplayCheckForNotifications;
    _Bool _shouldDisplayShowHideCodes;
    NSMutableArray *_menuSelectionArray;
    NSArray *_userInteractionRequiredActionList;
    id <MenuViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property _Bool shouldDisplayShowHideCodes; // @synthesize shouldDisplayShowHideCodes=_shouldDisplayShowHideCodes;
@property _Bool shouldDisplayCheckForNotifications; // @synthesize shouldDisplayCheckForNotifications=_shouldDisplayCheckForNotifications;
@property __weak id <MenuViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)getUpdatedList:(id)arg1;
- (void)clearSelection;
- (void)refreshOptions;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)getCellWithIconFilePath:(id)arg1 labelText:(id)arg2;
- (id)getMainMenuCellForRow:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)swipeToClose:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

