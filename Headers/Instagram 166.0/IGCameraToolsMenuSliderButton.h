//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

#import <FBSharedFramework/IGCameraToolsMenuPresentationViewControllerAccessibilityProvider-Protocol.h>
#import <FBSharedFramework/IGCameraToolsMenuPresentationViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGCameraToolsMenuSliderDelegate-Protocol.h>
#import <FBSharedFramework/IGCameraToolsMenuTool-Protocol.h>

@class IGBouncyButton, IGCameraToolsMenuPresentationViewController, IGCameraToolsMenuSlider, IGCameraToolsMenuToolLabel, IGGradientView, NSString, UIImage, UIImpactFeedbackGenerator;
@protocol IGCameraToolsMenuSliderButtonDelegate;

@interface IGCameraToolsMenuSliderButton : IGPassthroughView <IGCameraToolsMenuPresentationViewControllerAccessibilityProvider, IGCameraToolsMenuPresentationViewControllerDelegate, IGCameraToolsMenuSliderDelegate, IGCameraToolsMenuTool>
{
    IGBouncyButton *_bouncyButton;
    IGCameraToolsMenuToolLabel *_label;
    IGCameraToolsMenuSlider *_slider;
    IGCameraToolsMenuPresentationViewController *_expandedViewController;
    IGGradientView *_protectionGradient;
    _Bool _expanded;
    double _titleAlpha;
    double _sliderExpansionPercentage;
    UIImpactFeedbackGenerator *_impactGenerator;
    _Bool _selected;
    _Bool _titleVisible;
    NSString *_identifier;
    long long _loggingKey;
    id <IGCameraToolsMenuSliderButtonDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGCameraToolsMenuSliderButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long loggingKey; // @synthesize loggingKey=_loggingKey;
@property(nonatomic, getter=isTitleVisible) _Bool titleVisible; // @synthesize titleVisible=_titleVisible;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)_triggerHapticKick;
- (void)slider:(id)arg1 didChangeValue:(double)arg2;
- (void)sliderDidTapIcon:(id)arg1;
- (void)cameraToolsMenuPresentationViewControllerWillDismiss:(id)arg1;
- (void)cameraToolsMenuPresentationViewControllerDidTapBackground:(id)arg1;
- (id)accessibilityElementsForCameraToolsMenuPresentationViewController:(id)arg1;
- (void)_setTitleAlpha:(double)arg1 animated:(_Bool)arg2;
- (void)setTitleVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_didTapBouncyButton:(id)arg1;
- (void)_setSliderExpansionPercentage:(double)arg1 animated:(_Bool)arg2 didApplyBlock:(CDUnknownBlockType)arg3;
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long labelPrecision;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
@property(nonatomic) double defaultValue;
@property(nonatomic) double value;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *title;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

