//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAccountParticleCoordinatorDelegate-Protocol.h"
#import "HMEFeedActionDelegate-Protocol.h"
#import "HMEFeedCoordinator-Protocol.h"
#import "HMEFeedModelControllerDelegate-Protocol.h"
#import "HMEFeedStatusViewControllerDelegate-Protocol.h"
#import "HMEFeedViewControllerDelegate-Protocol.h"
#import "HMEHistoryCoordinatorDelegate-Protocol.h"
#import "HMEPreferenceCoordinatorActionDelegate-Protocol.h"
#import "HMERealtimeMessagingListener-Protocol.h"

@class FeedContentInfo, HMEFeedViewController, NSDate, NSString, UINavigationController;
@protocol GCAConfigurationFlags, HMEAccountParticleCoordinator, HMEFeedCoordinatorDelegate, HMEFeedModelController, HMEFeedTabModelController, HMEHelpCoordinator, HMEHistoryCoordinator, HMEPreferenceCoordinator, HMERealtimeMessagingData;

@interface HMEFeedStructureCoordinator : NSObject <HMEAccountParticleCoordinatorDelegate, HMERealtimeMessagingListener, HMEFeedStatusViewControllerDelegate, HMEFeedActionDelegate, HMEHistoryCoordinatorDelegate, HMEFeedModelControllerDelegate, HMEFeedViewControllerDelegate, HMEPreferenceCoordinatorActionDelegate, HMEFeedCoordinator>
{
    _Bool _feedBadgeShown;
    UINavigationController *_rootViewController;
    id <HMEFeedCoordinatorDelegate> _delegate;
    NSString *_structureID;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMEAccountParticleCoordinator> _accountParticleCoordinator;
    HMEFeedViewController *_feedViewController;
    id <GCAConfigurationFlags> _flags;
    id <HMERealtimeMessagingData> _realtimeMessagingData;
    NSDate *_lastRefreshDate;
    id <HMEHistoryCoordinator> _historyCoordinator;
    id <HMEFeedModelController> _feedModelController;
    CDUnknownBlockType _analyticsLoggerFactory;
    NSString *_loadingFeedDetailID;
    CDUnknownBlockType _preferenceCoordinatorFactory;
    id <HMEPreferenceCoordinator> _preferenceCoordinator;
    id <HMEFeedTabModelController> _modelController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEFeedTabModelController> modelController; // @synthesize modelController=_modelController;
@property(retain, nonatomic) id <HMEPreferenceCoordinator> preferenceCoordinator; // @synthesize preferenceCoordinator=_preferenceCoordinator;
@property(readonly, nonatomic) CDUnknownBlockType preferenceCoordinatorFactory; // @synthesize preferenceCoordinatorFactory=_preferenceCoordinatorFactory;
@property(nonatomic, getter=isFeedBadgeShown) _Bool feedBadgeShown; // @synthesize feedBadgeShown=_feedBadgeShown;
@property(copy, nonatomic) NSString *loadingFeedDetailID; // @synthesize loadingFeedDetailID=_loadingFeedDetailID;
@property(readonly, nonatomic) CDUnknownBlockType analyticsLoggerFactory; // @synthesize analyticsLoggerFactory=_analyticsLoggerFactory;
@property(readonly, nonatomic) id <HMEFeedModelController> feedModelController; // @synthesize feedModelController=_feedModelController;
@property(readonly, nonatomic) id <HMEHistoryCoordinator> historyCoordinator; // @synthesize historyCoordinator=_historyCoordinator;
@property(retain, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(readonly, nonatomic) id <HMERealtimeMessagingData> realtimeMessagingData; // @synthesize realtimeMessagingData=_realtimeMessagingData;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) HMEFeedViewController *feedViewController; // @synthesize feedViewController=_feedViewController;
@property(readonly, nonatomic) id <HMEAccountParticleCoordinator> accountParticleCoordinator; // @synthesize accountParticleCoordinator=_accountParticleCoordinator;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(nonatomic) __weak id <HMEFeedCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UINavigationController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)preferencesCoordinator:(id)arg1 didPerformActionForPreferenceID:(id)arg2 error:(id)arg3;
- (void)historyCoordinator:(id)arg1 showCameraControllerForDetails:(id)arg2 presentingViewController:(id)arg3;
- (void)feedHideEventActionDidEnd:(id)arg1 error:(id)arg2;
- (_Bool)feedHideEventActionShouldStart:(id)arg1;
- (void)feedAction:(id)arg1 openAssistantHandoffURL:(id)arg2;
- (void)feedAction:(id)arg1 openAssistantSettingsURL:(id)arg2;
- (void)feedAction:(id)arg1 openCameraForData:(id)arg2 autoplay:(_Bool)arg3 presentingViewController:(id)arg4;
- (void)realtimeMessagingData:(id)arg1 didReceiveRefreshHomeFeedMessage:(id)arg2;
- (void)openHistoryPageForStatusViewController:(id)arg1 location:(int)arg2;
- (void)accountParticleCoordinatorShouldShowDeveloperTools:(id)arg1;
- (void)accountParticleCoordinatorShouldShowMyActivity:(id)arg1;
- (void)accountParticleCoordinatorShouldShowFeedback:(id)arg1;
- (void)accountParticleCoordinatorShouldShowHelp:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAssistantSettings:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAppAndAccountSettings:(id)arg1;
- (void)accountParticleCoordinator:(id)arg1 didSwitchToIdentity:(id)arg2;
- (void)showFeedDetailsWithDetailData:(id)arg1 autoplay:(_Bool)arg2;
- (void)processFeedDetails:(id)arg1 error:(id)arg2;
- (void)presentHistoryWithHgsIDs:(id)arg1 categoryIds:(id)arg2 scrollToDate:(id)arg3 presentingViewController:(id)arg4 location:(int)arg5;
- (void)applicationWillEnterForeground;
- (void)showFeedDetailsWithFeedID:(id)arg1;
- (void)reloadFeedCards;
- (void)showAlertForOliveAccountLinking;
- (void)presentFeedSettingsWithViewController:(id)arg1;
- (void)openFeedSettingsForViewController:(id)arg1;
- (void)feedViewControllerIsShownWhenFeedTabIsSelected;
- (void)feedModelController:(id)arg1 hasPriorityCardUpdates:(_Bool)arg2;
@property(readonly, copy, nonatomic) FeedContentInfo *feedContentInfo;
- (id)initWithModelControllerFactory:(CDUnknownBlockType)arg1 feedActionFactory:(CDUnknownBlockType)arg2 structureID:(id)arg3 accountParticleCoordinatorFactory:(CDUnknownBlockType)arg4 helpCoordinatorFactory:(CDUnknownBlockType)arg5 historyCoordinatorFactory:(CDUnknownBlockType)arg6 preferencesCoordinatorFactory:(CDUnknownBlockType)arg7 realtimeMessagingData:(id)arg8 feedModelController:(id)arg9 analyticsLoggerFactory:(CDUnknownBlockType)arg10 layoutProvider:(id)arg11 flags:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

