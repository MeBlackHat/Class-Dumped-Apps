//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveFaceStickersViewDelegate-Protocol.h"
#import "IESLiveFaceStickerRouter-Protocol.h"

@class HTSEventContext, HTSLiveFaceStickersView, HTSLiveToolbarItem, IESEffectModel, IESEffectPlatformResponseModel, IESLiveFaceStickerViewModel, IESLiveGiftSticker, IESLiveGiftStickerQueue, LiveRoomModel, NSIndexPath, NSMutableArray, NSString, NSTimer, UILabel, UIView;
@protocol HTSLiveCameraEffectProvider, HTSLiveDetailRouter, HTSLiveToolbarProvider, HTSLiveViewHierarchyProvider, IESActionDispatcher, IESLiveCamera, IESLiveEffectConflictHelper, IESLiveEffectPlatformConfig, IESLiveEffectPlatformService, IESLiveEffectRepelChangeActions, IESLiveEnvironment, IESLiveMonitor, IESLiveProjectTStickerService, IESLiveSettings, IESLiveStickerPickerService, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface HTSLiveFaceStickerFragment : NSObject <HTSLiveFaceStickersViewDelegate, IESLiveFaceStickerRouter, HTSLiveComponent>
{
    _Bool _needDownload;
    LiveRoomModel *_roomModel;
    HTSEventContext *_trackContext;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    id <HTSLiveCameraEffectProvider> _cameraEffectProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveTracker> _tracker;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveMonitor> _monitor;
    id <IESLiveEffectPlatformConfig> _config;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveEffectPlatformService> _effectPlatformService;
    id <IESLiveUserService> _userService;
    id <IESLiveEffectRepelChangeActions> _effectRepelActionCreator;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveProjectTStickerService> _projectTStickerService;
    id <IESLiveEffectConflictHelper> _repelHelper;
    id <IESLiveCamera> _camera;
    id <HTSLiveDetailRouter> _detailRouter;
    id <IESLiveStickerPickerService> _stickerPickerService;
    UIView *_faceAlertView;
    NSMutableArray *_myEffects;
    UILabel *_hintLabel;
    NSTimer *_stickerReportTimer;
    unsigned long long _stickerUsedTime;
    unsigned long long _stickerEffectivelyUseTime;
    NSString *_currentEffectIdentifier;
    IESEffectModel *_currentSticker;
    NSIndexPath *_selectedIndexPath;
    long long _selectedCategoryIndex;
    HTSLiveFaceStickersView *_popupView;
    HTSLiveToolbarItem *_toolBarItem;
    IESEffectPlatformResponseModel *_responseModel;
    IESLiveFaceStickerViewModel *_stickerViewModel;
    IESLiveGiftStickerQueue *_stickerQueue;
    IESLiveGiftSticker *_lastGiftSticker;
    CDUnknownBlockType _stickerEndBlock;
    IESEffectModel *_initialSticker;
    double _lastStickerStartUseTime;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) double lastStickerStartUseTime; // @synthesize lastStickerStartUseTime=_lastStickerStartUseTime;
