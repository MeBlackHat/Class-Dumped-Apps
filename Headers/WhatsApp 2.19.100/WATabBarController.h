//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "UITabBarControllerDelegate-Protocol.h"
#import "WARestorable-Protocol.h"
#import "WASendURLAppSwitcherViewControllerDelegate-Protocol.h"
#import "WATabBarDelegate-Protocol.h"

@class NSString, UITabBarItem, UIViewController, WACallHistoryViewController, WACallLogger, WAChatListViewController, WAChatStorage, WACloudBackupManager, WASettingsViewController, WAStatusListViewController, WAStatusSessionManager, WATabBarCameraButton;

@interface WATabBarController : UITabBarController <WATabBarDelegate, WASendURLAppSwitcherViewControllerDelegate, UITabBarControllerDelegate, WARestorable>
{
    _Bool _didAppearAlready;
    UIViewController *_dummyCameraViewController;
    UITabBarItem *_callHistoryTabBarItem;
    WATabBarCameraButton *_cameraButton;
    long long _twoFactorDeferCounter;
    WACallLogger *_callLogger;
    WAChatStorage *_chatStorage;
    WACloudBackupManager *_cloudBackupManager;
    WAStatusSessionManager *_statusSessionManager;
    WAStatusListViewController *_statusListViewController;
    WACallHistoryViewController *_callHistoryViewController;
    WAChatListViewController *_chatListViewController;
    WASettingsViewController *_settingsViewController;
}

+ (id)tabBarControllerWithCallLogger:(id)arg1 chatStorage:(id)arg2 cloudBackupManager:(id)arg3 statusSessionManager:(id)arg4;
@property(readonly, nonatomic) WASettingsViewController *settingsViewController; // @synthesize settingsViewController=_settingsViewController;
@property(readonly, nonatomic) WAChatListViewController *chatListViewController; // @synthesize chatListViewController=_chatListViewController;
@property(readonly, nonatomic) WACallHistoryViewController *callHistoryViewController; // @synthesize callHistoryViewController=_callHistoryViewController;
@property(readonly, nonatomic) WAStatusListViewController *statusListViewController; // @synthesize statusListViewController=_statusListViewController;
@property(readonly, nonatomic) WAStatusSessionManager *statusSessionManager; // @synthesize statusSessionManager=_statusSessionManager;
@property(readonly, nonatomic) WACloudBackupManager *cloudBackupManager; // @synthesize cloudBackupManager=_cloudBackupManager;
@property(readonly, nonatomic) WAChatStorage *chatStorage; // @synthesize chatStorage=_chatStorage;
@property(readonly, nonatomic) WACallLogger *callLogger; // @synthesize callLogger=_callLogger;
- (void).cxx_destruct;
- (void)showTwoFactorNagControllerIfNeeded;
- (void)encodeWARestorableStateWithCoder:(id)arg1;
- (void)didRestoreWithCoder:(id)arg1 children:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)sendURLAppSwitcherViewController:(id)arg1 didSelectResponse:(long long)arg2 sendURL:(id)arg3;
- (void)cameraButtonTapped:(id)arg1;
- (void)callDidBecomeVoice:(id)arg1;
- (void)callDidBecomeVideo:(id)arg1;
- (void)callDidEnd:(id)arg1;
- (void)callDidStart:(id)arg1;
- (void)updateCameraTabItemVoiceOverStatus;
- (void)updateMissedCallCount;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)notifyStatusWillSwitchToViewController:(id)arg1;
- (void)updateStatusTabBadge;
- (void)chatStorageDidUpdateStatusBadge:(id)arg1;
- (void)processAddContact:(id)arg1;
- (void)deferTwoFactorNag;
- (void)markTopMostChatSessionActive;
- (void)processOpenPaymentTransactionDetails:(id)arg1;
- (void)processExternalPaymentConfiguration:(id)arg1;
- (void)processSendURLInChatListViewController:(id)arg1;
- (void)processSendURL:(id)arg1;
- (void)forwardFileAtURL:(id)arg1;
- (void)selectViewController:(id)arg1 popToRoot:(_Bool)arg2 animated:(_Bool)arg3 dismissPresentedVC:(_Bool)arg4 actionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)processNotificationSettingsApplicationShortcut;
- (void)openStorageUsage;
- (void)showCallHistoryTab;
- (void)processGDPRReportScreenApplicationShortcut;
- (void)processWebClientSettingsApplicationShortcut;
- (void)processStarredMessagesApplicationShortcut;
- (void)processCameraApplicationShortcut;
- (void)processNewChatApplicationShortcut;
- (void)processSearchApplicationShortcut;
- (void)performApplicationShortcutFor:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)setTabBarVisible:(_Bool)arg1 animationDuration:(double)arg2;
- (void)tabBarDidLayout:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)promptForPermissionsAndTwoFactorNag;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (_Bool)shouldAutorotate;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateSettingsCount:(id)arg1;
- (void)mediaRestoreStatusUpdated:(id)arg1;
- (void)backupErrorBadgeUpdated:(id)arg1;
- (void)dealloc;
- (void)prepareAfterLoadingFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

