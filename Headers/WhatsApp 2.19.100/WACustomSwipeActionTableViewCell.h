//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WACustomSwipeActionContainerViewDelegate-Protocol.h"

@class NSString, UIView, WACustomSwipeActionContainerView;
@protocol WACustomSwipeActionTableViewCellController;

@interface WACustomSwipeActionTableViewCell : UITableViewCell <WACustomSwipeActionContainerViewDelegate>
{
    WACustomSwipeActionContainerView *_swipeActionsView;
    UIView *_customBackgroundView;
    double _gestureStartLocation;
    unsigned long long _gestureID;
    double _initialOffset;
    _Bool _needsSeparatorAdjustment;
    long long _swipeState;
    double _targetOffset;
    id <WACustomSwipeActionTableViewCellController> _controller;
}

+ (id)customSwipeActionsContainerWithDelegate:(id)arg1;
@property(nonatomic) __weak id <WACustomSwipeActionTableViewCellController> controller; // @synthesize controller=_controller;
@property(nonatomic) double targetOffset; // @synthesize targetOffset=_targetOffset;
@property(nonatomic) long long swipeState; // @synthesize swipeState=_swipeState;
- (void).cxx_destruct;
- (void)actionCompletedInContainerView:(id)arg1 performed:(_Bool)arg2;
- (void)onGestureEnded:(id)arg1;
- (void)completeAnimationWithTotalPanVelocity:(double)arg1 targetOffset:(double)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)onGestureChanged:(id)arg1;
- (void)setPanOffset:(double)arg1;
- (id)newConfigurationForRightSide:(_Bool)arg1;
- (_Bool)canStartNewGestureWithPanMagnitude:(double)arg1 gesture:(id)arg2;
- (void)onGestureBegan:(id)arg1;
- (id)trailingSwipeActions;
- (id)leadingSwipeActions;
- (_Bool)handleHitTestWithMaskViewForTouchInCellAt:(struct CGPoint)arg1;
@property(readonly, nonatomic) _Bool isActive;
- (void)collapseActionViews:(_Bool)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)removeAllAnimations;
- (void)reloadFonts;
- (double)currentContentOffset;
- (void)layoutUntransformedSubviews;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (_Bool)useFastCompletionAnimations;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

