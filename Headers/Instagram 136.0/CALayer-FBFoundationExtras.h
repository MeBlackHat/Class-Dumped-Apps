//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (FBFoundationExtras)
+ (void)cul_initializeCALayer;
+ (void)fbcul_swizzleInitalizeCALayer;
- (void)fb_setupLayerContentsWithResizableImage:(id)arg1;
@property(readonly, nonatomic) CALayer *currentLayer;
- (void)ig_addAnimationWithKeyPath:(id)arg1 toValue:(id)arg2;
- (struct CGPoint)fb_positionToCenterAtPoint:(struct CGPoint)arg1;
@property(nonatomic) struct CGPoint center;
- (void)fb_setAnchorPoint:(struct CGPoint)arg1 preserveCenter:(_Bool)arg2;
- (void)ig_setPosition:(struct CGPoint)arg1 anchorPoint:(struct CGPoint)arg2;
@end

