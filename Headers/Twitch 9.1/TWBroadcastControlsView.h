//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, TWBroadcastControlsViewInfo, TWBroadcastControlsViewInfoView, TWBroadcastEndButton, TWBroadcastLiveIndicator, TWGradientOverlayView, TWLockView, TWPaddedLabel, TWTimer, UIButton, UITapGestureRecognizer;
@protocol TWBroadcastControlsViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface TWBroadcastControlsView : UIView
{
    _Bool _controlsHidden;
    _Bool _showingDuration;
    unsigned long long _viewState;
    unsigned long long _viewerCount;
    double _duration;
    NSObject<TWBroadcastControlsViewInteractionDelegate> *_interactionDelegate;
    UIButton *_closeButton;
    TWBroadcastEndButton *_endButton;
    UIButton *_cameraFlipButton;
    UIButton *_moreOptionsButton;
    TWLockView *_lockView;
    TWGradientOverlayView *_topOverlayGradient;
    TWGradientOverlayView *_bottomOverlayGradient;
    TWBroadcastLiveIndicator *_liveIndicatorView;
    TWBroadcastControlsViewInfoView *_infoView;
    TWPaddedLabel *_mutedView;
    TWTimer *_autohideTimer;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showingDuration; // @synthesize showingDuration=_showingDuration;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) TWTimer *autohideTimer; // @synthesize autohideTimer=_autohideTimer;
@property(retain, nonatomic) TWPaddedLabel *mutedView; // @synthesize mutedView=_mutedView;
@property(retain, nonatomic) TWBroadcastControlsViewInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) TWBroadcastLiveIndicator *liveIndicatorView; // @synthesize liveIndicatorView=_liveIndicatorView;
@property(retain, nonatomic) TWGradientOverlayView *bottomOverlayGradient; // @synthesize bottomOverlayGradient=_bottomOverlayGradient;
@property(retain, nonatomic) TWGradientOverlayView *topOverlayGradient; // @synthesize topOverlayGradient=_topOverlayGradient;
@property(retain, nonatomic) TWLockView *lockView; // @synthesize lockView=_lockView;
@property(retain, nonatomic) UIButton *moreOptionsButton; // @synthesize moreOptionsButton=_moreOptionsButton;
@property(retain, nonatomic) UIButton *cameraFlipButton; // @synthesize cameraFlipButton=_cameraFlipButton;
@property(retain, nonatomic) TWBroadcastEndButton *endButton; // @synthesize endButton=_endButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak NSObject<TWBroadcastControlsViewInteractionDelegate> *interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(readonly, nonatomic) _Bool controlsHidden; // @synthesize controlsHidden=_controlsHidden;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long viewerCount; // @synthesize viewerCount=_viewerCount;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void)showControlsAnimated:(_Bool)arg1;
- (void)hideControlsAnimated:(_Bool)arg1;
@property(nonatomic) _Bool showMuted;
@property(retain, nonatomic) TWBroadcastControlsViewInfo *info;
- (void)updateInfo;
- (void)showControls;
- (void)hideControls;
- (void)autohideControls;
- (void)updateLiveIndicator;
- (void)tapReceived:(id)arg1;
- (void)liveIndicatorTapped:(id)arg1;
- (void)moreOptionsButtonTapped;
- (void)cameraFlipButtonTapped;
- (void)endButtonTapped;
- (void)closeButtonTapped;
- (void)layoutSubviews;
- (void)dealloc;
- (void)didMoveToSuperview;
- (id)initWithInteractionDelegate:(id)arg1;

@end

