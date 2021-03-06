//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGTapButton.h>

@class IGDirectComposerButtonViewModel, IGDirectGradientView, UIView;

@interface IGDirectComposerButton : IGTapButton
{
    IGDirectGradientView *_backgroundCircleView;
    UIView *_gradientTextMaskView;
    IGDirectGradientView *_gradientTextBackgroundView;
    IGDirectComposerButtonViewModel *_viewModel;
}

+ (id)buttonWithViewModel:(id)arg1 groupPadding:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectComposerButtonViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (id)_viewsToTransform;
- (void)layoutGradientIfNecessaryInScrollView:(id)arg1;
- (void)applyScaleFactor:(double)arg1 rotationAngle:(double)arg2;
- (void)layoutSubviews;

@end

