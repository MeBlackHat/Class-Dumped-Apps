//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKDialogControllerDelegate-Protocol.h"
#import "GDKFileActionProvider-Protocol.h"
#import "GDKPickerVCDelegate-Protocol.h"
#import "GDKRefactoredAddPeopleVCDelegate-Protocol.h"
#import "GOOBottomSheetControllerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class GDKDefaultFileActionProviderParams, GDKDialogContainerVC, GDKFolderColorPalette, GDKRequestFileAccessPresenter, GDKStorageService, GDKTheme, GSCImageFetcher, GSCImageFetcherCache, MGMMonogramService, NSArray, NSMutableDictionary, NSString, UIColor, UIDocumentInteractionController, UIPopoverController;
@protocol GDKAlertControlling, GDKCapabilityChecking, GDKContactAvatarCaching, GDKContactManagerAPIClient, GDKContentProvider, GDKFileActionProviderDelegate, GDKFileFetcher, GDKFileMutating, GDKFileQuerent, GDKFileResolving, GDKFlagObserving, GDKHelpKitService, GDKItemActionObserverRegistrar, GDKItemsLiveListQuerent, GDKPermissionsFetching, GDKPermissionsMutating, GDKPersistenceChecking, GDKQuickShareDataSource, GDKRootIDFetcher, GDKSnackbarControlling, GDKViewControllerPresenting, GDKViewControllerToken, SSOAuthorization, SSOIdentity;

@interface GDKDefaultFileActionProvider : NSObject <GDKRefactoredAddPeopleVCDelegate, GDKPickerVCDelegate, GOOBottomSheetControllerDelegate, GDKDialogControllerDelegate, UIPopoverControllerDelegate, GDKFileActionProvider>
{
    _Bool _pinningUndoDisabled;
    _Bool _devicesEnabled;
    _Bool _presentsStorageMessage;
    _Bool _blocosWarningsEnabled;
    _Bool _linkSharingToggleEnabled;
    _Bool _reportAbuseDryRunEnabled;
    _Bool _quickShareEnabled;
    _Bool _dynamicTypeEnabled;
    _Bool _autoPurgingMessagingEnabled;
    _Bool _refactoredSearchControllerEnabled;
    id <GDKFileActionProviderDelegate> _delegate;
    UIColor *_shareViewHeaderBackgroundColorOverride;
    GDKStorageService *_storageService;
    id <GDKContentProvider> _contentProvider;
    id <SSOAuthorization> _ssoAuthorization;
    id <GDKContactAvatarCaching> _contactAvatarCache;
    id <GDKContactManagerAPIClient> _contactManager;
    id <GDKItemActionObserverRegistrar> _actionObserverRegistrar;
    id <GDKFileFetcher> _fileFetcher;
    id <GDKFileQuerent> _fileQuerent;
    id <GDKFileMutating> _fileMutator;
    id <GDKItemsLiveListQuerent> _liveListQuerent;
    id <GDKPersistenceChecking> _persistenceChecker;
    id <GDKRootIDFetcher> _rootIDFetcher;
    id <GDKPermissionsFetching> _permissionsFetching;
    id <GDKPermissionsMutating> _permissionsMutating;
    GSCImageFetcher *_imageFetcher;
    GSCImageFetcherCache *_imageFetcherCache;
    id <SSOIdentity> _ssoIdentity;
    UIDocumentInteractionController *_interactionController;
    UIPopoverController *_openInPopoverController;
    GDKFolderColorPalette *_folderColorPalette;
    MGMMonogramService *_monogramService;
    id <GDKHelpKitService> _helpKitService;
    CDUnknownBlockType _moveRevertedObserverUnregisterBlock;
    CDUnknownBlockType _shortcutRevertedObserverUnregisterBlock;
    id <GDKQuickShareDataSource> _quickShareDataSource;
    id <GDKSnackbarControlling> _snackbarController;
    id <GDKAlertControlling> _alertController;
    id <GDKFlagObserving> _userFlags;
    id <GDKViewControllerPresenting> _viewPresenter;
    id <GDKFileResolving> _fileResolver;
    id <GDKCapabilityChecking> _capabilityChecker;
    GDKRequestFileAccessPresenter *_requestFileAccessPresenter;
    GDKTheme *_theme;
    NSString *_searchPlaceholderText;
    CDUnknownBlockType _movePickerRootProducer;
    GDKDialogContainerVC *_dialogContainerVC;
    id <GDKViewControllerToken> _viewControllerToken;
    NSArray *_targetsToMove;
    CDUnknownBlockType _moveCompletion;
    id <GDKViewControllerPresenting> _sharePresentingVC;
    NSMutableDictionary *_activeAddPeopleVCs;
    CDUnknownBlockType _shareCompletion;
    GDKDefaultFileActionProviderParams *_params;
}

