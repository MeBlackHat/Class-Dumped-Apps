//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSTimer, UIImageView;

@interface MALXAlexaWaveformView : UIView
{
    double _soundLevel;
    UIImageView *_primaryGlowImageView;
    UIImageView *_secondaryGlowImageView;
    unsigned long long _waveformMode;
    UIView *_barView;
    UIImageView *_shadowImageView;
    NSLayoutConstraint *_primaryGlowLeadingConstraint;
    NSLayoutConstraint *_primaryGlowTrailingConstraint;
    NSLayoutConstraint *_secondaryGlowLeadingConstraint;
    NSLayoutConstraint *_secondaryGlowTrailingConstraint;
    double _screenWidth;
    NSTimer *_primaryAnimationTimer;
    NSTimer *_secondaryAnimationTimer;
    double _listeningWindowStart;
}

+ (Class)layerClass;
@property(nonatomic) double listeningWindowStart; // @synthesize listeningWindowStart=_listeningWindowStart;
@property(retain, nonatomic) NSTimer *secondaryAnimationTimer; // @synthesize secondaryAnimationTimer=_secondaryAnimationTimer;
@property(retain, nonatomic) NSTimer *primaryAnimationTimer; // @synthesize primaryAnimationTimer=_primaryAnimationTimer;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSLayoutConstraint *secondaryGlowTrailingConstraint; // @synthesize secondaryGlowTrailingConstraint=_secondaryGlowTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *secondaryGlowLeadingConstraint; // @synthesize secondaryGlowLeadingConstraint=_secondaryGlowLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryGlowTrailingConstraint; // @synthesize primaryGlowTrailingConstraint=_primaryGlowTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryGlowLeadingConstraint; // @synthesize primaryGlowLeadingConstraint=_primaryGlowLeadingConstraint;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIView *barView; // @synthesize barView=_barView;
@property(nonatomic) unsigned long long waveformMode; // @synthesize waveformMode=_waveformMode;
@property(retain, nonatomic) UIImageView *secondaryGlowImageView; // @synthesize secondaryGlowImageView=_secondaryGlowImageView;
@property(retain, nonatomic) UIImageView *primaryGlowImageView; // @synthesize primaryGlowImageView=_primaryGlowImageView;
@property(nonatomic) double soundLevel; // @synthesize soundLevel=_soundLevel;
- (void).cxx_destruct;
- (void)performThinkingAnimationWithGlowImageView:(id)arg1 leadingConstraint:(id)arg2 trailingConstraint:(id)arg3;
- (void)performSecondaryThinkingAnimation;
- (void)performPrimaryThinkingAnimation;
- (void)startSecondaryThinkingAnimation;
- (void)startPrimaryThinkingAnimation;
- (id)createGlowImageView;
- (void)setupSecondaryGlowImageViewAnimatableConstraints;
- (void)setupPrimaryGlowImageViewAnimatableConstraints;
- (void)setUpShadowImageView;
- (void)setUpBarView;
- (id)constraintsForGlowImageView:(id)arg1;
- (id)contraintsForShadowImageView:(id)arg1;
- (id)contraintsForBarView:(id)arg1;
- (_Bool)isNewSoundLevel:(double)arg1 withinThreshold:(double)arg2;
- (void)setAccessibilityFocusOnView;
- (void)pulse;
- (void)process;
- (_Bool)isAccessibilityElement;
- (void)didMoveToSuperview;
- (id)initWithWaveformMode:(unsigned long long)arg1;

@end

