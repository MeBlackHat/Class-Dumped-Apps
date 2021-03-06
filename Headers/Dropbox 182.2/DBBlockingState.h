//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBState.h"

@class UINavigationController, UIViewController;

@interface DBBlockingState : DBState
{
    UIViewController *_blockingScreen;
    UINavigationController *_emmUpgradeMessageViewController;
    UINavigationController *_deviceFullViewController;
    UINavigationController *_clientDeprecationLockoutViewController;
    _Bool _blockingLaunch;
    _Bool _shouldPreventTourModals;
    CDUnknownBlockType _test_onDiskFullModalPresented;
    CDUnknownBlockType _test_onEMMUpgradeModalPresented;
    CDUnknownBlockType _test_onClientDeprecationModalPresented;
}

+ (void)test_clearAllTestMocks;
+ (void)test_setupSingletonMocksForEnterpriseApplication:(id)arg1 availableStorage:(id)arg2;
+ (void)test_setupSingletonMocksForEnterpriseApplication:(id)arg1 availableStorage:(id)arg2 deprecationMonitor:(id)arg3;
+ (_Bool)db_shouldPresentClientDeprecationLockout;
+ (id)deprecationMonitor;
+ (_Bool)db_shouldPresentDiskFull;
+ (id)db_availableStorage;
+ (_Bool)db_shouldPresentEmmUpgradeRequired;
+ (_Bool)blockingStateRequired;
- (void).cxx_destruct;
- (void)test_setOnClientDeprecationModalPresented:(CDUnknownBlockType)arg1;
- (void)test_setOnEMMUpgradeModalPresented:(CDUnknownBlockType)arg1;
- (void)test_setOnDiskFullModalPresented:(CDUnknownBlockType)arg1;
- (void)db_dismissClientDeprecationLockout;
- (void)db_presentClientDeprecationLockout;
- (unsigned long long)db_storageBytesAvailable;
- (void)db_dismissDiskFull;
- (void)db_presentDiskFull;
- (void)db_dismissEmmUpgradeRequired;
- (void)db_presentEmmUpgradeRequired;
- (_Bool)db_isAnyModalPresented;
- (id)db_blockingScreen;
- (id)applicationDidInvokeShortcutItem:(id)arg1 dbStateContext:(id)arg2;
- (void)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 context:(id)arg4;
- (void)didTransitionToStateWithContext:(id)arg1;
- (id)applicationWillEnterForeground:(id)arg1;
- (_Bool)db_updateBlockingModals;
- (id)setupAtLaunchWithContext:(id)arg1 shouldPreventTourModals:(_Bool)arg2;
- (id)db_createLockoutViewControllerWithAnalyticsLogger:(id)arg1;

@end

