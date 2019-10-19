//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAGroupParticipantPickerViewControllerDelegate-Protocol.h"

@class NSString, WAChatSession, WAGroupJID, WAGroupMember, WAGroupParticipantsController, WATableRow;

@interface WAGroupSettingsTableViewController : WAStaticTableViewController <WAGroupParticipantPickerViewControllerDelegate>
{
    WAChatSession *_chatSession;
    WAGroupParticipantsController *_participantsController;
    WATableRow *_rowGroupAnnouncementOnly;
    WATableRow *_rowGroupEditingPermission;
    WATableRow *_rowEphemeralityStatus;
    WATableRow *_rowGroupFrequentlyForwarded;
    WATableRow *_rowManageAdmins;
    WAGroupMember *_myGroupMember;
}

- (void).cxx_destruct;
- (void)chatStorageDidUpdateChatSessions:(id)arg1;
- (void)setUpTableView;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setUpdatedGroupAdmins:(id)arg1;
- (void)participantPickerDidCancel:(id)arg1;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)showAdminManagementScreen;
- (void)promptToChangeGroupFrequentlyForwarded;
- (void)promptToChangeEphemeralitySettingSettings;
- (void)requestGroupFrequentlyForwardedChange:(_Bool)arg1;
- (void)updateGroupFrequentlyForwardedCell;
- (void)promptToChangeGroupEditabilitySetting;
- (void)requestGroupLockedStateChange:(_Bool)arg1;
- (void)updateGroupEditabilityCell;
- (void)promptToChangeGroupAnnouncementOnlySetting;
- (void)requestGroupAnnouncementOnlyStateChange:(_Bool)arg1;
- (void)updateGroupAnnouncementOnlyCell;
- (void)showErrorMessageForAdminSettingsChangeError:(id)arg1;
- (id)groupAdminSettingTitleForAdminOnlyBool:(_Bool)arg1 shortVersion:(_Bool)arg2;
- (void)showAlertMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isFrequentlyForwardedRestricted) _Bool frequentlyForwardedRestricted;
@property(readonly, nonatomic, getter=isAnnouncementOnly) _Bool announcementOnly;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
@property(readonly, nonatomic) _Bool canChangeSettings;
- (void)dismissIfNecessary;
- (void)updateCells;
@property(readonly, nonatomic) WAGroupJID *chatSessionJID;
- (void)dealloc;
- (id)initWithChatSession:(id)arg1 participantsController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

