//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "WAContactTableViewCellDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASearchResultsControllerDelegate-Protocol.h"

@class NSArray, NSString, UIFont, WAContactsSection, WAMutableDictionary, WANoResultsView, WASearchResultsController, WATableSection;
@protocol WASinglePersonPickerDelegate;

@interface WASinglePersonPicker : WATableViewController <WASearchControllerDelegate, WASearchResultsControllerDelegate, WAContactTableViewCellDelegate, WAParticipantPickerViewControllerDelegate, MFMessageComposeViewControllerDelegate>
{
    WATableSection *_sectionTopActions;
    WATableSection *_sectionBottomActions;
    WAContactsSection *_sectionFrequentlyContacted;
    WATableSection *_sectionSearchResultsActions;
    _Bool _needsRefreshOnContactsSync;
    NSString *_disabledContactStatusText;
    NSString *_blockedContactStatusText;
    UIFont *_singleLetterSectionTitleFont;
    UIFont *_longSectionTitleFont;
    double _sectionHeaderHeight;
    WAMutableDictionary *_contactsForChatSearchResults;
    double _keyboardHeight;
    WANoResultsView *_noResultsView;
    id <WASinglePersonPickerDelegate> _delegate;
    unsigned long long _pickerMode;
    WASearchResultsController *_searchResultsController;
    NSArray *_contactsSections;
    unsigned long long _totalCount;
}

+ (id)contactFromChatSession:(id)arg1;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *contactsSections; // @synthesize contactsSections=_contactsSections;
@property(retain, nonatomic) WASearchResultsController *searchResultsController; // @synthesize searchResultsController=_searchResultsController;
@property(nonatomic) unsigned long long pickerMode; // @synthesize pickerMode=_pickerMode;
@property(nonatomic) __weak id <WASinglePersonPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPickerDidAskToStartCall:(id)arg1 contacts:(id)arg2 videoEnabled:(_Bool)arg3;
- (_Bool)searchResultsControllerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)searchResultsControllerDidChangeContent:(id)arg1;
- (void)searchResultsController:(id)arg1 didDeleteSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertSections:(id)arg2;
- (void)searchResultsController:(id)arg1 didUpdateRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didDeleteRowsAtIndexPaths:(id)arg2;
- (void)searchResultsController:(id)arg1 didInsertRowsAtIndexPaths:(id)arg2;
- (void)searchResultsControllerWillChangeContent:(id)arg1;
- (_Bool)searchResultsControllerShouldReloadData:(id)arg1;
- (void)searchResultsControllerDidReloadData:(id)arg1;
- (_Bool)searchResultsController:(id)arg1 shouldLoadAsynchronously:(unsigned long long)arg2;
- (_Bool)searchResultsAreEmpty;
- (id)contactForSearchResultAtIndexPath:(id)arg1;
- (void)showNoResultsView:(_Bool)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)noResultsBackgroundView;
- (_Bool)showMissingContactsUI;
- (void)showMissingContactsPrompt;
- (void)openMissingContactsFAQArticle;
- (id)searchController:(id)arg1 viewControllerForPreviewingContext:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)searchController:(id)arg1 previewingContext:(id)arg2 commitViewController:(id)arg3;
- (_Bool)searchControllerShouldRegisterFor3DTouch:(id)arg1;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)actionsSectionForSection:(long long)arg1 inTableView:(id)arg2;
- (_Bool)tableView:(id)arg1 isActionsSection:(long long)arg2;
- (double)sectionHeaderHeight;
- (id)longSectionTitleFont;
- (id)singleLetterSectionTitleFont;
- (void)tableView:(id)arg1 didSelectContactCellAtIndexPath:(id)arg2;
- (id)cellForContactAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (void)initiateCallFromContactTableViewCell:(id)arg1 withVideo:(_Bool)arg2;
- (void)voiceCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)videoCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)configureTableViewRowHeight;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)internalTableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)showUnblockPromptForContact:(id)arg1 atIndexPath:(id)arg2 inTableView:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)reloadSupplementaryTableRows;
- (void)unblockContact:(id)arg1;
- (void)syncManagerDidFinishSync:(id)arg1;
- (void)reloadContacts;
- (id)contactForTableIndexPath:(id)arg1;
- (id)contactWithJID:(id)arg1;
- (id)contactsSectionForTableSection:(unsigned long long)arg1;
- (id)contactForIndexPath:(id)arg1 inTableView:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

