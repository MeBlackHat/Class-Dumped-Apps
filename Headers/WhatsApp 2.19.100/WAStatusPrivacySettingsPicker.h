//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSString, WATableRow;

@interface WAStatusPrivacySettingsPicker : WAStaticTableViewController <WAParticipantPickerViewControllerDelegate>
{
    WATableRow *_myContactsRow;
    WATableRow *_blacklistRow;
    WATableRow *_whitelistRow;
    _Bool _hideHeaderText;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool hideHeaderText; // @synthesize hideHeaderText=_hideHeaderText;
- (void).cxx_destruct;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)selectPrivacySetting:(long long)arg1 jids:(id)arg2;
- (void)updateCheckMarks;
- (void)setUpTableView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

