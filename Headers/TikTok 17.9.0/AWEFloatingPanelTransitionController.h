//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPanelTransitionController.h"

@class UIPanGestureRecognizer;

@interface AWEFloatingPanelTransitionController : AWEPanelTransitionController
{
    _Bool _panning;
    _Bool _shouldPinScrollView;
    unsigned long long _panelPosition;
    double _presentedHalfHeight;
    double _presentedFullHeight;
    double _presentedInitialHeight;
    double _presentedContainerHeight;
    double _deltaYWhenScrollViewPinned;
    UIPanGestureRecognizer *_scrollViewPanGestureRecognizer;
    struct CGPoint _scrollViewPinedContentOffset;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIPanGestureRecognizer *scrollViewPanGestureRecognizer; // @synthesize scrollViewPanGestureRecognizer=_scrollViewPanGestureRecognizer;
@property(nonatomic) struct CGPoint scrollViewPinedContentOffset; // @synthesize scrollViewPinedContentOffset=_scrollViewPinedContentOffset;
@property(nonatomic) double deltaYWhenScrollViewPinned; // @synthesize deltaYWhenScrollViewPinned=_deltaYWhenScrollViewPinned;
@property(nonatomic) _Bool shouldPinScrollView; // @synthesize shouldPinScrollView=_shouldPinScrollView;
@property(nonatomic) double presentedContainerHeight; // @synthesize presentedContainerHeight=_presentedContainerHeight;
@property(nonatomic) double presentedInitialHeight; // @synthesize presentedInitialHeight=_presentedInitialHeight;
@property(nonatomic) double presentedFullHeight; // @synthesize presentedFullHeight=_presentedFullHeight;
@property(nonatomic) double presentedHalfHeight; // @synthesize presentedHalfHeight=_presentedHalfHeight;
@property(nonatomic, getter=isPanning) _Bool panning; // @synthesize panning=_panning;
@property(nonatomic) unsigned long long panelPosition; // @synthesize panelPosition=_panelPosition;
- (void)scrollViewPanned:(id)arg1;
- (void)continuousScrollViewDidScroll:(id)arg1;
- (void)setupContinuousScrollingWithScrollView:(id)arg1;
- (void)presentedViewPanned:(id)arg1;
- (void)updateToHalfHeightAnimated:(_Bool)arg1 sender:(id)arg2;
- (void)updateToFullHeightAnimated:(_Bool)arg1 sender:(id)arg2;
- (void)notifyDidEndPanningIfNeededWithSender:(id)arg1 targetPostion:(unsigned long long)arg2;
- (void)markPanningAlreadyFinishedIfNeededWithSender:(id)arg1;
- (void)finishPanningIfNeededWithDelta:(double)arg1 velocity:(double)arg2 sender:(id)arg3;
- (void)finishPanningWithNewHeight:(double)arg1 velocity:(double)arg2 sender:(id)arg3;
- (void)updatePanningIfNeededWithDelta:(double)arg1 sender:(id)arg2;
- (void)beginPanningIfNeededWithSender:(id)arg1;
- (void)collectPanningHeightData;
- (_Bool)shouldBeginPanningWithSender:(id)arg1;
- (void)setPanelPosition:(unsigned long long)arg1 animated:(_Bool)arg2;
- (struct CGRect)finalFrameForPresentedViewController:(id)arg1 transitionContext:(id)arg2;
- (struct CGRect)initialFrameForPresentedViewController:(id)arg1 transitionContext:(id)arg2;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end

