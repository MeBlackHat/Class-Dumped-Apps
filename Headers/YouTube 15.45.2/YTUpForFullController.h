//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class GIMMe, NSString, UIPanGestureRecognizer, YTPlayerResponse;
@protocol YTUpForFullControllerDelegate;

@interface YTUpForFullController : NSObject <UIGestureRecognizerDelegate>
{
    id <YTUpForFullControllerDelegate> _delegate;
    YTPlayerResponse *_playerResponse;
    _Bool _upForFullPortraitAllowed;
    _Bool _upForFullLandscapeAllowed;
    _Bool _isGestureFeedbackEnabledInternal;
    _Bool _gestureFeedbackEnabled;
    GIMMe *_gimme;
    UIPanGestureRecognizer *_fullscreenEnterGestureRecognizer;
    double _gestureFeedbackMaxVideoScaleFactor;
    double _gestureFeedbackScaleMultiplier;
    double _gestureFeedbackTranslationMultiplier;
}

- (void).cxx_destruct;
@property(nonatomic) double gestureFeedbackTranslationMultiplier; // @synthesize gestureFeedbackTranslationMultiplier=_gestureFeedbackTranslationMultiplier;
@property(nonatomic) double gestureFeedbackScaleMultiplier; // @synthesize gestureFeedbackScaleMultiplier=_gestureFeedbackScaleMultiplier;
@property(nonatomic) double gestureFeedbackMaxVideoScaleFactor; // @synthesize gestureFeedbackMaxVideoScaleFactor=_gestureFeedbackMaxVideoScaleFactor;
@property(nonatomic, getter=isGestureFeedbackEnabled) _Bool gestureFeedbackEnabled; // @synthesize gestureFeedbackEnabled=_gestureFeedbackEnabled;
@property(readonly, nonatomic) UIPanGestureRecognizer *fullscreenEnterGestureRecognizer; // @synthesize fullscreenEnterGestureRecognizer=_fullscreenEnterGestureRecognizer;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (_Bool)isGestureEnabledForCurrentOrientation;
- (void)resetRenderingView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleFullscreenEnterGestureChanged:(id)arg1;
- (void)handleFullscreenEnterGestureEnded:(id)arg1;
- (void)handleFullscreenEnterGestureBegan:(id)arg1;
- (void)didRecognizeFullscreenEnterPan:(id)arg1;
- (void)setPlayerResponse:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

