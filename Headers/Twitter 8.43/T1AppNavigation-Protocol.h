//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1SignedOutNavigation-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, T1AppNavigationContext, T1BlockOrReportActionContext, T1ComposeSessionConfig, T1DockingController, T1NavigationMetadata, T1PeopleDiscoveryPivotParameters, T1SearchViewControllerOptions, T1ShowStatusNavigationContext, TFNAdaptiveWizardFlow, TFNPopoverSourceInfo, TFNTwitterAccount, TFNTwitterStatus, TFNViewController, TFSTwitterLocation, TFSTwitterPlace, TFSTwitterScribeContext, TFSTwitterUserReference, TNLParameterCollection, UIViewController;
@protocol T1PanelNavigationController, T1StatusViewModel, TFSTwitterCanonicalUser;

@protocol T1AppNavigation <T1SignedOutNavigation>
@property(readonly, nonatomic) NSArray *visiblePanelIDs;
@property(readonly, nonatomic) T1DockingController *dockingController;
@property(readonly, nonatomic) long long currentPanelID;
@property(readonly, nonatomic) UIViewController<T1PanelNavigationController> *currentPanelNavigationController;
@property(readonly, nonatomic) TFNTwitterAccount *account;
- (void)showFleetThreadForUserReference:(TFSTwitterUserReference *)arg1 fleetEntryID:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)showBookmarksWithSource:(long long)arg1 withCompletion:(void (^)(void))arg2;
- (void)showRuxWithCxt:(NSString *)arg1 refsrcTweet:(NSString *)arg2 statusID:(long long)arg3 panel:(long long)arg4 modal:(_Bool)arg5 source:(long long)arg6 scribeContext:(TFSTwitterScribeContext *)arg7 sourceNavigationMetadata:(T1NavigationMetadata *)arg8 completion:(void (^)(void))arg9;
- (void)showWhoToFollowSuggestedUsersViewControllerWithSource:(long long)arg1 userID:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showTweetPreviewsTimelineWithParameters:(TNLParameterCollection *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (TFNViewController *)conversationViewControllerForViewModel:(id <T1StatusViewModel>)arg1 statusID:(long long)arg2 account:(TFNTwitterAccount *)arg3 statusNavigationContext:(T1ShowStatusNavigationContext *)arg4 scribeContext:(TFSTwitterScribeContext *)arg5 sourceNavigationMetadata:(T1NavigationMetadata *)arg6 overrideNavigationMetadata:(T1NavigationMetadata *)arg7;
- (TFNViewController *)conversationViewControllerForViewModel:(id <T1StatusViewModel>)arg1 statusID:(long long)arg2 account:(TFNTwitterAccount *)arg3 statusNavigationContext:(T1ShowStatusNavigationContext *)arg4 scribeContext:(TFSTwitterScribeContext *)arg5 sourceNavigationMetadata:(T1NavigationMetadata *)arg6;
- (void)showConversationViewControllerForViewModel:(id <T1StatusViewModel>)arg1 statusID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 navigationContext:(T1AppNavigationContext *)arg5 statusNavigationContext:(T1ShowStatusNavigationContext *)arg6 sourceNavigationMetadata:(T1NavigationMetadata *)arg7 completion:(void (^)(void))arg8;
- (void)showConversationViewControllerForViewModel:(id <T1StatusViewModel>)arg1 statusID:(long long)arg2 account:(TFNTwitterAccount *)arg3 statusNavigationContext:(T1ShowStatusNavigationContext *)arg4 scribeContext:(TFSTwitterScribeContext *)arg5 sourceNavigationMetadata:(T1NavigationMetadata *)arg6 fromViewController:(UIViewController *)arg7 animated:(_Bool)arg8;
- (void)showGenericURTPage:(NSString *)arg1 title:(NSString *)arg2 subtitle:(NSString *)arg3 cacheID:(NSString *)arg4 queryParameters:(TNLParameterCollection *)arg5 source:(long long)arg6 completion:(void (^)(void))arg7;
- (void)showQRProfileWithSource:(long long)arg1 sourceNavigationMetadata:(T1NavigationMetadata *)arg2 completion:(void (^)(void))arg3;
- (void)showTopicLandingForTopicID:(NSString *)arg1 withSource:(long long)arg2 referringEvent:(NSString *)arg3 pinnedTweetString:(NSString *)arg4 navigationContext:(T1AppNavigationContext *)arg5 completion:(void (^)(void))arg6;
- (void)showFollowedTopicsForUsername:(NSString *)arg1 withSource:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showTopicEducationForTopicName:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showTopicForTaxonomy:(NSString *)arg1 topicID:(NSString *)arg2 topicImpressionID:(NSString *)arg3 panel:(long long)arg4 source:(long long)arg5 completion:(void (^)(void))arg6;
- (void)showMomentsGuideWithSource:(long long)arg1 tabID:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)showProfileMomentsWithSource:(long long)arg1 sourceNavigationMetadata:(T1NavigationMetadata *)arg2 completion:(void (^)(void))arg3;
- (void)showMomentCapsuleWithMomentID:(NSString *)arg1 source:(long long)arg2 navigationContext:(T1AppNavigationContext *)arg3 completion:(void (^)(void))arg4;
- (void)showPurchaseHistoryWithCompletion:(void (^)(void))arg1;
- (_Bool)handleAutomaticHomeNavigationIfNecessaryWithActiveTimeStamp:(double)arg1 inactiveTimeStamp:(double)arg2;
- (void)showPeopleScreenWithSource:(long long)arg1 fromPanel:(long long)arg2 pivotParameters:(T1PeopleDiscoveryPivotParameters *)arg3 completion:(void (^)(void))arg4;
- (void)showPeopleScreenWithSource:(long long)arg1 pivotParameters:(T1PeopleDiscoveryPivotParameters *)arg2 completion:(void (^)(void))arg3;
- (void)showPeopleAddressBookWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showTrendsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showSuggestedUserListsWithCompletion:(void (^)(void))arg1;
- (void)showSuggestedUserListWithSlug:(NSString *)arg1 completion:(void (^)(void))arg2;
- (void)showListDiscoveryPageFromSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showListCreationFlowFromSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showListWithID:(long long)arg1 onPage:(unsigned long long)arg2 source:(long long)arg3 completion:(void (^)(void))arg4;
- (void)showBirdwatchNoteForNoteId:(long long)arg1 source:(long long)arg2;
- (void)showBirdwatchNotesForTweetId:(long long)arg1 source:(long long)arg2;
- (void)showContributeToBirdwatchWithStatusViewModel:(id <T1StatusViewModel>)arg1 source:(long long)arg2;
- (void)startAdaptiveFlowWithWizardFlow:(TFNAdaptiveWizardFlow *)arg1 source:(long long)arg2;
- (void)muteActionForConversation:(TFNTwitterStatus *)arg1 isMuting:(_Bool)arg2 showAmbientNotification:(_Bool)arg3 scribePage:(NSString *)arg4 scribeSection:(NSString *)arg5 scribeComponent:(NSString *)arg6 scribeParameters:(NSDictionary *)arg7 completion:(void (^)(void))arg8;
- (void)muteActionForUser:(id <TFSTwitterCanonicalUser>)arg1 isMuting:(_Bool)arg2 showConfirmationIfNeeded:(_Bool)arg3 scribePage:(NSString *)arg4 scribeSection:(NSString *)arg5 scribeComponent:(NSString *)arg6 scribeParameters:(NSDictionary *)arg7;
- (void)showBlockOrReportWithContext:(T1BlockOrReportActionContext *)arg1 source:(long long)arg2;
- (void)showMyFollowersWithTab:(unsigned long long)arg1 source:(long long)arg2 sourceNavigationMetadata:(T1NavigationMetadata *)arg3 completion:(void (^)(void))arg4;
- (void)showFollowingForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 completion:(void (^)(void))arg5;
- (void)showFollowersForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 completion:(void (^)(void))arg5;
- (void)showAdsCompanionForPath:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showTeamsInvitationFromPanel:(long long)arg1 navigationContext:(T1AppNavigationContext *)arg2 source:(long long)arg3 completion:(void (^)(void))arg4;
- (void)showFollowerRequestsFromPanel:(long long)arg1 navigationContext:(T1AppNavigationContext *)arg2 source:(long long)arg3 completion:(void (^)(void))arg4;
- (void)showEditProfileBirthdayWithSource:(long long)arg1 sourceNavigationMetadata:(T1NavigationMetadata *)arg2 completion:(void (^)(void))arg3;
- (void)showEditProfileWithSource:(long long)arg1 sourceNavigationMetadata:(T1NavigationMetadata *)arg2 completion:(void (^)(void))arg3;
- (void)showProfileForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 navigationContext:(T1AppNavigationContext *)arg5 sourceNavigationMetadata:(T1NavigationMetadata *)arg6 options:(unsigned long long)arg7 completion:(void (^)(void))arg8;
- (void)showProfileForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 navigationContext:(T1AppNavigationContext *)arg4 source:(long long)arg5 sourceNavigationMetadata:(T1NavigationMetadata *)arg6 completion:(void (^)(void))arg7;
- (void)showProfileForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 sourceNavigationMetadata:(T1NavigationMetadata *)arg5 options:(unsigned long long)arg6 completion:(void (^)(void))arg7;
- (void)showProfileForUsername:(NSString *)arg1 orUserID:(long long)arg2 fromPanel:(long long)arg3 source:(long long)arg4 sourceNavigationMetadata:(T1NavigationMetadata *)arg5 completion:(void (^)(void))arg6;
- (void)showProfileForCurrentAccountFromSource:(long long)arg1 sourceNavigationMetadata:(T1NavigationMetadata *)arg2 completion:(void (^)(void))arg3;
- (void)showNotificationsPermissionWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showLocationPermissionWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showTwitterAnniversaryAnnouncement:(NSString *)arg1 message:(NSString *)arg2 action:(NSString *)arg3 imageURL:(NSURL *)arg4 imageDimensions:(struct CGSize)arg5 tweetText:(NSString *)arg6 cursor:(struct _NSRange)arg7 source:(long long)arg8 completion:(void (^)(void))arg9;
- (void)showNotificationsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showAboutWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showDeviceFollowSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showTrendsLocationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showTrendsSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showUnifiedNotificationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showBackupCodeGenerationWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showMuteSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showDataUsageSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showMuteKeywordSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showAccessibilitySettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showUsernameSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showPhoneSettingsWithCompletion:(void (^)(_Bool))arg1;
- (void)showEmailSettingsWithCompletion:(void (^)(_Bool))arg1;
- (void)showChangePasswordSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showYourDevicesWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showYourTwitterDataDownloadWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showYourTwitterDataWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showEmailNotificationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showPersonalizationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showPrivacySettingsWithSource:(long long)arg1 scrollToDestination:(unsigned long long)arg2 completion:(void (^)(void))arg3;
- (void)showLoginVerificationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showContentPreferencesSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showAccountSecuritySettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showAccountSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showSettingsWithSource:(long long)arg1 hierarchy:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)showSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)switchToContributorForTeamsAccount:(TFNTwitterAccount *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showLoginRequestsForAccount:(TFNTwitterAccount *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showAdvancedNotificationFilterSettingsWithSource:(long long)arg1 showFollowingMeTooltip:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)showModalNotificationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showNotificationSettingsWithSource:(long long)arg1 identifier:(NSString *)arg2 completion:(void (^)(void))arg3;
- (void)showNotificationSettingsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showSearchResultsForPlace:(TFSTwitterPlace *)arg1 location:(TFSTwitterLocation *)arg2 fromPanel:(long long)arg3 source:(long long)arg4 completion:(void (^)(void))arg5;
- (void)showSearchResultsForPlace:(TFSTwitterPlace *)arg1 fromPanel:(long long)arg2 source:(long long)arg3 completion:(void (^)(void))arg4;
- (void)showSearchResultsForPlace:(TFSTwitterPlace *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showSearchResultsWithOptions:(T1SearchViewControllerOptions *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showSearchResultsWithOptions:(T1SearchViewControllerOptions *)arg1 fromPanel:(long long)arg2 source:(long long)arg3 completion:(void (^)(void))arg4;
- (void)showBroadcastAsInvitedGuestWithBroadcastIDOrShareToken:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showBroadcastWithBroadcastIDOrShareToken:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showLiveEventTimelineWithMomentID:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showLiveEventTimelineWithEventID:(NSString *)arg1 timelineID:(NSString *)arg2 sourceID:(NSString *)arg3 muted:(_Bool)arg4 source:(long long)arg5 fromPanel:(long long)arg6 completion:(void (^)(void))arg7;
- (void)showLiveEventTimelineWithEventID:(NSString *)arg1 timelineID:(NSString *)arg2 sourceID:(NSString *)arg3 source:(long long)arg4 fromPanel:(long long)arg5 completion:(void (^)(void))arg6;
- (void)showMessagesInboxWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showMessagesComposeWithText:(NSString *)arg1 source:(long long)arg2 completion:(void (^)(void))arg3;
- (void)showMessagesWithConversationID:(NSString *)arg1 navigationContext:(T1AppNavigationContext *)arg2 source:(long long)arg3 options:(unsigned long long)arg4 completion:(void (^)(void))arg5;
- (void)showMessagesComposeWithRecipient:(TFSTwitterUserReference *)arg1 text:(NSString *)arg2 welcomeMessageID:(NSString *)arg3 navigationContext:(T1AppNavigationContext *)arg4 source:(long long)arg5 options:(unsigned long long)arg6 completion:(void (^)(void))arg7;
- (void)showComposerDraftsWithSource:(long long)arg1 fromAccount:(TFNTwitterAccount *)arg2 completion:(void (^)(void))arg3;
- (void)showComposerDraftsWithSource:(long long)arg1 completion:(void (^)(void))arg2;
- (void)showPhotoGalleryWithSource:(long long)arg1;
- (void)showGIFSearchWithStatus:(TFNTwitterStatus *)arg1 protocolSource:(long long)arg2 sourceInfo:(TFNPopoverSourceInfo *)arg3;
- (void)showComposerWithSessionConfig:(T1ComposeSessionConfig *)arg1;
- (_Bool)showPanel:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setCurrentPanel:(long long)arg1 preserveModals:(_Bool)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)setCurrentPanel:(long long)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
@end

