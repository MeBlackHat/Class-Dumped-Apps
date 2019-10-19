//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "WAContactDetailsViewControllerDelegate-Protocol.h"
#import "WAContactQRCodeScannerViewControllerDelegate-Protocol.h"
#import "WAContactQRViewControllerDelegate-Protocol.h"
#import "WAMultiContactPickerDelegate-Protocol.h"
#import "WANewContactViewControllerDelegate-Protocol.h"

@class NSString, WABadgedTableViewCell, WACircularImageButton, WANotificationsViewController, WASettingsProfileTableViewCell, WATableRow, WATableSection;

@interface WASettingsViewController : WAStaticTableViewController <UINavigationControllerDelegate, MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate, WAMultiContactPickerDelegate, WAContactQRCodeScannerViewControllerDelegate, WAContactQRViewControllerDelegate, WAContactDetailsViewControllerDelegate, WANewContactViewControllerDelegate>
{
    WANotificationsViewController *_notificationsController;
    WABadgedTableViewCell *_chatSettingsCell;
    WASettingsProfileTableViewCell *_profileCell;
    WATableSection *_sectionSettings;
    WATableRow *_notificationsRow;
    WATableRow *_paymentsRow;
    WATableRow *_starredMessagesRow;
    WATableRow *_webClientRow;
    CDUnknownBlockType _completionHandlerPresentation;
    _Bool _firstLayoutCompletion;
    WACircularImageButton *_qrCodeButton;
}

+ (_Bool)usesManagedTableViewHeaderFooter;
+ (void)sendSMSInvitationTo:(id)arg1 fromViewController:(id)arg2;
@property(retain, nonatomic) WACircularImageButton *qrCodeButton; // @synthesize qrCodeButton=_qrCodeButton;
- (void).cxx_destruct;
- (void)showNotificationSettings;
- (void)showGDPRReportScreen;
- (void)scanQRCode;
- (void)showWebClientSettingsAnimated:(_Bool)arg1;
- (void)contactDetailsViewControllerDidDeleteContact:(id)arg1;
- (void)contactDetailsViewController:(id)arg1 startCallWithUserJID:(id)arg2 withVideo:(_Bool)arg3;
- (void)contactDetailsViewController:(id)arg1 startChatWithContact:(id)arg2;
- (void)doneAction:(id)arg1;
- (void)showContactDetailsViewControllerForContact:(id)arg1 newContact:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newContactController:(id)arg1 didRequestContactViewControllerForJID:(id)arg2;
- (void)newContactController:(id)arg1 didSaveContact:(id)arg2;
- (void)contactQRViewControllerDidRequestQRScanner:(id)arg1;
- (void)contactQRCodeScannerViewController:(id)arg1 didRequestSaveContact:(id)arg2;
- (void)contactQRCodeScannerViewControllerDidRequestShareCode:(id)arg1;
- (void)openPaymentTransactionDetails:(id)arg1;
- (id)openPaymentsScreenWithExternalPaymentConfiguration:(id)arg1 animated:(_Bool)arg2;
- (void)processExternalPaymentConfiguration:(id)arg1;
- (void)paymentsAvailabilityUpdated:(id)arg1;
- (id)addPaymentsRow;
- (void)chatManagerDidUpdateStatus:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)multiContactPickerDidCancel:(id)arg1;
- (void)multiContactPicker:(id)arg1 didSelectRecipients:(id)arg2;
- (void)addAdditionalSectionBelowProfile;
- (id)chatsSettingsIconName;
- (id)newAutoLayoutAwareTableViewFooter;
- (void)setUpTableView;
- (void)wa_fontSizeDidChange;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadWebClientRow;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)showQRViewController;
- (void)showDataUsage;
- (void)showStorageUsage;
- (void)showStarredMessagesAnimated:(_Bool)arg1;
- (void)notificationsActionAnimated:(_Bool)arg1;
- (void)chatSettingsAction;
- (void)openAccountScreenAnimated:(_Bool)arg1;
- (void)viewProfileAction;
- (void)handleInviteActionFromSourceView:(id)arg1;
- (void)aboutAction;
- (void)inviteUsingOtherMethodsFromSourceView:(id)arg1;
- (void)inviteViaSinaWeibo;
- (void)inviteViaFacebook;
- (void)inviteViaTwitter;
- (void)inviteViaEmail;
- (void)sendEmailInvitationTo:(id)arg1;
- (void)inviteViaSMS;
- (void)setupCompletionHandlerPresentationFor:(id)arg1;
- (void)addIcon:(id)arg1 toTableViewCell:(id)arg2;
- (void)reloadProfilePicture;
- (void)updateProfileInfo;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)updateChatSettingsBadge;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

