//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCoWatchUploadManagerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCVideoCallControllerConnectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRTCVideoCallControllerParticipantDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionEndingObject-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallCallKitCoordinatorDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallCurrentCallProvider-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallSessionListener-Protocol.h>

@class IGCoPresenceLogger, IGCoPresenceManager, IGCoWatchUploadLocalRemoteMappingStore, IGDirectCache, IGDirectPublishedThreadMerger, IGSessionEndIdentifier, IGUserSession, IGVideoCallAudioRouteObserver, IGVideoCallLoggingContext, IGVideoCallParticipantsActions, IGVideoCallSession, IGVideoCallUserKey, NSMutableSet, NSString;
@protocol IGCoWatchCoordinatorProtocol, IGCoWatchUploadManagerProtocol, IGRTCVideoCallControllerIntf, IGVideoCallCallKitCoordinatorInterface, IGVideoCallCaptureCoordinatorAREffectProtocol, IGVideoCallPresenter;

@interface IGVideoCallManager : NSObject <IGRTCVideoCallControllerParticipantDelegate, IGRTCVideoCallControllerConnectionDelegate, IGVideoCallCallKitCoordinatorDelegate, IGVideoCallSessionListener, IGCoWatchUploadManagerDelegate, IGVideoCallCurrentCallProvider, IGUserSessionEndingObject>
{
    IGUserSession *_userSession;
    IGDirectCache *_directCache;
    IGDirectPublishedThreadMerger *_threadMerger;
    IGVideoCallUserKey *_currentUserKey;
    NSMutableSet *_leavingRtcControllers;
    id <IGRTCVideoCallControllerIntf> _rtcController;
    IGVideoCallSession *_currentSession;
    NSString *_cowatchMediaIdOnJoin;
    IGSessionEndIdentifier *_sessionEndIdentifier;
    id <IGVideoCallCaptureCoordinatorAREffectProtocol> _captureCoordinator;
    CDUnknownBlockType _joinCompletion;
    _Bool _isCallInitiator;
    IGVideoCallLoggingContext *_notificationLoggingContext;
    IGVideoCallAudioRouteObserver *_audioRouteObserver;
    NSString *_notificationChannel;
    _Bool _joiningFromRingScreen;
    IGVideoCallParticipantsActions *_participantsActions;
    id <IGCoWatchCoordinatorProtocol> _coWatchCoordinator;
    id <IGCoWatchUploadManagerProtocol> _coWatchUploadManager;
    IGCoWatchUploadLocalRemoteMappingStore *_mappingStore;
    _Bool _appActiveWhenJoiningCall;
    id <IGVideoCallPresenter> _presenter;
    IGCoPresenceLogger *_coPresenceLogger;
    IGCoPresenceManager *_coPresenceManager;
    id <IGVideoCallCallKitCoordinatorInterface> _callKitCoordinator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IGVideoCallCallKitCoordinatorInterface> callKitCoordinator; // @synthesize callKitCoordinator=_callKitCoordinator;
@property(readonly, nonatomic) IGVideoCallSession *currentSession; // @synthesize currentSession=_currentSession;
- (id)_addVideoCallWithId:(id)arg1 threadId:(id)arg2 deviceId:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)uploadManager:(id)arg1 didStartUploadWithLocalId:(id)arg2 uploadId:(id)arg3 thumbnail:(id)arg4;
- (void)uploadManager:(id)arg1 didCancelUploadWithLocalId:(id)arg2;
- (void)uploadManager:(id)arg1 didFailWithLocalId:(id)arg2;
- (void)uploadManager:(id)arg1 didFinishUploadWithLocalId:(id)arg2 media:(id)arg3;
- (void)userSessionWillEnd;
- (void)callKitDidEncounterError:(id)arg1 callErrorAction:(long long)arg2 error:(id)arg3;
- (void)callKitDidEndCall:(id)arg1 joinInfo:(id)arg2;
- (void)callKitDidRejectCall:(id)arg1 joinInfo:(id)arg2 joinContext:(id)arg3;
- (void)callKitDidDisplayRingScreen:(id)arg1 joinInfo:(id)arg2 joinContext:(id)arg3;
- (void)callKitDidAttemptAnswerCall:(id)arg1 videoCallSession:(id)arg2 isCameraPermissionsEnabled:(_Bool)arg3;
- (void)callKitDidTimeoutRing:(id)arg1 videoCallSession:(id)arg2 joinContext:(id)arg3;
- (void)handleIncomingCallKitCall:(id)arg1 joinContext:(id)arg2 threadId:(id)arg3 displayName:(id)arg4 loggingContext:(id)arg5 channel:(id)arg6 isForeground:(_Bool)arg7 willAnswerBlock:(CDUnknownBlockType)arg8;
- (void)handleRevokeNotification:(id)arg1 serverInfoData:(id)arg2 fromSource:(long long)arg3;
- (_Bool)supportsCallKitForSession:(id)arg1;
- (_Bool)appSupportsCallKit;
- (void)videoCallSession:(id)arg1 participantDidLeave:(id)arg2;
- (void)videoCallSession:(id)arg1 participant:(id)arg2 didUpdateVideoState:(long long)arg3 videoView:(id)arg4 audioEnabled:(_Bool)arg5;
- (void)videoCallSession:(id)arg1 participantDidJoin:(id)arg2 isFirstJoin:(_Bool)arg3 videoView:(id)arg4 videoState:(long long)arg5 audioEnabled:(_Bool)arg6 isExistingParticipant:(_Bool)arg7;
- (void)videoCallController:(id)arg1 participantKeyStartedRinging:(id)arg2;
- (void)videoCallController:(id)arg1 didUpdateParticipantKey:(id)arg2 capabilities:(id)arg3;
- (void)videoCallController:(id)arg1 didRemoveParticipantKey:(id)arg2;
- (void)videoCallController:(id)arg1 didUpdateParticipant:(id)arg2;
- (void)videoCallController:(id)arg1 didAddParticipant:(id)arg2 isExistingParticipant:(_Bool)arg3;
- (id)videoCallController:(id)arg1 associateSessionId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)videoCallControllerDidEnd:(id)arg1 reasonCallEnded:(_Bool)arg2;
- (void)videoCallControllerDidReconnect:(id)arg1;
- (void)videoCallControllerDidDisconnect:(id)arg1;
- (void)videoCallController:(id)arg1 didFailToJoinWithError:(id)arg2;
- (void)videoCallController:(id)arg1 didJoinWithSessionId:(id)arg2 serverInfoData:(id)arg3;
- (void)_onAppWillTerminate;
- (void)_setVideoCallOverlayVisible:(_Bool)arg1;
- (void)_updateCachedThreadImmediatelyWhenCallEnded:(id)arg1;
- (void)_updateCachedThreadImmediatelyIfNeeded;
- (void)_blockUserSessionFromEnding;
- (void)_setupRTCControllerWithLoggingContext:(id)arg1 callUserType:(int)arg2;
- (void)_setupCaptureCoordinatorWithLoggingContext:(id)arg1 startWithCameraOff:(_Bool)arg2;
- (void)_teardown;
- (void)_handleExistingCallWithCompletion:(CDUnknownBlockType)arg1;
- (void)_joinRTCCallWithConfiguration:(id)arg1 session:(id)arg2 manualAudio:(_Bool)arg3;
- (id)_coWatchMappingStore;
- (id)coWatchUploadManager;
- (id)coWatchCoordinator;
- (_Bool)videoEnabled;
@property(readonly, nonatomic) id <IGVideoCallCaptureCoordinatorAREffectProtocol> captureCoordinator;
- (_Bool)hasActiveCall;
- (void)updateWithChangedPermissions;
- (id)currentVideoCallKey;
- (_Bool)callKitIsActive;
- (void)_endCallWithReason:(long long)arg1 joinContext:(id)arg2;
- (void)_rejectRingWithReason:(long long)arg1 joinContext:(id)arg2;
- (void)leaveCallWithReason:(long long)arg1;
- (void)joinDropInCall;
- (void)joinCallSession:(id)arg1 joiningFromRingScreen:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentVideoCallFromUserActivityForThread:(id)arg1 entry:(id)arg2;
- (void)startCallWithActivity:(id)arg1;
- (void)startCallSession:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_logCallEnded:(id)arg1;
- (void)_logCallStarted:(id)arg1;
- (id)initWithUserSession:(id)arg1 presenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

