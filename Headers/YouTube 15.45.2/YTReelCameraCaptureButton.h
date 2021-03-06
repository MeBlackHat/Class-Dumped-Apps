//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "YTEditCameraRecording-Protocol.h"

@class CALayer, CAShapeLayer, NSString;

@interface YTReelCameraCaptureButton : UIButton <YTEditCameraRecording>
{
    CALayer *_innerLayer;
    CAShapeLayer *_outerRingTrackLayer;
    CAShapeLayer *_outerRingProgressLayer;
    _Bool _onTouchDown;
    double _touchPadding;
    _Bool _recording;
    double _timeLimit;
}

- (void).cxx_destruct;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic, getter=isRecording) _Bool recording; // @synthesize recording=_recording;
- (id)ringPathForRect:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (double)outerRadiusForRecording:(_Bool)arg1;
- (double)innerRadiusForRecording:(_Bool)arg1;
- (void)configureShapeLayer:(id)arg1 withLineWidth:(double)arg2 strokeColor:(id)arg3;
- (void)createLayers;
- (id)animateInnerColor;
- (id)animateOutsideProgressTrack;
- (id)animateOutsideCornerRadius;
- (id)animateInsideCornerRadius;
- (id)animateOutsidePath;
- (id)animateOuterLayer;
- (id)animateInnerLayer;
- (void)setAnimationOnTouchDown:(_Bool)arg1;
- (void)setAnimationOnRecording:(_Bool)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

