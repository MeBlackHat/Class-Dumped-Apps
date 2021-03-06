//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGTransitionAnimationPanResolverDelegate;

@interface IGTransitionAnimationPanResolver : NSObject
{
    _Bool _isForward;
    _Bool _allowVerticalProgress;
    struct CGPoint _initialTouchLocation;
    double _initialFractionComplete;
    id <IGTransitionAnimationPanResolverDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTransitionAnimationPanResolverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)resolvePan:(id)arg1;
- (id)initIsForward:(_Bool)arg1 allowVerticalProgress:(_Bool)arg2;

@end