+ (id)deletedForeverConfirmationAutoPurgingTextForFiles:(id)arg1;
+ (id)deletedForeverConfirmationLegacyTextForFiles:(id)arg1;
+ (id)deletedForeverConfirmationTextForFiles:(id)arg1 autoPurgingMessagingEnabled:(_Bool)arg2;
+ (id)autoPurgingSubtitleForDeletedFiles:(id)arg1 theme:(id)arg2;
+ (id)subtitleForDeletedFiles:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) GDKDefaultFileActionProviderParams *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType shareCompletion; // @synthesize shareCompletion=_shareCompletion;
@property(retain, nonatomic) NSMutableDictionary *activeAddPeopleVCs; // @synthesize activeAddPeopleVCs=_activeAddPeopleVCs;
@property(nonatomic) __weak id <GDKViewControllerPresenting> sharePresentingVC; // @synthesize sharePresentingVC=_sharePresentingVC;
@property(copy, nonatomic) CDUnknownBlockType moveCompletion; // @synthesize moveCompletion=_moveCompletion;
@property(retain, nonatomic) NSArray *targetsToMove; // @synthesize targetsToMove=_targetsToMove;
@property(retain, nonatomic) id <GDKViewControllerToken> viewControllerToken; // @synthesize viewControllerToken=_viewControllerToken;
@property(retain, nonatomic) GDKDialogContainerVC *dialogContainerVC; // @synthesize dialogContainerVC=_dialogContainerVC;
@property(readonly, nonatomic) CDUnknownBlockType movePickerRootProducer; // @synthesize movePickerRootProducer=_movePickerRootProducer;
@property(readonly, copy, nonatomic) NSString *searchPlaceholderText; // @synthesize searchPlaceholderText=_searchPlaceholderText;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) _Bool refactoredSearchControllerEnabled; // @synthesize refactoredSearchControllerEnabled=_refactoredSearchControllerEnabled;
@property(readonly, nonatomic) _Bool autoPurgingMessagingEnabled; // @synthesize autoPurgingMessagingEnabled=_autoPurgingMessagingEnabled;
@property(readonly, nonatomic) _Bool dynamicTypeEnabled; // @synthesize dynamicTypeEnabled=_dynamicTypeEnabled;
@property(readonly, nonatomic) _Bool quickShareEnabled; // @synthesize quickShareEnabled=_quickShareEnabled;
@property(readonly, nonatomic) _Bool reportAbuseDryRunEnabled; // @synthesize reportAbuseDryRunEnabled=_reportAbuseDryRunEnabled;
@property(readonly, nonatomic) _Bool linkSharingToggleEnabled; // @synthesize linkSharingToggleEnabled=_linkSharingToggleEnabled;
@property(readonly, nonatomic) _Bool blocosWarningsEnabled; // @synthesize blocosWarningsEnabled=_blocosWarningsEnabled;
@property(readonly, nonatomic) GDKRequestFileAccessPresenter *requestFileAccessPresenter; // @synthesize requestFileAccessPresenter=_requestFileAccessPresenter;
@property(readonly, nonatomic) id <GDKCapabilityChecking> capabilityChecker; // @synthesize capabilityChecker=_capabilityChecker;
@property(readonly, nonatomic) id <GDKFileResolving> fileResolver; // @synthesize fileResolver=_fileResolver;
@property(readonly, nonatomic) __weak id <GDKViewControllerPresenting> viewPresenter; // @synthesize viewPresenter=_viewPresenter;
@property(readonly, nonatomic) id <GDKFlagObserving> userFlags; // @synthesize userFlags=_userFlags;
@property(readonly, nonatomic) id <GDKAlertControlling> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <GDKSnackbarControlling> snackbarController; // @synthesize snackbarController=_snackbarController;
@property(retain, nonatomic) id <GDKQuickShareDataSource> quickShareDataSource; // @synthesize quickShareDataSource=_quickShareDataSource;
@property(copy, nonatomic) CDUnknownBlockType shortcutRevertedObserverUnregisterBlock; // @synthesize shortcutRevertedObserverUnregisterBlock=_shortcutRevertedObserverUnregisterBlock;
@property(copy, nonatomic) CDUnknownBlockType moveRevertedObserverUnregisterBlock; // @synthesize moveRevertedObserverUnregisterBlock=_moveRevertedObserverUnregisterBlock;
@property(retain, nonatomic) id <GDKHelpKitService> helpKitService; // @synthesize helpKitService=_helpKitService;
@property(retain, nonatomic) MGMMonogramService *monogramService; // @synthesize monogramService=_monogramService;
@property(retain, nonatomic) GDKFolderColorPalette *folderColorPalette; // @synthesize folderColorPalette=_folderColorPalette;
@property(retain, nonatomic) UIPopoverController *openInPopoverController; // @synthesize openInPopoverController=_openInPopoverController;
@property(retain, nonatomic) UIDocumentInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) id <SSOIdentity> ssoIdentity; // @synthesize ssoIdentity=_ssoIdentity;
@property(retain, nonatomic) GSCImageFetcherCache *imageFetcherCache; // @synthesize imageFetcherCache=_imageFetcherCache;
@property(retain, nonatomic) GSCImageFetcher *imageFetcher; // @synthesize imageFetcher=_imageFetcher;
@property(retain, nonatomic) id <GDKPermissionsMutating> permissionsMutating; // @synthesize permissionsMutating=_permissionsMutating;
@property(retain, nonatomic) id <GDKPermissionsFetching> permissionsFetching; // @synthesize permissionsFetching=_permissionsFetching;
@property(readonly, nonatomic) id <GDKRootIDFetcher> rootIDFetcher; // @synthesize rootIDFetcher=_rootIDFetcher;
@property(readonly, nonatomic) id <GDKPersistenceChecking> persistenceChecker; // @synthesize persistenceChecker=_persistenceChecker;
@property(readonly, nonatomic) id <GDKItemsLiveListQuerent> liveListQuerent; // @synthesize liveListQuerent=_liveListQuerent;
@property(readonly, nonatomic) id <GDKFileMutating> fileMutator; // @synthesize fileMutator=_fileMutator;
@property(readonly, nonatomic) id <GDKFileQuerent> fileQuerent; // @synthesize fileQuerent=_fileQuerent;
@property(readonly, nonatomic) id <GDKFileFetcher> fileFetcher; // @synthesize fileFetcher=_fileFetcher;
@property(readonly, nonatomic) id <GDKItemActionObserverRegistrar> actionObserverRegistrar; // @synthesize actionObserverRegistrar=_actionObserverRegistrar;
@property(retain, nonatomic) id <GDKContactManagerAPIClient> contactManager; // @synthesize contactManager=_contactManager;
@property(retain, nonatomic) id <GDKContactAvatarCaching> contactAvatarCache; // @synthesize contactAvatarCache=_contactAvatarCache;
@property(retain, nonatomic) id <SSOAuthorization> ssoAuthorization; // @synthesize ssoAuthorization=_ssoAuthorization;
@property(retain, nonatomic) id <GDKContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain, nonatomic) GDKStorageService *storageService; // @synthesize storageService=_storageService;
@property(retain, nonatomic) UIColor *shareViewHeaderBackgroundColorOverride; // @synthesize shareViewHeaderBackgroundColorOverride=_shareViewHeaderBackgroundColorOverride;
@property(nonatomic) _Bool presentsStorageMessage; // @synthesize presentsStorageMessage=_presentsStorageMessage;
@property(nonatomic) _Bool devicesEnabled; // @synthesize devicesEnabled=_devicesEnabled;
@property(nonatomic, getter=isPinningUndoDisabled) _Bool pinningUndoDisabled; // @synthesize pinningUndoDisabled=_pinningUndoDisabled;
@property(nonatomic) __weak id <GDKFileActionProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissActivityDialogFromViewPresenter:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showActivityDialogFromViewPresenter:(id)arg1 title:(id)arg2 message:(id)arg3 queue:(id)arg4 cancellationBlock:(CDUnknownBlockType)arg5;
- (void)presentAttributedAlertMessage:(id)arg1;
- (void)presentAlertMessage:(id)arg1;
- (void)showBlocosToastForFile:(id)arg1 role:(long long)arg2;
- (id)errorMessageFromResults:(id)arg1;
- (id)successfulResults:(id)arg1;
- (void)notify:(id)arg1 userIDParam:(id)arg2;
- (void)notify:(id)arg1;
- (void)viewController:(id)arg1 didRemoveSelfFromFile:(id)arg2;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)dialogControllerDidCancel:(id)arg1;
- (void)bottomSheetControllerDidCancel:(id)arg1;
- (_Bool)isLinkSharingPermission:(id)arg1 primaryForDomainAttributes:(id)arg2;
- (id)primaryPermissionForDomainAttributes:(id)arg1 permissions:(id)arg2;
- (_Bool)hasLinkSharingPermission:(id)arg1;
- (void)showLinkToggleToastForFile:(id)arg1 toggleOn:(_Bool)arg2 permission:(id)arg3;
- (void)processLinkToggleWithFile:(id)arg1 toggleOn:(_Bool)arg2 permission:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)createLinkToggleCompletion:(id)arg1 toggleOn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)toggleLinkSharingForFile:(id)arg1 toggleOn:(_Bool)arg2 primaryPermission:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentInteractionControllerInView:(id)arg1 fromView:(id)arg2 forFile:(id)arg3 withContentURL:(id)arg4;
- (CDUnknownBlockType)undoBlockForPin:(_Bool)arg1 file:(id)arg2;
- (void)showMessageWithText:(id)arg1 suspensionToken:(id)arg2 actionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
- (void)showMessageWithText:(id)arg1 suspensionToken:(id)arg2 undoBlock:(CDUnknownBlockType)arg3;
- (void)showMessageWithText:(id)arg1 undoBlock:(CDUnknownBlockType)arg2;
- (void)showDeleteForeverDialogWithTitle:(id)arg1 attributedSubtitle:(id)arg2 confirmText:(id)arg3 confirmAction:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5;
- (void)showDialogWithTitle:(id)arg1 subtitle:(id)arg2 confirmText:(id)arg3 confirmAction:(CDUnknownBlockType)arg4 cancelAction:(CDUnknownBlockType)arg5;
- (void)sanitizeTargets:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)errorResultArrayWithCount:(unsigned long long)arg1;
- (id)defaultError;
- (void)moveFile:(id)arg1 fromFolder:(id)arg2 toFolder:(id)arg3 undoBlocks:(id)arg4 results:(id)arg5 targetIndex:(unsigned long long)arg6 dispatchGroup:(id)arg7;
- (void)showCouldNotDownloadError;
- (id)formatDLPBlockers:(id)arg1;
- (id)warningMessageFromDLPBlockers:(id)arg1;
- (void)showExternalSharingErrorForOrganizationName:(id)arg1 dlpBlockers:(id)arg2;
- (void)removeActiveAddPeopleVC:(id)arg1;
- (_Bool)shouldShowTemakiShareDialog;
- (void)pickerVC:(id)arg1 fileSelected:(id)arg2 error:(id)arg3;
- (void)refactoredAddPeopleVC:(id)arg1 removedSelfFromFile:(id)arg2;
- (void)refactoredAddPeopleVC:(id)arg1 didSelectPermissions:(id)arg2 withRole:(long long)arg3 message:(id)arg4;
- (void)refactoredAddPeopleVCDidTapLearnMore:(id)arg1;
- (void)refactoredAddPeopleVC:(id)arg1 didTapRoleSelectorWithParams:(id)arg2 anchorView:(id)arg3;
- (void)refactoredAddPeopleVC:(id)arg1 whoHasAccessAccessibilityPerformEscape:(id)arg2;
- (void)refactoredAddPeopleVC:(id)arg1 didRequestWhoHasAccessForFile:(id)arg2 permissions:(id)arg3 domainAttributes:(id)arg4 delegate:(id)arg5;
- (void)refactoredAddPeopleVC:(id)arg1 sendDidFinishWithError:(id)arg2;
- (void)refactoredAddPeopleVCSendRequested:(id)arg1;
- (void)refactoredAddPeopleVC:(id)arg1 closeRequestedForFile:(id)arg2;
- (void)dismissAddPeopleVC:(id)arg1;
- (void)presentShareForFile:(id)arg1 fromViewController:(id)arg2 defaultRole:(long long)arg3 showWhoHasAccessSection:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)presentRefactoredAddPeopleVCForFile:(id)arg1 fromViewController:(id)arg2 withUsersToInvite:(id)arg3 defaultRole:(long long)arg4 showWhoHasAccessSection:(_Bool)arg5;
- (void)presentWhoHasAccessForFile:(id)arg1 fromViewController:(id)arg2 permissions:(id)arg3 domainAttributes:(id)arg4 delegate:(id)arg5;
- (_Bool)canFileBeShared:(id)arg1;
- (void)presentShareForFile:(id)arg1 fromViewController:(id)arg2 withUsersToInvite:(id)arg3 defaultRole:(long long)arg4 showWhoHasAccessSection:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentReportAbuseForFile:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)printContentForFile:(id)arg1 fromViewController:(id)arg2 contentURL:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)printActivityDismissBlockForFile:(id)arg1 fromViewController:(id)arg2 cancelled:(_Bool)arg3 contentURL:(id)arg4 error:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)presentPrintForFile:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)openInActivityDismissBlockForFile:(id)arg1 fromViewController:(id)arg2 orPopoverFromView:(id)arg3 cancelled:(_Bool)arg4 contentURL:(id)arg5 error:(id)arg6;
- (void)presentOpenInForFile:(id)arg1 fromViewController:(id)arg2 orPopoverFromView:(id)arg3;
- (void)presentSendACopyForFile:(id)arg1 fromViewController:(id)arg2 orPopoverFromView:(id)arg3 includeOpenInActivity:(_Bool)arg4;
- (void)presentMoveForTargets:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)canMoveFiles:(id)arg1 toFolder:(id)arg2;
- (_Bool)canAddFilesToMyDrive:(id)arg1;
- (_Bool)canMoveFilesOutOfSharedDrive:(id)arg1 toDestination:(id)arg2;
- (_Bool)canMoveTargetsToAnySharedDrive:(id)arg1;
- (CDUnknownBlockType)pickerButtonConfigurationForTargets:(id)arg1;
- (void)removeTargets:(id)arg1 messageProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTargets:(id)arg1 customMessages:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeTargets:(id)arg1 confirmMessage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestAccessToShortcut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleReadOnlyFor:(id)arg1 readOnly:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteFilesForever:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteFilesForeverFromQuery:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)untrashFiles:(id)arg1 completion:(CDUnknownBlockType)arg2 undoBlock:(CDUnknownBlockType)arg3;
- (void)starFiles:(id)arg1 starred:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renameFile:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeColorForFolders:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renameFile:(id)arg1 from:(id)arg2 to:(id)arg3 allowFileExtensionChange:(_Bool)arg4 undoBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)showTextFieldDialogToRenameFileFromViewController:(id)arg1 fileTitle:(id)arg2 file:(id)arg3 title:(id)arg4 allowFileExtensionChange:(_Bool)arg5 isFolder:(_Bool)arg6 undoBlock:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)renameFile:(id)arg1 allowFileExtensionChange:(_Bool)arg2 fromViewController:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pinFiles:(id)arg1 pinned:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveSanitizedTargets:(id)arg1 toFolder:(id)arg2 messageProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)blockingDetectorsForMovingTargets:(id)arg1 toFolder:(id)arg2;
- (void)moveTargets:(id)arg1 toFolder:(id)arg2 messageProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)moveTargets:(id)arg1 toFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)confirmMoveAndDismissPicker:(id)arg1 forFolder:(id)arg2;
- (void)addMultiparentedFileToMyDrive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addFileToMyDrive:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)undoAddShortcutToDrive:(id)arg1 inFolderId:(id)arg2;
- (void)undoMakeACopyOfFile:(id)arg1 inFolderId:(id)arg2;
- (void)silentlyDeleteFile:(id)arg1 inFolderId:(id)arg2;
- (void)checkAvailableStorage:(long long)arg1;
- (void)makeACopyOfFile:(id)arg1 inFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)turnOnLinkSharingForFile:(id)arg1 completion:(CDUnknownBlockType)arg2 copyToClipboard:(_Bool)arg3 domainAttributes:(id)arg4 permissions:(id)arg5;
- (void)getLinkForFile:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)copyLinkToClipboard:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)toggleLinkSharingForFile:(id)arg1 toggleOn:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithParams:(id)arg1 contentProvider:(id)arg2 ssoAuthorization:(id)arg3 ssoIdentity:(id)arg4 contactAvatarCache:(id)arg5 contactManager:(id)arg6 actionObserverRegistrar:(id)arg7 fileFetcher:(id)arg8 fileQuerent:(id)arg9 fileMutator:(id)arg10 liveListQuerent:(id)arg11 persistenceChecker:(id)arg12 rootIDFetcher:(id)arg13 imageFetcher:(id)arg14 imageFetcherCache:(id)arg15 permissionsFetching:(id)arg16 permissionsMutating:(id)arg17 monogramService:(id)arg18 folderColorPalette:(id)arg19 quickShareDataSource:(id)arg20 userFlags:(id)arg21 snackbarController:(id)arg22 alertController:(id)arg23 helpKitService:(id)arg24 viewPresenter:(id)arg25 fileResolver:(id)arg26 capabilityChecker:(id)arg27;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

