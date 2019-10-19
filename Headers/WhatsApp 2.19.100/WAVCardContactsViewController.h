//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"

@class NSArray, NSSet, NSString, UIFont, UITableView, WAContactsSearchController, WAUserJID;
@protocol WAVCardContactsViewControllerDelegate;

@interface WAVCardContactsViewController : WAViewController <UISearchBarDelegate, WASearchControllerDelegate, UITableViewDelegate>
{
    WAContactsSearchController *_contactsSearchController;
    UITableView *_tableView;
    _Bool _doNotAdjustSearchBarPosition;
    NSArray *_contactsSections;
    unsigned long long _totalCount;
    NSArray *_otherContacts;
    NSArray *_highlightedContacts;
    NSSet *_highlightedTerms;
    _Bool _resetContentOffsetInDidLayoutSubviews;
    double _sectionHeaderHeight;
    UIFont *_sectionTitleFont;
    id <WAVCardContactsViewControllerDelegate> _delegate;
    NSArray *_allContacts;
    NSArray *_filteredContacts;
    WAUserJID *_highlightedJID;
}

@property(readonly, nonatomic) WAUserJID *highlightedJID; // @synthesize highlightedJID=_highlightedJID;
@property(copy, nonatomic) NSArray *filteredContacts; // @synthesize filteredContacts=_filteredContacts;
@property(readonly, copy, nonatomic) NSArray *allContacts; // @synthesize allContacts=_allContacts;
@property(nonatomic) __weak id <WAVCardContactsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)wa_previewActionItems;
- (id)contactForSearchResultAtIndexPath:(id)arg1;
- (id)searchResultsTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)sectionHeaderHeight;
- (id)sectionTitleFont;
- (void)wa_fontSizeDidChange;
- (void)configureTableViewRowHeight;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)updateTableSections;
- (id)contactForTableIndexPath:(id)arg1;
- (id)contactSectionForTableSection:(unsigned long long)arg1;
- (_Bool)showHighlightedContactsSection;
- (_Bool)showTableViewSectionIndex;
- (id)initWithContacts:(id)arg1 highlightedJID:(id)arg2 highlightedTerms:(id)arg3;
- (id)searchController:(id)arg1 viewControllerForPreviewingContext:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)searchController:(id)arg1 previewingContext:(id)arg2 commitViewController:(id)arg3;
- (_Bool)searchControllerShouldRegisterFor3DTouch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)fixSearchBarPlacementWithAnimationDuration:(double)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (void)reallyAddAllContacts;
- (void)addAllContacts;
- (id)headerViewDividerAtY:(double)arg1;
- (void)createHeaderViewAndSearchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

