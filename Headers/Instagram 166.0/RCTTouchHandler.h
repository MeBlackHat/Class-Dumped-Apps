//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableArray, NSMutableOrderedSet, NSString, UIView;
@protocol RCTEventDispatcherProtocol;

@interface RCTTouchHandler : UIGestureRecognizer <UIGestureRecognizerDelegate>
{
    id <RCTEventDispatcherProtocol> _eventDispatcher;
    NSMutableOrderedSet *_nativeTouches;
    NSMutableArray *_reactTouches;
    NSMutableArray *_touchViews;
    UIView *_cachedRootView;
    unsigned short _coalescingKey;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)cancel;
- (void)reset;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_cacheRootView;
- (void)_updateAndDispatchTouches:(id)arg1 eventName:(id)arg2;
- (void)_updateReactTouchAtIndex:(long long)arg1;
- (void)_recordRemovedTouches:(id)arg1;
- (void)_recordNewTouches:(id)arg1;
- (void)detachFromView:(id)arg1;
- (void)attachToView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

