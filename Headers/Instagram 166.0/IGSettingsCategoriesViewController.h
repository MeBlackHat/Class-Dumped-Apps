//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewController.h>

#import <InstagramAppCoreFramework/IGAccountLogoutControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectInteropStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGProConversionFlowPresentingDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSettingsAccountSwitchBackDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserUpdatedListener-Protocol.h>
#import <InstagramAppCoreFramework/UIAlertViewDelegate-Protocol.h>

@class IGAccountLinkingInfo, IGAccountLogoutController, IGAddAccountManager, IGBloksAsyncActionHandler, IGLogoutSheetManager, IGRapidFeedbackController, IGSearchBarWithCancel, IGSettingsAboutModel, IGSettingsAccountModel, IGSettingsAdsModel, IGSettingsBusinessModel, IGSettingsFollowAndInviteModel, IGSettingsHelpModel, IGSettingsNotificationsModel, IGSettingsPaymentsModel, IGSettingsPrivacyModel, IGSettingsSecurityModel, IGUserSession, NSArray, NSDictionary, NSMutableArray, NSString;

@interface IGSettingsCategoriesViewController : IGGroupedTableViewController <IGAccountLogoutControllerDelegate, IGDirectInteropStatusListener, IGSettingsAccountSwitchBackDelegate, IGSearchBarDelegate, UIAlertViewDelegate, IGUserUpdatedListener, IGProConversionFlowPresentingDelegate>
{
    NSArray *_generalSectionRowTypes;
    NSArray *_FXCALSectionRowTypes;
    NSArray *_sessionSectionRowTypes;
    IGAddAccountManager *_addAccountManager;
    IGAccountLogoutController *_logoutController;
    IGUserSession *_userSession;
    NSMutableArray *_allSections;
    IGRapidFeedbackController *_rapidFeedbackController;
    IGSettingsFollowAndInviteModel *_followAndInviteModel;
    IGSettingsNotificationsModel *_notificationsModel;
    IGSettingsBusinessModel *_businessModel;
    IGSettingsPrivacyModel *_privacyModel;
    IGSettingsSecurityModel *_securityModel;
    IGSettingsPaymentsModel *_paymentsModel;
    IGSettingsAdsModel *_adsModel;
    IGSettingsAccountModel *_accountModel;
    IGSettingsHelpModel *_helpModel;
    IGSettingsAboutModel *_aboutModel;
    NSArray *_searchRowTitles;
    NSDictionary *_searchChildRowToParentRow;
    NSDictionary *_searchGeneralRowToGeneralEnumMap;
    IGSearchBarWithCancel *_searchBarWithCancel;
    NSArray *_filteredSearchResults;
    IGAccountLinkingInfo *_accountLinkingInfo;
    NSString *_paymentSettingsSessionId;
    IGLogoutSheetManager *_logoutSheetManager;
    IGBloksAsyncActionHandler *_bloksAsyncActionHandler;
    _Bool _isFBPayEnabled;
    _Bool _loggedInteropSettingsUpsellAppearance;
    id _proConversionFlow;
}

+ (id)IGSettingsCategoriesCreateBusinessSettingViewControllerWithSession:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) id proConversionFlow; // @synthesize proConversionFlow=_proConversionFlow;
- (void)interopUpgradeStatusDidChange:(long long)arg1;
- (_Bool)_shouldShowPaymentSettingsRow;
- (void)_logDataWithEventName:(id)arg1 extraDict:(id)arg2;
- (void)_showRevertBackSurvey;
- (void)settingsViewController:(id)arg1 didSwitchFromAccountType:(long long)arg2 toAccountType:(long long)arg3;
- (_Bool)_shouldShowBusinessSettingsSection;
- (void)_pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)logoutControllerDidCancelOneTapLoginCheckbox:(id)arg1;
- (void)logoutControllerWillPresentOneTapLoginCheckbox:(id)arg1;
- (void)logoutControllerWillLogoutAllUsersWithoutAllPermission:(id)arg1 loggedInUsers:(id)arg2 logoutEntryPoint:(long long)arg3;
- (void)_stopSpinnerOnCellWithIndexPath:(id)arg1;
- (void)_startSpinnerOnCellWithIndexPath:(id)arg1;
- (_Bool)_canCreateNewAccountGroupWithCurrentlyLoggedInAccounts:(id)arg1;
- (_Bool)_searchBarIsEmpty;
- (void)_buildSearchMap;
- (void)_logInteropSettingsUpsellEventIfNeeded;
- (void)configureRow:(id)arg1 labelText:(id)arg2 accessibilityText:(id)arg3 accessibilityTrait:(unsigned long long)arg4 image:(id)arg5 accessoryType:(long long)arg6 actionable:(_Bool)arg7 showBottomBorder:(_Bool)arg8;
- (void)_showLogoutSheetManager;
- (void)_tableViewDidSelectLogoutRedesignRow:(id)arg1;
- (void)_tableViewDidSelectShoppingSignupRow:(id)arg1;
- (void)_tableViewDidSelectSwitchToProfessionalAccountRow:(id)arg1;
- (void)_tableView:(id)arg1 didSelectAddAccountRow:(long long)arg2;
- (void)_tryToShowAccountLinkingUpsellWithFallbackHandler:(CDUnknownBlockType)arg1;
- (void)_handleAccountLinkingIntentTargetWithSessionId:(id)arg1;
- (void)_tableViewDidSelectLinkedAccountGroupRow:(id)arg1;
- (void)_searchCancelTapped:(id)arg1;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)_tableView:(id)arg1 didSelectSearchRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 didSelectSessionRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 didSelectFXCALRowAtIndexPath:(id)arg2;
- (void)_tableView:(id)arg1 didSelectGeneralRow:(long long)arg2;
- (void)_configureSearchCell:(id)arg1 forRow:(long long)arg2;
- (void)_configureSessionCell:(id)arg1 forRow:(long long)arg2;
- (void)_configureFXCALCell:(id)arg1 forRow:(long long)arg2;
- (id)_cellTitleForGeneralRow:(long long)arg1;
- (void)_configureGeneralCell:(id)arg1 forRow:(long long)arg2;
- (long long)_sessionRowForRow:(long long)arg1;
- (long long)_FXCALRowForRow:(long long)arg1;
- (long long)_generalRowForRow:(long long)arg1;
- (id)_headerViewForSessionSection;
- (id)_headerViewForFXCALSection;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_updateFBPayEligibility:(_Bool)arg1;
- (void)_updateAccountLinkingStatus;
- (void)_updateRows;
- (id)_generalSectionRows;
- (id)_FXCALSectionRows;
- (id)_sessionSectionRows;
- (long long)_sectionIndexForSection:(long long)arg1;
- (void)userWasUpdated:(id)arg1;
- (void)_updateAllSections;
- (struct UIEdgeInsets)preferredMinimizableInsets;
- (struct UIEdgeInsets)preferredContentInsets;
- (void)_prepareAppearance;
- (void)_didTapBackButton:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

