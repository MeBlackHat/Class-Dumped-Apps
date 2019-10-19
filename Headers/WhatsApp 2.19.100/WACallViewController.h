//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WACallButtonsViewDelegate-Protocol.h"
#import "WACallHeaderViewDelegate-Protocol.h"
#import "WACallManagerDelegate-Protocol.h"
#import "WACallSpamReportViewDelegate-Protocol.h"
#import "WACallVideoViewDelegate-Protocol.h"
#import "WACallViewDelegate-Protocol.h"
#import "WASinglePersonPickerDelegate-Protocol.h"
#import "WAVoiceCallInteractionBlockingViewDelegate-Protocol.h"
#import "WAVoiceCallRatingOptionsViewDelegate-Protocol.h"
#import "WAVoiceCallRatingViewDelegate-Protocol.h"

@class MPVolumeView, NSObject, NSString, NSTimer, UIImage, UIPanGestureRecognizer, WACallOverlayController, WACallView, WALayoutBoundsManager, WAVoiceCallInteractionBlockingView, _WATouchCapturingGestureRecognizer;
@protocol OS_dispatch_queue, WACallViewControllerDelegate;

@interface WACallViewController : WAViewController <UIGestureRecognizerDelegate, WAVoiceCallInteractionBlockingViewDelegate, CLLocationManagerDelegate, WAVoiceCallRatingViewDelegate, WAVoiceCallRatingOptionsViewDelegate, WACallButtonsViewDelegate, WACallSpamReportViewDelegate, WACallViewDelegate, WACallHeaderViewDelegate, WACallVideoViewDelegate, WASinglePersonPickerDelegate, WACallManagerDelegate>
{
    NSTimer *_timer;
    UIImage *_blurredImage;
    unsigned long long _backgroundTask;
    WACallView *_callView;
    _Bool _minimized;
    _Bool _changingMinimizedState;
    _Bool _shouldMaximize;
    _Bool _isMonitoringProximity;
    double _lastBatteryPrintTime;
    int _oldState;
    _Bool _idleTimerDisabled;
    double _batteryLevelTime;
    double _lastBatteryLevel;
    long long _callRating;
    _Bool _videoCall;
    MPVolumeView *_audioRouteButton;
    WAVoiceCallInteractionBlockingView *_interactionBlockingView;
    _WATouchCapturingGestureRecognizer *_touchCapturingRecognizer;
    NSTimer *_delayedInteractionBlockingTimer;
    _Bool _videoCallConnected;
    NSTimer *_toggleButtonsTimer;
    _Bool _switchingCamera;
    UIPanGestureRecognizer *_panGesture;
    WALayoutBoundsManager *_layoutBoundsManager;
    _Bool _dragging;
    struct CGPoint _initialPanPoint;
    struct CGRect _initialWindowFrame;
    double _initialMinimizedViewBottomOffset;
    double _initialMinimizedViewTopOffset;
    struct CGRect _finalWindowFrame;
    double _finalWindowCornerRadius;
    WACallOverlayController *_callOverlayController;
    struct WACallOverlayAnchorsWithOffset _callOverlayAnchors;
    int minimizedVideoViewAnchorLocation;
    _Bool _adjustAudioRouteAfterTransition;
    NSObject<OS_dispatch_queue> *_serialAudioRouteQueue;
    _Bool _addParticipantConfirmationCountIncreased;
    _Bool _outgoingCall;
    _Bool _callSwitched;
    _Bool _hasShownWeakWiFiSwitchingToCellularStatusText;
    int _callState;
    id <WACallViewControllerDelegate> _delegate;
}

