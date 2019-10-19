//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "WAContactTableViewCellDelegate-Protocol.h"
#import "WASearchControllerDelegate-Protocol.h"
#import "WASinglePersonPickerDelegate-Protocol.h"

@class NSArray, NSCharacterSet, NSString, UIBarButtonItem, UISegmentedControl, UIView, WACallLogger, WAContactsSearchController;

@interface WACallHistoryViewController : WATableViewController <WASinglePersonPickerDelegate, WASearchControllerDelegate, WAContactTableViewCellDelegate>
{
    WACallLogger *_callLogger;
    UISegmentedControl *_callFilterSegmentedControl;
    _Bool _showMissedCallsOnly;
    UIBarButtonItem *_clearAllButton;
    UIBarButtonItem *_startCallButton;
    _Bool _editingSingleRow;
    NSArray *_searchResults;
    NSArray *_otherContacts;
    NSCharacterSet *_symbolsInPhoneNumberSet;
    NSCharacterSet *_nonNumbersSet;
    UIView *_emptyListView;
    WAContactsSearchController *_contactsSearchController;
}

+ (_Bool)wa_needsCustomTableViewBehaviors;
+ (id)tabBarItem;
- (void).cxx_destruct;
- (_Bool)singlePersonPickerShouldSearchPushNamesForChatsSection:(id)arg1;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2 frequentlyContacted:(_Bool)arg3;
- (void)singlePersonPicker:(id)arg1 didAskToStartVoiceCallWithContact:(id)arg2;
- (void)singlePersonPicker:(id)arg1 didAskToStartVideoCallWithContact:(id)arg2;
- (void)singlePersonPicker:(id)arg1 didAskToStartCallWithContacts:(id)arg2 videoEnabled:(_Bool)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)showContactInfoScreenForAggregateCallEvent:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)handleCallEvent:(id)arg1;
- (void)showGroupCallParticipantsPicker:(id)arg1;
- (id)contactFromJID:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)videoCallButtonTappedInContactTableViewCell:(id)arg1;
- (void)voiceCallButtonTappedInContactTableViewCell:(id)arg1;
- (id)searchController:(id)arg1 viewControllerForPreviewingContext:(id)arg2 atLocation:(struct CGPoint)arg3;
- (void)searchController:(id)arg1 previewingContext:(id)arg2 commitViewController:(id)arg3;
- (_Bool)searchControllerShouldRegisterFor3DTouch:(id)arg1;
- (void)searchController:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)searchController:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)searchController:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)searchController:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)searchController:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 updateResultsForSearchString:(id)arg2;
- (void)searchControllerWillEndSearch:(id)arg1;
- (void)searchControllerWillBeginSearch:(id)arg1;
- (void)searchControllerDidEndSearch:(id)arg1;
- (void)searchControllerDidBeginSearch:(id)arg1;
- (void)searchController:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)searchController:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (_Bool)searchController:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)searchController:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)searchController:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)searchController:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)searchController:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)searchController:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)searchController:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInSearchController:(id)arg1;
- (_Bool)callListIsEmpty;
- (void)applicationDidDismissCallScreen:(id)arg1;
- (id)aggregateCallEventAtIndexPath:(id)arg1;
- (void)callFilterDidChange:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)reload;
- (void)callViewWillAppear:(id)arg1;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (void)callLoggerDidAddEvent:(id)arg1;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)startNewCall:(id)arg1;
- (void)clearAll:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)editButtonTapped:(id)arg1;
- (void)showEmptyListView:(_Bool)arg1;
- (void)reloadLeftBarButtonItem;
- (void)wa_applicationDidEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)wa_hideTableViewHeader;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithCallLogger:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

