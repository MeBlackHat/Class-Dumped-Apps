//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTGiftAnimationActions-Protocol.h"
#import "IESLiveMTSmallGiftActions-Protocol.h"

@class HTSLiveMessageFakedFilter, IESLiveComponentContext, LiveRoomModel, NSString, RACDisposable;
@protocol HTSLiveDetailRouter, HTSLiveViewHierarchyProvider, IESLiveLandscapeService, IESLiveMTEffectPlayerRouter, IESLiveMTGiftAnimationReaction, IESLiveMTMessageListRouter, IESLiveMTNativeAnimationEventAction, IESLiveMTPlayerControlViewHierarchyProvider, IESLiveMTSmallGiftActions, IESLiveMTUserPreviewRouter, IESLiveSettings, IESLiveUserService;

@interface IESLiveMTSmallGiftAnimationStore : NSObject <IESLiveMTGiftAnimationActions, IESLiveMTSmallGiftActions>
{
    _Bool _isHideComponent;
    _Bool _disableGiftAnimation;
    LiveRoomModel *_roomModel;
    id <IESLiveMTGiftAnimationReaction> _animationReaction;
    RACDisposable *_disposable;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _settings;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveMTNativeAnimationEventAction> _eventActionCreator;
    IESLiveComponentContext *_componentContext;
    id <IESLiveMTPlayerControlViewHierarchyProvider> _playerControlProvider;
    id <IESLiveUserService> _userService;
    id <IESLiveMTSmallGiftActions> _smallGiftActions;
    id <IESLiveMTEffectPlayerRouter> _effectPlayerRouter;
    id <IESLiveMTUserPreviewRouter> _userPreviewRouter;
    id <IESLiveLandscapeService> _landscapeService;
    id <IESLiveMTMessageListRouter> _messageListRouter;
    HTSLiveMessageFakedFilter *_messageFakedFilter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HTSLiveMessageFakedFilter *messageFakedFilter; // @synthesize messageFakedFilter=_messageFakedFilter;
@property(nonatomic) _Bool disableGiftAnimation; // @synthesize disableGiftAnimation=_disableGiftAnimation;
@property(nonatomic) _Bool isHideComponent; // @synthesize isHideComponent=_isHideComponent;
@property(retain, nonatomic) id <IESLiveMTMessageListRouter> messageListRouter; // @synthesize messageListRouter=_messageListRouter;
@property(retain, nonatomic) id <IESLiveLandscapeService> landscapeService; // @synthesize landscapeService=_landscapeService;
@property(retain, nonatomic) id <IESLiveMTUserPreviewRouter> userPreviewRouter; // @synthesize userPreviewRouter=_userPreviewRouter;
@property(retain, nonatomic) id <IESLiveMTEffectPlayerRouter> effectPlayerRouter; // @synthesize effectPlayerRouter=_effectPlayerRouter;
@property(retain, nonatomic) id <IESLiveMTSmallGiftActions> smallGiftActions; // @synthesize smallGiftActions=_smallGiftActions;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveMTPlayerControlViewHierarchyProvider> playerControlProvider; // @synthesize playerControlProvider=_playerControlProvider;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(nonatomic) __weak id <IESLiveMTNativeAnimationEventAction> eventActionCreator; // @synthesize eventActionCreator=_eventActionCreator;
@property(nonatomic) __weak id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak id <IESLiveMTGiftAnimationReaction> animationReaction; // @synthesize animationReaction=_animationReaction;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void)enableGiftAnimation:(_Bool)arg1;
- (id)configurationWithComponentContext:(id)arg1;
- (void)showUserPreView:(id)arg1 trackerLabel:(id)arg2;
- (void)showComponent;
- (void)hideComponent;
- (void)resetSmallGiftFrame;
- (void)setConfigurationOriginY:(double)arg1;
- (void)showGiftMessageNode:(id)arg1 inContainer:(id)arg2 isCombo:(_Bool)arg3;
- (void)handleGiftNode:(id)arg1 inContainer:(id)arg2 isCombo:(_Bool)arg3;
- (void)addGiftNodeWith:(id)arg1;
- (void)componentOrientationChanged:(long long)arg1;
- (void)clear;
- (void)setup;
- (id)initWithRoomModel:(id)arg1 componentContext:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