@property(nonatomic) int callState; // @synthesize callState=_callState;
@property(readonly, nonatomic, getter=isChangingMinimizedState) _Bool changingMinimizedState; // @synthesize changingMinimizedState=_changingMinimizedState;
@property(readonly, nonatomic, getter=isMinimized) _Bool minimized; // @synthesize minimized=_minimized;
@property(nonatomic) __weak id <WACallViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) WACallView *callView; // @synthesize callView=_callView;
- (void).cxx_destruct;
- (_Bool)singlePersonPickerShouldSearchPushNamesForChatsSection:(id)arg1;
- (id)excludedJIDsForWASinglePersonPicker:(id)arg1;
- (void)singlePersonPickerDidCancel:(id)arg1;
- (void)addParticipantJID:(id)arg1;
- (void)singlePersonPicker:(id)arg1 didSelectContact:(id)arg2 frequentlyContacted:(_Bool)arg3;
- (void)callVideoView:(id)arg1 didRequestCancelGroupCallInviteToPaticipantJID:(id)arg2;
- (void)callVideoViewDidRequestCancelUpgrade:(id)arg1;
- (void)callHeaderViewDidRequestDetailedInfoView:(id)arg1;
- (void)callHeaderViewDidRequestInfoView:(id)arg1;
- (void)callHeaderViewDidRequestBack:(id)arg1;
- (void)callHeaderViewDidRequestAddParticipant:(id)arg1;
- (void)callManagerDidSwitchWeakWiFiToCellular:(id)arg1;
- (void)callManagerDidSwitchCall:(id)arg1 outgoing:(_Bool)arg2;
- (void)callManagerDidRequestVoiceCallInterface:(id)arg1;
- (void)callManagerDidRequestVideoCallInterface:(id)arg1;
- (void)callManagerDidChangePeerVideoState:(id)arg1;
- (void)callManagerDidChangeSelfVideoState:(id)arg1;
- (void)callManagerDidChangeGroupInfo:(id)arg1;
- (void)handleVideoCallUpgradeCompleted;
- (void)callManager:(id)arg1 didEndCallWithParticipantJIDs:(id)arg2 forReason:(unsigned long long)arg3 clearParticipants:(_Bool)arg4;
- (void)callManager:(id)arg1 didChangeState:(int)arg2;
- (void)audioSessionRouteChanged:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)updateAudioRoute;
- (void)proximityStateDidChange:(id)arg1;
- (void)stopMonitoringProximity;
- (void)startMonitoringProximityIfNeeded;
- (void)updateProximityMonitoring;
@property(readonly, nonatomic, getter=isCallRatingViewVisible) _Bool callRatingViewVisible;
- (void)dismissCallRatingScreen;
- (void)showCallRatingScreen;
- (void)voiceCallRatingOptionsView:(id)arg1 didFinishWithAction:(unsigned long long)arg2;
- (void)voiceCallRatingView:(id)arg1 didFinishWithAction:(unsigned long long)arg2;
@property(readonly, nonatomic, getter=isSpamReportViewVisible) _Bool spamReportViewVisible;
- (void)dismissSpamReportScreen;
- (void)showSpamReportScreen;
- (void)callSpamReportView:(id)arg1 didFinishWithAction:(unsigned long long)arg2;
- (void)remindToCallWhenLeaving;
- (void)remindToCallInOneHour;
- (id)createReminder;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)requestUpgradeToVideoCall;
- (void)turnCameraOff;
- (void)turnCameraOn;
- (void)showErrorAlertWithTitle:(id)arg1;
- (void)requestMaximizeAnimated:(_Bool)arg1;
- (void)becomeActiveFromView:(id)arg1;
- (void)minimize;
- (void)rejectCallAndGoToChatView;
- (void)callButtonsViewDidToggleVideo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)rejectCallAndSendMessageText:(id)arg1;
- (void)callButtonsViewDidRequestCancelAndSendMessage:(id)arg1;
- (void)callButtonsViewDidToggleSpeaker:(id)arg1;
- (void)callButtonsViewDidRequestSwitchCamera:(id)arg1;
- (void)callButtonsView:(id)arg1 didRequestSetMute:(_Bool)arg2;
- (void)callButtonsViewDidRequestAcceptOrEndCall:(id)arg1;
- (_Bool)callManager:(id)arg1 willTryToShowAlertView:(id)arg2;
- (void)callButtonsViewDidRequestCancelAndAddReminder:(id)arg1;
- (void)callButtonsViewDidRequestRejectCall:(id)arg1;
- (_Bool)callViewDidGetSelectedByVoiceOver:(id)arg1;
- (void)callView:(id)arg1 didCancellCallToParticipantJID:(id)arg2;
- (void)rejectCall;
- (void)endCall;
- (void)reallyDismissWithDelayIfNeeded:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismiss:(_Bool)arg1;
@property(readonly, nonatomic, getter=isCallEnding) _Bool callEnding;
- (_Bool)isTransitioningToVideoCall;
- (void)setCallState:(int)arg1 animated:(_Bool)arg2;
- (void)appWillResignActive:(id)arg1;
- (void)applicationDidChangeStatusBarFrame:(id)arg1;
- (void)printBatteryLevel;
- (_Bool)canShowOverlay;
- (void)updateCallStateLabels;
- (void)updateCallViewParticipantInformationWithInfo:(id)arg1 pendingCall:(_Bool)arg2;
- (void)timerFired:(id)arg1;
- (void)updateBatteryState;
- (void)updateBatteryStateWithTimeInterval:(double)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)wa_prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)endDisablingApplicationIdleTimer;
- (void)beginDisablingApplicationIdleTimer;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupCallView;
- (long long)preferredStatusBarStyle;
- (void)setBlurredImageFromView:(id)arg1;
- (void)prepareToAnimateInFromView:(id)arg1;
- (id)uniqueIdentifier;
- (void)dealloc;
- (void)registerNotifications;
- (void)resetToDefaultState;
- (id)initWithInitialStateOutgoing:(_Bool)arg1 isVideoCall:(_Bool)arg2;
- (struct CGSize)sizeForPercentage:(double)arg1 initialFrameSize:(struct CGSize)arg2 finalFrameSize:(struct CGSize)arg3;
- (struct CGPoint)largeVideoViewOriginForPercentage:(double)arg1 initialLargeVideoFrame:(struct CGRect)arg2 finalLargeVideoFrame:(struct CGRect)arg3 currentFrameSize:(struct CGSize)arg4;
- (void)computeFinalFrames;
- (void)computeInitialFrames;
- (void)computeAnchorForVelocity:(struct CGPoint)arg1;
- (void)setViewFrame:(struct CGRect)arg1;
- (void)transformVideoViewsWithPercentage:(double)arg1;
- (void)completeMinimizeWithVelocity:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)videoMinimize;
- (void)videoMaximizeAnimated:(_Bool)arg1;
- (void)minimizeWithPan:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateVideoInterfaceForCurrentAudioRoute;
- (void)videoGroupInfoChanged;
@property(readonly, nonatomic) _Bool isSelfVideoFullScreen;
- (void)rotateViewsWithAngle:(double)arg1;
- (void)rotateViewsIfNeeded;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)setButtonsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideButtons;
- (void)setHideButtonsTimer;
- (void)viewTapped:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (long long)videoPreferredStatusBarUpdateAnimation;
- (_Bool)videoPrefersStatusBarHidden;
- (void)videoViewDidGetTapped;
- (void)switchCamera;
- (void)showVideoAudioSourceOrMute:(_Bool)arg1;
- (id)audioRouteImageFromType:(int)arg1;
- (void)videoCallStateDidChangeToCalling;
- (void)videoCallDidConnect;
- (int)minimizedVideoViewAnchorLocation;
- (void)videoViewDidDisappear;
- (void)videoViewDidAppear;
- (void)videoSetUpCallView:(id)arg1;
- (void)voiceOverStatusChanged:(id)arg1;
- (void)videoInit;
- (void)voiceCallInteractionBlockingViewDidUnlock:(id)arg1;
- (void)didTouch;
- (void)setUpTouchCapturingRecognizerIfNeeded;
- (void)cancelDelayedInteractionBlocking;
- (void)startDelayedInteractionBlocking;
- (void)restartDelayedInteractionBlocking;
- (void)hideInteractionBlockingView;
- (void)setUpInteractionBlockingViewIfNeeded;
- (void)showInteractionBlockingView;
- (void)stopInteractionBlockingIfNeeded;
- (void)startInteractionBlockingIfNeeded;
- (void)updateVoiceInterfaceForCurrentAudioRoute;
- (void)voiceCallButtonsViewDidToggleSpeaker:(id)arg1;
- (void)showAudioRoutePicker;
- (void)installInvisibleAudioRouteButtonIfNeeded;
- (void)voiceSetUpCallView:(id)arg1;
- (void)voiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

