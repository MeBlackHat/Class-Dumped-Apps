//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "SwipeInteractionControllerAdapter-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface SwipeInteractionController : UIPercentDrivenInteractiveTransition <SwipeInteractionControllerAdapter, UIGestureRecognizerDelegate>
{
    _Bool _interactionInProgress;
    _Bool _shouldCompleteTransition;
    _Bool _forbidTransitionGes;
    _Bool _forbidSimultaneousScrollViewPanGesture;
    UIViewController *_viewController;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIView *_toViewSnapshot;
    UIView *_blackMaskView;
    struct CGRect _fromVCFrame;
}

+ (_Bool)viewControllerBasedStatusBarAppearanceEnabled;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect fromVCFrame; // @synthesize fromVCFrame=_fromVCFrame;
@property(retain, nonatomic) UIView *blackMaskView; // @synthesize blackMaskView=_blackMaskView;
@property(retain, nonatomic) UIView *toViewSnapshot; // @synthesize toViewSnapshot=_toViewSnapshot;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) _Bool forbidSimultaneousScrollViewPanGesture; // @synthesize forbidSimultaneousScrollViewPanGesture=_forbidSimultaneousScrollViewPanGesture;
@property(nonatomic) _Bool forbidTransitionGes; // @synthesize forbidTransitionGes=_forbidTransitionGes;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool shouldCompleteTransition; // @synthesize shouldCompleteTransition=_shouldCompleteTransition;
@property(nonatomic) _Bool interactionInProgress; // @synthesize interactionInProgress=_interactionInProgress;
- (double)_originYForViewController;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)prepareGestureRecognizerInView:(id)arg1;
- (void)wireToViewController:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)init;
- (void)unlockCurrentStatusBar;
- (void)lockCurrentStatusBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

