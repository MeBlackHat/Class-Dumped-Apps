//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;
@protocol TransitionDelegate;

@interface AbstractTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    _Bool _animating;
    id <TransitionDelegate> _delegate;
}

@property(nonatomic) __weak id <TransitionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)animateTransitionDidStart;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

