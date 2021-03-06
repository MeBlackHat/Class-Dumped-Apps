//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GOOSideViewCarouselItem, UIView;

@interface GOOSideViewCarouselItemTransition : NSObject
{
    UIView *_containerView;
    UIView *_backgroundView;
    GOOSideViewCarouselItem *_item;
    long long _fromLocation;
    long long _toLocation;
    long long _overshootLocation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long overshootLocation; // @synthesize overshootLocation=_overshootLocation;
@property(readonly, nonatomic) long long toLocation; // @synthesize toLocation=_toLocation;
@property(readonly, nonatomic) long long fromLocation; // @synthesize fromLocation=_fromLocation;
@property(readonly, nonatomic) GOOSideViewCarouselItem *item; // @synthesize item=_item;
- (struct CGAffineTransform)transformTweenedFrom:(struct CGAffineTransform)arg1 to:(struct CGAffineTransform)arg2 overshoot:(struct CGAffineTransform)arg3 percentage:(double)arg4;
- (struct CGRect)rectTweenedFrom:(struct CGRect)arg1 to:(struct CGRect)arg2 overshoot:(struct CGRect)arg3 percentage:(double)arg4;
- (struct CGSize)sizeTweenedFrom:(struct CGSize)arg1 to:(struct CGSize)arg2 overshoot:(struct CGSize)arg3 percentage:(double)arg4;
- (struct CGPoint)pointTweenedFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 overshoot:(struct CGPoint)arg3 percentage:(double)arg4;
- (double)floatTweenedFrom:(double)arg1 to:(double)arg2 overshoot:(double)arg3 percentage:(double)arg4;
- (_Bool)backgroundShouldBeSubviewForLocation:(long long)arg1;
- (double)backgroundAlphaForLocation:(long long)arg1 shiftingLeft:(_Bool)arg2;
- (struct CGRect)backgroundFrameForLocation:(long long)arg1;
- (_Bool)labelShouldBeSubviewForLocation:(long long)arg1;
- (double)labelAlphaForLocation:(long long)arg1;
- (struct CGRect)labelFrameForLocation:(long long)arg1;
- (struct CGAffineTransform)badgeTransformForLocation:(long long)arg1;
- (struct CGPoint)badgeOffsetForLocation:(long long)arg1;
- (struct CGRect)badgeBounds;
- (struct CGAffineTransform)notificationTransformForLocation:(long long)arg1;
- (struct CGPoint)notificationOffsetForLocation:(long long)arg1;
- (struct CGRect)notificationBounds;
- (_Bool)avatarShouldBeSubviewForLocation:(long long)arg1;
- (double)avatarAlphaForLocation:(long long)arg1;
- (struct CGAffineTransform)avatarTransformForLocation:(long long)arg1;
- (struct CGPoint)avatarCenterForLocationDeprecated:(long long)arg1;
- (struct CGPoint)avatarCenterForLocation:(long long)arg1;
- (struct CGRect)avatarBounds;
- (long long)adjustLocationForProfileCount:(long long)arg1;
- (void)tweenBackground:(double)arg1;
- (void)tweenLabels:(double)arg1;
- (void)tweenAvatar:(double)arg1;
@property(readonly, nonatomic) double horizontalSidePadWithSafeArea;
- (void)tween:(double)arg1;
- (id)initWithContainerView:(id)arg1 backgroundView:(id)arg2 item:(id)arg3 fromLocation:(long long)arg4 toLocation:(long long)arg5 overshootLocation:(long long)arg6;
- (id)init;

@end

