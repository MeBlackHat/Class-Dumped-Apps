//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSLiveMediaStreamEngineDelegate-Protocol.h"
#import "HTSLiveStreamEngineProvider-Protocol.h"
#import "IESLiveAnchorReaction-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class HTSEventContext, HTSLive4LayerContainerView, HTSLiveAnchorActionCreator, HTSLiveMessageActionCreator, HTSLivePluginLayoutMachine, HTSLiveRecordCameraProcesser, IESLiveAnchorStore, IESLiveComponentContext, IESLiveComponentLoader, LiveStreamCapture, NSString, NSTimer;
@protocol HTSLiveAutoHideAction, HTSLiveDetailRouter, HTSLiveMediaStreamEngine, IESLiveAudienceRoomAwareness, IESLiveCamera, IESLiveDI, IESLiveEffectConflictHelper, IESLiveEnvironment, IESLiveFinishViewFactory, IESLiveMonitor, IESLiveRecoder, IESLiveSettings, IESLiveToastFactory, IESLiveTracker;

@interface HTSLiveAnchorViewController : UIViewController <HTSLiveMediaStreamEngineDelegate, HTSLiveStreamEngineProvider, UIGestureRecognizerDelegate, IESLiveAnchorReaction>
{
    _Bool _pluginLoaded;
    _Bool _needStartLive;
    _Bool _enableCloseAction;
    id <HTSLiveMediaStreamEngine> _engine;
    IESLiveComponentContext *_componentContext;
    HTSEventContext *_pageContext;
    IESLiveAnchorStore *_store;
    id <IESLiveCamera> _camera;
    id <IESLiveEffectConflictHelper> _repelHelper;
    LiveStreamCapture *_liveCapture;
    id <IESLiveDI> _roomDI;
    IESLiveComponentLoader *_componentLoader;
    HTSLiveMessageActionCreator *_messageActionCreator;
    HTSLive4LayerContainerView *_containerView;
    HTSLiveAnchorActionCreator *_anchorActionCreator;
    id <HTSLiveAutoHideAction> _autoHideActionCreator;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveTracker> _tracker;
    id <IESLiveMonitor> _monitor;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveFinishViewFactory> _finishViewFactory;
    id <IESLiveAudienceRoomAwareness> _audienceAwareness;
    HTSLivePluginLayoutMachine *_pluginLayoutMachine;
    NSTimer *_aliveTimer;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveRecoder> _recorder;
    HTSLiveRecordCameraProcesser *_cameraProcessor;
}

@property(retain, nonatomic) HTSLiveRecordCameraProcesser *cameraProcessor; // @synthesize cameraProcessor=_cameraProcessor;
@property(retain, nonatomic) id <IESLiveRecoder> recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) _Bool enableCloseAction; // @synthesize enableCloseAction=_enableCloseAction;
@property(retain, nonatomic) NSTimer *aliveTimer; // @synthesize aliveTimer=_aliveTimer;
@property(retain, nonatomic) HTSLivePluginLayoutMachine *pluginLayoutMachine; // @synthesize pluginLayoutMachine=_pluginLayoutMachine;
@property(retain, nonatomic) id <IESLiveAudienceRoomAwareness> audienceAwareness; // @synthesize audienceAwareness=_audienceAwareness;
@property(retain, nonatomic) id <IESLiveFinishViewFactory> finishViewFactory; // @synthesize finishViewFactory=_finishViewFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <HTSLiveAutoHideAction> autoHideActionCreator; // @synthesize autoHideActionCreator=_autoHideActionCreator;
@property(retain, nonatomic) HTSLiveAnchorActionCreator *anchorActionCreator; // @synthesize anchorActionCreator=_anchorActionCreator;
@property(nonatomic) __weak HTSLive4LayerContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) HTSLiveMessageActionCreator *messageActionCreator; // @synthesize messageActionCreator=_messageActionCreator;
@property(retain, nonatomic) IESLiveComponentLoader *componentLoader; // @synthesize componentLoader=_componentLoader;
@property(retain, nonatomic) id <IESLiveDI> roomDI; // @synthesize roomDI=_roomDI;
@property(retain, nonatomic) LiveStreamCapture *liveCapture; // @synthesize liveCapture=_liveCapture;
@property(retain, nonatomic) id <IESLiveEffectConflictHelper> repelHelper; // @synthesize repelHelper=_repelHelper;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
@property(retain, nonatomic) IESLiveAnchorStore *store; // @synthesize store=_store;
@property(retain, nonatomic) HTSEventContext *pageContext; // @synthesize pageContext=_pageContext;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) id <HTSLiveMediaStreamEngine> engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)startAliveTimer;
- (void)stopAliveTimer;
- (void)didClickCloseButton;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didClickContainerView:(id)arg1;
- (void)loadTapGuestureRecognizer;
- (void)_clearAndQuit;
- (void)clickCloseButton:(id)arg1;
- (void)loadPluginComponents;
- (void)preloadPluginComponents;
- (void)engine:(id)arg1 detectsCriticalError:(id)arg2;
- (void)getPerformance;
- (void)engine:(id)arg1 stateChanged:(long long)arg2;
- (id)streamEngine;
- (_Bool)_closeRoomByForce:(_Bool)arg1;
- (void)showFinishViewController:(id)arg1;
- (id)createFinishViewControllerWithRoom:(id)arg1 forbiddenUrl:(id)arg2 title:(id)arg3 violationReason:(id)arg4 displayText:(id)arg5;
- (void)clearControllerAndShowFinishWithRoom:(id)arg1 forbiddenUrl:(id)arg2 title:(id)arg3 violationReason:(id)arg4 displayText:(id)arg5;
- (void)_clear;
- (void)prepareForClose;
- (void)startLive;
- (void)startLiveIfNeeded;
- (void)setNeedStartLive;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)onAppDidEnterBackground;
- (void)onAppWillResignActive;
- (void)onAppBecomeActive;
- (void)prepareStreamCapture;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAnchorStore:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

