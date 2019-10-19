//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WATableViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAParticipantPickerViewControllerDelegate-Protocol.h"
#import "_WAListRecipientsControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableViewCell, UITapGestureRecognizer, UITextField, WAChatSession, WAEncStatusTableViewCell, _WAListRecipientsController;

@interface WAListInfoViewController : WATableViewController <_WAListRecipientsControllerDelegate, WAParticipantPickerViewControllerDelegate, UIGestureRecognizerDelegate>
{
    _WAListRecipientsController *_recipientsController;
    UITableViewCell *_changeRecipientCell;
    UITableViewCell *_editNameCell;
    UITextField *_listNameTextField;
    NSMutableArray *_insertedAndUpdatedContacts;
    _Bool _animateListChanges;
    UITapGestureRecognizer *_tapGesture;
    WAEncStatusTableViewCell *_encStatusCell;
    WAChatSession *_list;
}

@property(retain, nonatomic) WAChatSession *list; // @synthesize list=_list;
- (void).cxx_destruct;
- (void)wa_fontSizeDidChange;
- (void)loadStatusMessagesForContacts:(id)arg1;
- (void)recipientsControllerDidChangeContent:(id)arg1;
- (void)recipientsController:(id)arg1 didChangeContact:(id)arg2 atIndex:(long long)arg3 forChangeType:(unsigned long long)arg4 newIndex:(long long)arg5;
- (void)recipientsControllerWillChangeContent:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)updateRecipientsWithContacts:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)changeRecipients;
- (void)nameDirectoryDidInvalidateSomeNames:(id)arg1;
- (void)showContactInfoForContact:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)checkListEncryptionState;
- (void)updateInterface;
- (void)tableViewTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)configureTableViewRowHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

