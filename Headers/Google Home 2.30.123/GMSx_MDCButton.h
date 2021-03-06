//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MDCElevatable-Protocol.h"
#import "MDCElevationOverriding-Protocol.h"

@class GMSx_MDCInkView, GMSx_MDCShapedShadowLayer, GMSx_MDCStatefulRippleView, NSMutableDictionary, NSString, UIColor;
@protocol MDCShapeGenerating;

@interface GMSx_MDCButton : UIButton <MDCElevatable, MDCElevationOverriding>
{
    NSMutableDictionary *_userElevations;
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
    NSMutableDictionary *_borderWidths;
    NSMutableDictionary *_shadowColors;
    NSMutableDictionary *_imageTintColors;
    NSMutableDictionary *_fonts;
    double _enabledAlpha;
    _Bool _hasCustomDisabledTitleColor;
    _Bool _imageTintStatefulAPIEnabled;
    NSMutableDictionary *_nontransformedTitles;
    NSString *_accessibilityLabelExplicitValue;
    _Bool _mdc_adjustsFontForContentSizeCategory;
    _Bool _cornerRadiusObserverAdded;
    double _inkMaxRippleRadius;
    _Bool _enableRippleBehavior;
    _Bool _uppercaseTitle;
    _Bool _centerVisibleArea;
    _Bool _adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
    _Bool _accessibilityTraitsIncludesButton;
    _Bool _enableTitleFontForState;
    double _mdc_overrideBaseElevation;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    long long _rippleStyle;
    UIColor *_rippleColor;
    double _rippleMaximumRadius;
    double _disabledAlpha;
    UIColor *_underlyingColorHint;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    GMSx_MDCStatefulRippleView *_rippleView;
    GMSx_MDCInkView *_inkView;
    struct CGSize _inkViewOffset;
    struct CGSize _minimumSize;
    struct CGSize _maximumSize;
    struct UIEdgeInsets _visibleAreaInsets;
    struct UIEdgeInsets _rippleEdgeInsets;
    struct UIEdgeInsets _hitAreaInsets;
    struct UIEdgeInsets _currentVisibleAreaInsets;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets currentVisibleAreaInsets; // @synthesize currentVisibleAreaInsets=_currentVisibleAreaInsets;
@property(nonatomic) struct UIEdgeInsets hitAreaInsets; // @synthesize hitAreaInsets=_hitAreaInsets;
@property(nonatomic) _Bool enableTitleFontForState; // @synthesize enableTitleFontForState=_enableTitleFontForState;
@property(nonatomic) _Bool accessibilityTraitsIncludesButton; // @synthesize accessibilityTraitsIncludesButton=_accessibilityTraitsIncludesButton;
@property(retain, nonatomic) GMSx_MDCInkView *inkView; // @synthesize inkView=_inkView;
@property(readonly, nonatomic) GMSx_MDCStatefulRippleView *rippleView; // @synthesize rippleView=_rippleView;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) _Bool adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable; // @synthesize adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable=_adjustsFontForContentSizeCategoryWhenScaledFontIsUnavailable;
@property(retain, nonatomic) UIColor *underlyingColorHint; // @synthesize underlyingColorHint=_underlyingColorHint;
@property(nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) struct UIEdgeInsets rippleEdgeInsets; // @synthesize rippleEdgeInsets=_rippleEdgeInsets;
@property(nonatomic) struct CGSize inkViewOffset; // @synthesize inkViewOffset=_inkViewOffset;
@property(nonatomic) _Bool centerVisibleArea; // @synthesize centerVisibleArea=_centerVisibleArea;
@property(nonatomic, getter=isUppercaseTitle) _Bool uppercaseTitle; // @synthesize uppercaseTitle=_uppercaseTitle;
@property(nonatomic) double disabledAlpha; // @synthesize disabledAlpha=_disabledAlpha;
@property(nonatomic) _Bool enableRippleBehavior; // @synthesize enableRippleBehavior=_enableRippleBehavior;
@property(nonatomic) double rippleMaximumRadius; // @synthesize rippleMaximumRadius=_rippleMaximumRadius;
@property(retain, nonatomic) UIColor *rippleColor; // @synthesize rippleColor=_rippleColor;
@property(nonatomic) long long rippleStyle; // @synthesize rippleStyle=_rippleStyle;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
- (id)generateShapeWithCornerRadius:(double)arg1 visibleAreaInsets:(struct UIEdgeInsets)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) struct UIEdgeInsets visibleAreaInsets; // @synthesize visibleAreaInsets=_visibleAreaInsets;
- (void)setUnderlyingColor:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(nonatomic, setter=mdc_setAdjustsFontForContentSizeCategory:) _Bool mdc_adjustsFontForContentSizeCategory;
- (void)updateInkForShape;
@property(retain, nonatomic) id <MDCShapeGenerating> shapeGenerator;
- (void)configureLayerWithShapeGenerator:(id)arg1;
- (void)updateTitleFont;
- (void)updateBorderColor;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateDisabledTitleColor;
- (void)updateBackgroundColor;
- (void)updateAlphaAndBackgroundColorAnimated:(_Bool)arg1;
- (_Bool)shouldHaveOpaqueBackground;
@property(readonly, nonatomic) struct UIEdgeInsets defaultContentEdgeInsets;
- (id)boundingPath;
- (void)evaporateInkToPoint:(struct CGPoint)arg1;
- (struct CGPoint)locationFromTouches:(id)arg1;
- (void)handleBeginTouches:(id)arg1;
- (void)touchDragExit:(id)arg1 forEvent:(id)arg2;
- (void)touchDragEnter:(id)arg1 forEvent:(id)arg2;
- (_Bool)isTransparentColor:(id)arg1;
- (_Bool)isDarkColor:(id)arg1;
- (id)effectiveBackgroundColor;
@property(readonly, nonatomic) double mdc_currentElevation;
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleFontForState:(unsigned long long)arg1;
- (void)updateBorderWidth;
- (void)setBorderWidth:(double)arg1 forState:(unsigned long long)arg2;
- (double)borderWidthForState:(unsigned long long)arg1;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)borderColorForState:(unsigned long long)arg1;
- (void)setElevation:(double)arg1 forState:(unsigned long long)arg2;
- (double)elevationForState:(unsigned long long)arg1;
- (void)updateImageTintColor;
- (void)setImageTintColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)imageTintColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)animateButtonToHeightForState:(unsigned long long)arg1;
- (void)setInkMaxRippleRadius:(double)arg1;
- (double)inkMaxRippleRadius;
- (void)setInkColor:(id)arg1;
- (id)inkColor;
- (void)setInkStyle:(long long)arg1;
- (long long)inkStyle;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (id)shadowColorForState:(unsigned long long)arg1;
- (void)setShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateShadowColor;
- (void)updateTitleCase;
- (void)updateAfterStateChange:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setEnabled:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)commonMDCButtonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GMSx_MDCShapedShadowLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end

