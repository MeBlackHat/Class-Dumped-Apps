//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGCustomViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGPartialModalSheetTapListener-Protocol.h>
#import <InstagramAppCoreFramework/IGRootViewAuthenticationHandling-Protocol.h>
#import <InstagramAppCoreFramework/IGRootViewControllerType-Protocol.h>

@class IGActionableConfirmationToastPresenter, IGLRUCache, IGPartialModalSheetViewController, NSMapTable, NSMutableDictionary, NSString;

@interface IGRootViewController : UIViewController <IGPartialModalSheetTapListener, IGCustomViewController, IGRootViewAuthenticationHandling, IGRootViewControllerType>
{
    UIViewController *_contentViewController;
    NSString *_presentedUserPk;
    IGLRUCache *_mainAppVcCache;
    NSMapTable *_userSessionToMainAppVcMapTable;
    NSMutableDictionary *_userPkOperationCompletionMap;
    IGPartialModalSheetViewController *_accountSwitcherPartialSheet;
    IGActionableConfirmationToastPresenter *_toastPresenter;
    _Bool _isSwitching;
    _Bool _shouldEvictCacheAfterSwitching;
}

- (void).cxx_destruct;
- (id)ig_keyViewControllers;
- (void)_switchViewController:(id)arg1 toViewController:(id)arg2 animationType:(long long)arg3 viewControllerUpdatedBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)_createMainAppControllerWithUserSession:(id)arg1 entryPoint:(unsigned long long)arg2 mainAppSetupBlock:(CDUnknownBlockType)arg3;
- (void)_shrinkContentViewController;
- (double)_accountSwitchedBannerAnimationDelay;
- (double)_accountSwitchingAnimationPartDuration;
- (void)_evictNonPresentedMainAppVcFromCache;
- (void)_onReceiveMemoryWarning;
- (void)_onMainAppVcEvictionCompletionKey:(id)arg1;
- (void)_resumeSizeOfContentViewController;
- (void)partialModalSheet:(id)arg1 didTapDimmingBackgroundView:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)didDismissAccountSwitcher;
- (void)dismissAccountSwitcherPartialSheet:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)showAccountSwitcherPartialSheet:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)alwaysAllowsPopoutAnimationWhenPresented;
- (_Bool)shouldProvideTopMostViewController;
- (id)topMostViewController;
- (_Bool)shouldUseStatusBarAppearanceForOtherWindows;
- (_Bool)shouldUseSupportedInterfaceOrientationsForOtherWindows;
- (unsigned long long)supportedInterfaceOrientationsForCurrentWindow;
- (id)toastPresenter;
- (id)contentViewController;
- (void)configureOperationCompletionDelegate:(id)arg1 forUserSession:(id)arg2;
- (id)mainAppViewControllerForUserSession:(id)arg1;
- (void)didLogoutForUserSession:(id)arg1;
- (void)didEndUserSession:(id)arg1;
- (void)_showViewController:(id)arg1 userSession:(id)arg2 animationType:(long long)arg3 viewControllerUpdatedBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)_prepareVolumeView:(id)arg1;
- (void)showViewController:(id)arg1 animationType:(long long)arg2;
- (void)showCacheableViewControllerForUserSession:(id)arg1 previousUser:(id)arg2 initializer:(CDUnknownBlockType)arg3 viewControllerUpdated:(CDUnknownBlockType)arg4 animationType:(long long)arg5 entryPoint:(unsigned long long)arg6;
- (id)ig_childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarStyle;
- (id)ig_childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