@property(nonatomic) _Bool needDownload; // @synthesize needDownload=_needDownload;
@property(retain, nonatomic) IESEffectModel *initialSticker; // @synthesize initialSticker=_initialSticker;
@property(copy, nonatomic) CDUnknownBlockType stickerEndBlock; // @synthesize stickerEndBlock=_stickerEndBlock;
@property(retain, nonatomic) IESLiveGiftSticker *lastGiftSticker; // @synthesize lastGiftSticker=_lastGiftSticker;
@property(retain, nonatomic) IESLiveGiftStickerQueue *stickerQueue; // @synthesize stickerQueue=_stickerQueue;
@property(retain, nonatomic) IESLiveFaceStickerViewModel *stickerViewModel; // @synthesize stickerViewModel=_stickerViewModel;
@property(retain, nonatomic) IESEffectPlatformResponseModel *responseModel; // @synthesize responseModel=_responseModel;
@property(nonatomic) __weak HTSLiveToolbarItem *toolBarItem; // @synthesize toolBarItem=_toolBarItem;
@property(nonatomic) __weak HTSLiveFaceStickersView *popupView; // @synthesize popupView=_popupView;
@property(nonatomic) long long selectedCategoryIndex; // @synthesize selectedCategoryIndex=_selectedCategoryIndex;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) IESEffectModel *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(copy, nonatomic) NSString *currentEffectIdentifier; // @synthesize currentEffectIdentifier=_currentEffectIdentifier;
@property(nonatomic) unsigned long long stickerEffectivelyUseTime; // @synthesize stickerEffectivelyUseTime=_stickerEffectivelyUseTime;
@property(nonatomic) unsigned long long stickerUsedTime; // @synthesize stickerUsedTime=_stickerUsedTime;
@property(retain, nonatomic) NSTimer *stickerReportTimer; // @synthesize stickerReportTimer=_stickerReportTimer;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) NSMutableArray *myEffects; // @synthesize myEffects=_myEffects;
@property(retain, nonatomic) UIView *faceAlertView; // @synthesize faceAlertView=_faceAlertView;
@property(retain, nonatomic) id <IESLiveStickerPickerService> stickerPickerService; // @synthesize stickerPickerService=_stickerPickerService;
@property(retain, nonatomic) id <HTSLiveDetailRouter> detailRouter; // @synthesize detailRouter=_detailRouter;
@property(retain, nonatomic) id <IESLiveCamera> camera; // @synthesize camera=_camera;
@property(retain, nonatomic) id <IESLiveEffectConflictHelper> repelHelper; // @synthesize repelHelper=_repelHelper;
@property(retain, nonatomic) id <IESLiveProjectTStickerService> projectTStickerService; // @synthesize projectTStickerService=_projectTStickerService;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveEffectRepelChangeActions> effectRepelActionCreator; // @synthesize effectRepelActionCreator=_effectRepelActionCreator;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveEffectPlatformService> effectPlatformService; // @synthesize effectPlatformService=_effectPlatformService;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveEffectPlatformConfig> config; // @synthesize config=_config;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveCameraEffectProvider> cameraEffectProvider; // @synthesize cameraEffectProvider=_cameraEffectProvider;
@property(nonatomic) __weak id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (_Bool)isApplyFaceSticker;
- (id)modelWithIndexPath:(id)arg1;
- (_Bool)isPlayingEffectGame;
- (void)resumeCurrentFaceSticker;
- (void)removeCurrentExclusiveFaceSticker;
- (void)hideCurrentFaceSticker;
- (_Bool)canReplaceCurrentSticker;
- (void)eraseCurrentSticker;
- (void)showSticker:(id)arg1;
- (void)showSticker:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (id)indexPathForEffectModel:(id)arg1;
- (void)cameraDidSet;
- (void)openFaceStickerPanel;
- (void)showEntrance;
- (void)_trackVideoStickerCountIfNeeded;
- (void)_trackLastStickerUseTime;
- (void)_hideFaceAlertView;
- (void)_showHintLabel:(id)arg1;
- (void)_showFaceAlertView;
- (void)_removeAllDetectHandler;
- (void)_addFaceDetectHandlerIfNeeded;
- (void)_selectFaceSticker:(id)arg1;
- (void)faceStickersView:(id)arg1 didDownloadedEffectWithId:(id)arg2 withError:(id)arg3 duration:(double)arg4;
- (void)cleanEffects;
- (void)onOldGestureStickerSelected;
- (void)faceStickerView:(id)arg1 selectedCategoryIndexChanged:(unsigned long long)arg2;
- (void)performSelectStickerWithModel:(id)arg1 indexPath:(id)arg2 isInitial:(_Bool)arg3;
- (void)faceStickerView:(id)arg1 selectedIndexPathChanged:(id)arg2;
- (id)getStickerPickerService;
- (void)clearStickerReportTimer;
- (void)stickerUsedCount;
- (void)showFaceStickersView;
- (void)loadStickerQueue;
- (void)loadToolbarItem;
- (void)applyInitialStickerIfNeeded;
- (void)bindAction;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (void)downloadEffects;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;
- (id)providedRouter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

