//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectThreadViewControllerViewModelProviding-Protocol.h>

@class IGDirectAudioMessagePlaybackService, IGDirectCache, IGDirectLeftAlignedTitleViewModelFactory, IGDirectParticipantRequestsSubscriptionPublisher, IGDirectThreadSubscriptionService, IGDirectThreadTheme, IGPresenceManager, NSString, THStatusService;
@protocol IGDirectDataSubscriptionToken, IGDirectThreadViewControllerViewModelProvidingDelegate, IGUserExperimentSetProviding><IGUserLauncherSetProviding;

@interface IGDirectThreadViewControllerViewModelDataSource : NSObject <IGDirectThreadViewControllerViewModelProviding>
{
    NSString *_threadId;
    IGDirectThreadTheme *_threadTheme;
    NSString *_currentUserPk;
    IGDirectThreadSubscriptionService *_threadSubscriptionService;
    IGPresenceManager *_presenceManager;
    THStatusService *_threadsAppStatusService;
    IGDirectAudioMessagePlaybackService *_audioMessagePlaybackService;
    id <IGUserExperimentSetProviding><IGUserLauncherSetProviding> _featureSetProvider;
    IGDirectLeftAlignedTitleViewModelFactory *_leftAlignedTitleViewModelFactory;
    IGDirectCache *_directCache;
    IGDirectParticipantRequestsSubscriptionPublisher *_participantSubscriptionPublisher;
    _Bool _viewControllerIsPresentedModally;
    id <IGDirectDataSubscriptionToken> _subscriptionToken;
    id <IGDirectThreadViewControllerViewModelProvidingDelegate> _delegate;
}

@property(nonatomic) __weak id <IGDirectThreadViewControllerViewModelProvidingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_informDelegateOfError:(id)arg1;
- (void)_informDelegateOfUpdatedModel:(id)arg1;
- (void)stop;
- (void)startWithViewControllerIsPresentedModally:(_Bool)arg1;
- (id)initWithThreadId:(id)arg1 threadTheme:(id)arg2 threadsAppStatusService:(id)arg3 threadSubscriptionService:(id)arg4 presenceManager:(id)arg5 currentUser:(id)arg6 reelStore:(id)arg7 reelSeenStateStore:(id)arg8 storyDataController:(id)arg9 postCreationManager:(id)arg10 nicknameManager:(id)arg11 audioMessagePlaybackService:(id)arg12 featureSetProvider:(id)arg13 directCache:(id)arg14 directBadgeService:(id)arg15 participantRequestsService:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

