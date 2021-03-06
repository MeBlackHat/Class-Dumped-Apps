//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEUITrackerRunner-Protocol.h"
#import "RCTComponent-Protocol.h"

@class AWEFlexLayoutNode, AWEGradientBorderView, AWEPageLoadSession, BDPUIViewKeyboardInfo, CAShapeLayer, IESLiveResouceStyleModel, IESLiveUnreadDotView, MASViewAttribute, NSMutableSet, NSNumber, NSString, UIViewController;

@interface UIView (BDAAddition) <RCTComponent, AWEUITrackerRunner>
+ (id)bdp_dimmingView;
+ (void)awertl_load;
+ (void)awe_addGlobalReloadBlockForKey:(id)arg1 andExecuteIt:(CDUnknownBlockType)arg2;
+ (void)_aweLazyRegisterLoad_AWEUIKitAddtions;
+ (void)_aweLazyRegisterLoad_ThemeDynamic;
+ (id)darkBlurView;
+ (void)ieslive_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
+ (void)ieslive_animateWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)ieslive_animateWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)ieslive_animateWithDuration:(double)arg1 delay:(double)arg2 usingSpringWithDamping:(double)arg3 initialSpringVelocity:(double)arg4 options:(unsigned long long)arg5 animations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
+ (_Bool)ieslive_masonryProtectionEnabled;
+ (void)setEnableObserveTraitChanged:(_Bool)arg1;
+ (_Bool)live_layoutIsRTL;
+ (void)prepareRTLManager;
+ (_Bool)iesLiveKeyboardHeightIsZero;
+ (double)iesLiveKeyboardHeight;
+ (void)setIesLiveKeyboardHeight:(double)arg1;
+ (void)_aweLazyRegisterLoad_ToastWithKeyboard;
+ (void)_aweLazyRegisterLoad_AWEAdditions;
+ (void)_aweLazyRegisterLoad_AWEDashBorder;
+ (id)borderForView:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 borderType:(long long)arg4;
+ (struct CGSize)awe_minimumHitTestingSize;
+ (void)_aweLazyRegisterLoad_AWEHitTestingAdditions;
+ (void)_aweLazyRegisterLoad_AWETokamak;
+ (void)awe_UITracker_run;
@property(nonatomic) struct CGSize bda_size;
@property(nonatomic) struct CGPoint bda_origin;
@property(readonly, nonatomic) double bda_screenY;
@property(readonly, nonatomic) double bda_screenX;
@property(nonatomic) double bda_height;
@property(nonatomic) double bda_width;
@property(nonatomic) double bda_centerY;
@property(nonatomic) double bda_centerX;
@property(nonatomic) double bda_bottom;
@property(nonatomic) double bda_right;
@property(nonatomic) double bda_top;
@property(nonatomic) double bda_left;
@property(nonatomic) struct CGSize ttad_size;
@property(nonatomic) struct CGPoint ttad_origin;
@property(readonly, nonatomic) double ttad_screenY;
@property(readonly, nonatomic) double ttad_screenX;
@property(nonatomic) double ttad_height;
@property(nonatomic) double ttad_width;
@property(nonatomic) double ttad_centerY;
@property(nonatomic) double ttad_centerX;
@property(nonatomic) double ttad_bottom;
@property(nonatomic) double ttad_right;
@property(nonatomic) double ttad_top;
@property(nonatomic) double ttad_left;
- (id)equallyRelatedConstraintWithView:(id)arg1 attribute:(long long)arg2;
- (id)hmd_controller;
@property(retain, nonatomic) IESLiveResouceStyleModel *styleModel; // @dynamic styleModel;
@property(copy, nonatomic) NSNumber *lynxSign;
@property(nonatomic) struct CGPoint mj_origin;
@property(nonatomic) struct CGSize mj_size;
@property(nonatomic) double mj_h;
@property(nonatomic) double mj_w;
@property(nonatomic) double mj_y;
@property(nonatomic) double mj_x;
- (void)prepareForReuse;
@property(readonly, copy, nonatomic) NSString *reuseIdentifier;
- (id)initWithCoder:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *mas_installedConstraints;
- (id)mas_closestCommonSuperview:(id)arg1;
@property(retain, nonatomic) id mas_key;
@property(readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideRight;
@property(readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideLeft;
@property(readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_safeAreaLayoutGuide;
@property(readonly, nonatomic) MASViewAttribute *mas_centerYWithinMargins;
@property(readonly, nonatomic) MASViewAttribute *mas_centerXWithinMargins;
@property(readonly, nonatomic) MASViewAttribute *mas_trailingMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_leadingMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_topMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_rightMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_leftMargin;
@property(readonly, nonatomic) MASViewAttribute *mas_lastBaseline;
@property(readonly, nonatomic) MASViewAttribute *mas_firstBaseline;
@property(readonly, nonatomic) CDUnknownBlockType mas_attribute;
@property(readonly, nonatomic) MASViewAttribute *mas_baseline;
@property(readonly, nonatomic) MASViewAttribute *mas_centerY;
@property(readonly, nonatomic) MASViewAttribute *mas_centerX;
@property(readonly, nonatomic) MASViewAttribute *mas_height;
@property(readonly, nonatomic) MASViewAttribute *mas_width;
@property(readonly, nonatomic) MASViewAttribute *mas_trailing;
@property(readonly, nonatomic) MASViewAttribute *mas_leading;
@property(readonly, nonatomic) MASViewAttribute *mas_bottom;
@property(readonly, nonatomic) MASViewAttribute *mas_right;
@property(readonly, nonatomic) MASViewAttribute *mas_top;
@property(readonly, nonatomic) MASViewAttribute *mas_left;
- (id)mas_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)mas_updateConstraints:(CDUnknownBlockType)arg1;
- (id)mas_makeConstraints:(CDUnknownBlockType)arg1;
- (id)react_findClipView;
- (void)react_updateClippedSubviewsWithClipRect:(struct CGRect)arg1 relativeToView:(id)arg2;
- (void)react_remountAllSubviews;
@property(readonly, nonatomic) UIView *reactAccessibilityElement;
@property(readonly, nonatomic) struct CGRect reactContentFrame;
@property(readonly, nonatomic) struct UIEdgeInsets reactCompoundInsets;
@property(readonly, nonatomic) struct UIEdgeInsets reactPaddingInsets;
@property(readonly, nonatomic) struct UIEdgeInsets reactBorderInsets;
- (void)reactBlur;
- (void)reactFocusIfNeeded;
- (void)reactFocus;
- (void)setReactIsFocusNeeded:(_Bool)arg1;
- (_Bool)reactIsFocusNeeded;
- (void)reactAddControllerToClosestParent:(id)arg1;
- (id)reactViewController;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)didSetProps:(id)arg1;
- (void)didUpdateReactSubviews;
- (id)reactZIndexSortedSubviews;
@property(nonatomic) long long reactZIndex;
@property(nonatomic) long long reactLayoutDirection;
@property(nonatomic) int reactDisplay;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (id)reactSuperview;
- (id)reactSubviews;
- (id)reactTagAtPoint:(struct CGPoint)arg1;
- (_Bool)isReactRootView;
@property(copy, nonatomic) NSString *nativeID;
@property(copy, nonatomic) NSNumber *reactTag;
@property(nonatomic) struct CGSize ttvideoengine_size;
@property(nonatomic) struct CGPoint ttvideoengine_origin;
@property(nonatomic) double ttvideoengine_centerY;
@property(nonatomic) double ttvideoengine_centerX;
@property(nonatomic) double ttvideoengine_height;
@property(nonatomic) double ttvideoengine_width;
@property(nonatomic) double ttvideoengine_bottom;
@property(nonatomic) double ttvideoengine_right;
@property(nonatomic) double ttvideoengine_top;
@property(nonatomic) double ttvideoengine_left;
@property(nonatomic) struct CGSize bdp_cornerRadii;
@property(nonatomic) double bdp_cornerRadius;
@property(nonatomic) unsigned long long bdp_rectCorners;
@property(nonatomic) double bdp_cornerRadiusRatio;
- (void)bdp_updateRectCorners;
- (void)bdp_updateCornerRadius;
@property(retain, nonatomic) UIView *bdp_rightBorder;
@property(retain, nonatomic) UIView *bdp_bottomBorder;
@property(retain, nonatomic) UIView *bdp_leftBorder;
@property(retain, nonatomic) UIView *bdp_topBorder;
- (void)bdp_removeViewForEdges:(unsigned long long)arg1;
- (id)bdp_viewWithColor:(id)arg1;
- (void)bdp_setupConstraintsForView:(id)arg1 edge:(unsigned long long)arg2 width:(double)arg3;
- (void)bdp_addBorderForEdges:(unsigned long long)arg1 width:(double)arg2 color:(id)arg3;
- (_Bool)isSubviewOfView:(id)arg1;
- (id)findFirstViewController;
@property(readonly, nonatomic) struct CGRect originalFrame;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) struct CGRect screenFrame;
@property(readonly, nonatomic) double screenViewY;
@property(readonly, nonatomic) double screenViewX;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
@property(retain, nonatomic) BDPUIViewKeyboardInfo *bdp_KeyboardInfo;
- (id)bdp_findFirstResponder;
- (void)bdp_setKeyboardBottomPaddingWhenAutoTrackScroll:(double)arg1 forView:(id)arg2;
- (void)bdp_enableKeyboardAutoTrackScroll:(_Bool)arg1;
- (id)bdp_constraintEdgesEqualTo:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (struct CGRect)yy_convertRect:(struct CGRect)arg1 fromViewOrWindow:(id)arg2;
- (struct CGRect)yy_convertRect:(struct CGRect)arg1 toViewOrWindow:(id)arg2;
- (struct CGPoint)yy_convertPoint:(struct CGPoint)arg1 fromViewOrWindow:(id)arg2;
- (struct CGPoint)yy_convertPoint:(struct CGPoint)arg1 toViewOrWindow:(id)arg2;
@property(readonly, nonatomic) double yy_visibleAlpha;
@property(readonly, nonatomic) UIViewController *yy_viewController;
- (void)flex_makeLayout:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) AWEFlexLayoutNode *flex_node;
- (void)alp_currentLanguageDidChanged;
@property(copy, nonatomic) NSString *pld_objectKind;
@property(nonatomic) __weak AWEPageLoadSession *pld_session;
- (id)traverseResponderChainForUIViewController;
- (id)firstAvailableUIViewController;
- (void)markFlipRecursivelyExcept:(id)arg1;
- (unsigned long long)awertl_automaticViewType;
- (void)awertl_updateCalculatedViewType;
- (void)awertl_renewLayerTransformForceRecursively:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long awertl_calculatedViewType;
- (void)setAwertl_calculatedViewType:(unsigned long long)arg1;
- (unsigned long long)awertl_lastType;
- (void)setAwertl_lastType:(unsigned long long)arg1;
@property(nonatomic) unsigned long long awertl_viewType;
- (struct CGRect)awe_frameInView:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets awe_safeAdjustment;
- (id)awe_roundedImage:(id)arg1;
@property(retain, nonatomic) CAShapeLayer *innerLayer;
@property(nonatomic) double awe_cornerRadius;
- (id)awe_colorOfPoint:(struct CGPoint)arg1;
- (id)awe_snapshotImageViewAfterScreenUpdates:(_Bool)arg1;
- (id)awe_snapshotImageView;
- (id)awe_snapshotImageAfterScreenUpdates:(_Bool)arg1 withSize:(struct CGSize)arg2;
- (id)awe_snapshotImageAfterScreenUpdates:(_Bool)arg1;
- (id)awe_snapshotImage;
- (void)awe_addSystemBlurEffect:(long long)arg1;
- (void)awe_addBlurEffect;
- (void)awe_addRotateAnimationWithDuration:(double)arg1 forKey:(id)arg2;
- (void)awe_addRotateAnimationWithDuration:(double)arg1;
- (id)awe_touchViewWithSize:(struct CGSize)arg1;
- (id)awe_touchView;
- (void)awe_disableUserInteractionWithTimeInterval:(double)arg1;
@property(nonatomic) struct CGPoint awe_origin;
@property(nonatomic) struct CGSize awe_size;
@property(nonatomic) double awe_centerY;
@property(nonatomic) double awe_centerX;
@property(nonatomic) double awe_height;
@property(nonatomic) double awe_width;
@property(nonatomic) double awe_right;
@property(nonatomic) double awe_left;
@property(nonatomic) double awe_bottom;
@property(nonatomic) double awe_top;
- (id)awe_nearestAncestorOfClass:(Class)arg1;
- (void)awe_tapGesture:(id)arg1;
- (id)awe_addSingleTapRecognizerWithBlock:(CDUnknownBlockType)arg1;
- (id)awe_addSingleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)awe_addDoubleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)imageWithViewOnScale:(double)arg1;
- (id)imageWithViewOnScreenScale;
- (id)imageWithView;
- (void)awe_fadeShow:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)awe_fadeShow:(_Bool)arg1 duration:(double)arg2;
- (void)awe_fadeHiddenWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)awe_fadeShowWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)awe_fadeHiddenDuration:(double)arg1;
- (void)awe_fadeShowWithDuration:(double)arg1;
- (void)awe_fadeHiddenWithCompletion:(CDUnknownBlockType)arg1;
- (void)awe_fadeShowWithCompletion:(CDUnknownBlockType)arg1;
- (void)awe_fadeHidden;
- (void)awe_fadeShow;
- (id)awe_fadeView;
- (void)awe_edgeFadingWithValue:(double)arg1 direction:(long long)arg2;
- (void)awe_edgeFadingWithDirection:(long long)arg1;
- (void)awe_edgeFadingWithValue:(double)arg1;
- (void)awe_edgeFading;
- (_Bool)awe_isDisplayedOnScreen;
- (void)awe_performReloadBlocks;
- (void)awe_uikit_traitCollectionDidChange:(id)arg1;
- (void)awe_removeReloadBlockForKey:(id)arg1;
- (void)awe_addReloadBlockForKey:(id)arg1 andExecuteIt:(CDUnknownBlockType)arg2;
- (id)awe_uikit_reloadBlocks;
- (void)setAwe_uikit_reloadBlocks:(id)arg1;
- (double)aweui_height;
- (void)setAweui_height:(double)arg1;
- (double)aweui_width;
- (void)setAweui_width:(double)arg1;
@property(nonatomic) double aweui_right;
@property(nonatomic) double aweui_left;
@property(nonatomic) double aweui_bottom;
@property(nonatomic) double aweui_top;
- (id)awe_subViewOfClassName:(id)arg1;
- (id)awe_badgeView;
- (void)setAwe_badgeView:(id)arg1;
- (void)awe_configBadgeViewWithBadgeColor:(id)arg1 radius:(double)arg2;
- (void)awe_configBadgeViewWithBadgeColor:(id)arg1;
- (void)awe_hideBadge;
- (void)awe_showBadgeWithBadgeColor:(id)arg1 centerOffset:(struct UIOffset)arg2 radius:(double)arg3;
- (void)awe_showBadgeWithBadgeColor:(id)arg1 centerOffset:(struct UIOffset)arg2;
- (void)awe_showBadgeWithCenterOffset:(struct UIOffset)arg1;
- (void)awe_configWithShadowStyle:(unsigned long long)arg1;
- (void)themeDidChange;
- (_Bool)theme_visible;
- (void)registerThemeColorProperties:(id)arg1;
- (id)themeInitWithFrame:(struct CGRect)arg1;
- (void)awe_themeReload;
@property(nonatomic) unsigned long long awe_themeCurrentSuit;
- (void)setThemeColorProperties:(id)arg1;
- (id)themeColorProperties;
- (void)transformForceRecursively;
- (void)acc_removeBubbleAnimates;
- (void)acc_bubbleCoreAnimate:(CDUnknownBlockType)arg1;
- (void)acc_bubbleCoreAnimate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acc_bubbleAnimate:(CDUnknownBlockType)arg1;
- (void)acc_bubbleAnimate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long accrtl_viewType;
- (double)maxScaleWithinRect:(struct CGRect)arg1;
- (double)centerToBorderDirection:(long long)arg1;
- (void)setAnchorPointForRotateAndScale:(struct CGPoint)arg1;
- (struct CGPoint)anchorOffsetWithPositive:(_Bool)arg1;
- (struct CGRect)acc_frameInView:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets acc_safeAdjustment;
- (id)acc_roundedImage:(id)arg1;
@property(nonatomic) double acc_cornerRadius;
- (id)acc_colorOfPoint:(struct CGPoint)arg1;
- (id)acc_snapshotImageViewAfterScreenUpdates:(_Bool)arg1;
- (id)acc_snapshotImageView;
- (id)acc_snapshotImageAfterScreenUpdates:(_Bool)arg1 withSize:(struct CGSize)arg2;
- (id)acc_snapshotImageAfterScreenUpdates:(_Bool)arg1;
- (id)acc_snapshotImage;
- (void)acc_addSystemBlurEffect:(long long)arg1;
- (void)acc_addBlurEffect;
- (void)acc_addRotateAnimationWithDuration:(double)arg1 forKey:(id)arg2;
- (void)acc_addRotateAnimationWithDuration:(double)arg1;
- (id)acc_touchViewWithSize:(struct CGSize)arg1;
- (id)acc_viewController;
- (void)acc_removeAllSubviews;
- (id)acc_touchView;
- (void)acc_disableUserInteractionWithTimeInterval:(double)arg1;
@property(nonatomic) struct CGPoint acc_origin;
@property(nonatomic) struct CGSize acc_size;
@property(nonatomic) double acc_centerY;
@property(nonatomic) double acc_centerX;
@property(nonatomic) double acc_height;
@property(nonatomic) double acc_width;
@property(nonatomic) double acc_right;
@property(nonatomic) double acc_left;
@property(nonatomic) double acc_bottom;
@property(nonatomic) double acc_top;
- (id)acc_nearestAncestorOfClass:(Class)arg1;
- (id)acc_addSingleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)acc_addDoubleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (id)acc_imageWithViewOnScale:(double)arg1;
- (id)acc_imageWithViewOnScreenScale;
- (id)acc_imageWithView;
- (void)acc_fadeShow:(_Bool)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acc_fadeShow:(_Bool)arg1 duration:(double)arg2;
- (void)acc_fadeHiddenWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acc_fadeShowWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)acc_fadeHiddenDuration:(double)arg1;
- (void)acc_fadeShowWithDuration:(double)arg1;
- (void)acc_fadeHiddenWithCompletion:(CDUnknownBlockType)arg1;
- (void)acc_fadeShowWithCompletion:(CDUnknownBlockType)arg1;
- (void)acc_fadeHidden;
- (void)acc_fadeShow;
- (id)acc_fadeView;
- (void)acc_edgeFadingWithRatio:(double)arg1;
- (void)acc_edgeFadingWithValue:(double)arg1 direction:(long long)arg2;
- (void)acc_edgeFadingWithDirection:(long long)arg1;
- (void)acc_edgeFadingWithValue:(double)arg1;
- (void)acc_edgeFading;
- (_Bool)acc_isDisplayedOnScreen;
- (void)awe_adjustHorizontalDashLineAffineTransform;
- (void)awe_adjustHorizontalDashLineFrame;
- (void)awe_hidenHorizontalDashLine;
- (void)awe_showHorizontalDashLine;
@property(readonly, nonatomic) CAShapeLayer *horizontalDashLineLayer;
- (void)animateScaleFrom:(double)arg1 toScale:(double)arg2 duration:(double)arg3 repeat:(_Bool)arg4;
- (void)acc_counterClockwiseRotate;
- (id)p_subtractMaskImageWithImage:(id)arg1;
- (id)awe_subtractMaskView;
- (void)awe_setSubtractMaskView:(id)arg1;
- (void)disableRTL;
- (void)resetFrameToFitRTLWithSuperWidth:(double)arg1;
- (void)resetFrameToFitRTL;
- (void)setRTLFrame:(struct CGRect)arg1;
- (void)setRTLFrame:(struct CGRect)arg1 width:(double)arg2;
- (id)ieslive_generateImgae;
- (id)ies_addRightLine:(id)arg1 edge:(struct IESVerticalEdge)arg2 lineWeight:(double)arg3;
- (id)ies_addLeftLine:(id)arg1 edge:(struct IESVerticalEdge)arg2 lineWeight:(double)arg3;
- (id)ies_addTopLine:(id)arg1 edge:(struct IESHorizentalEdge)arg2 lineWeight:(double)arg3;
- (id)ies_addBottomLine:(id)arg1 edge:(struct IESHorizentalEdge)arg2 lineWeight:(double)arg3;
- (id)ies_addRightLine:(id)arg1 edge:(struct IESVerticalEdge)arg2;
- (id)ies_addLeftLine:(id)arg1 edge:(struct IESVerticalEdge)arg2;
- (id)ies_addTopLine:(id)arg1 edge:(struct IESHorizentalEdge)arg2;
- (id)ies_addBottomLine:(id)arg1 edge:(struct IESHorizentalEdge)arg2;
- (id)ies_addRightLine:(id)arg1 lineWeight:(double)arg2;
- (id)ies_addLeftLine:(id)arg1 lineWeight:(double)arg2;
- (id)ies_addTopLine:(id)arg1 lineWeight:(double)arg2;
- (id)ies_addBottomLine:(id)arg1 lineWeight:(double)arg2;
- (id)ies_addRightLine:(id)arg1;
- (id)ies_addLeftLine:(id)arg1;
- (id)ies_addTopLine:(id)arg1;
- (id)ies_addBottomLine:(id)arg1;
- (double)ies_defaultLineWidth;
- (short)ies_screenScale;
- (void)maskToRectCorner:(unsigned long long)arg1 ofSize:(struct CGSize)arg2;
- (id)p_ieslive_dummyLayerWithFrame:(struct CGRect)arg1;
- (void)ieslive_applyRadius:(double)arg1 atCorners:(unsigned long long)arg2;
- (void)ieslive_applyRadius:(double)arg1 atCorners:(unsigned long long)arg2 recursiveToSubviews:(_Bool)arg3;
- (void)ieslive_applyCornersWithPosition:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)ieslive_applyCornersWithRadius:(double)arg1;
- (void)ies_resetCorners;
- (void)ies_addRoundedCorners:(unsigned long long)arg1 withRadius:(double)arg2 viewRect:(struct CGRect)arg3;
- (id)ies_layerBorderColor;
- (void)ies_setLayerBorderColor:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets ies_safeAdjustment;
@property(nonatomic) struct CGSize ies_size;
@property(nonatomic) struct CGPoint ies_origin;
@property(nonatomic) double ies_height;
@property(nonatomic) double ies_width;
@property(nonatomic) double ies_centerY;
@property(nonatomic) double ies_centerX;
@property(nonatomic) double ies_bottom;
@property(nonatomic) double ies_right;
@property(nonatomic) double ies_top;
@property(nonatomic) double ies_left;
- (void)live_applyGradientMaskPositions:(id)arg1 colors:(id)arg2 from:(struct CGPoint)arg3 to:(struct CGPoint)arg4;
- (void)ies_removeGradientLayerIfNeeded;
- (void)ies_applyVerticalGradientFromColor:(id)arg1 toColor:(id)arg2 cornerRadius:(double)arg3;
- (void)ies_applyVerticalGradientFromColor:(id)arg1 toColor:(id)arg2;
- (void)ies_applyHorizontalGradientFromColor:(id)arg1 toColor:(id)arg2;
- (void)ies_themeApplyHorizontalGradientFromColor:(id)arg1 toColor:(id)arg2 size:(struct CGSize)arg3 cornerRadius:(double)arg4;
- (void)ies_applyHorizontalGradientFromColor:(id)arg1 toColor:(id)arg2 cornerRadius:(double)arg3;
- (void)ies_themeApplyHorizontalGradientFromColor:(id)arg1 toColor:(id)arg2;
- (void)ies_themeApplyHorizontalGradientFromColor:(id)arg1 toColor:(id)arg2 cornerRadius:(double)arg3;
- (id)live_remakeConstraint;
- (id)live_updateConstraint;
- (id)live_makeConstraint;
- (id)ieslive_remakeConstraints:(CDUnknownBlockType)arg1;
- (id)ieslive_updateConstraints:(CDUnknownBlockType)arg1;
- (id)ieslive_makeConstraints:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) IESLiveUnreadDotView *ieslive_countDotView;
@property(retain, nonatomic) UIView *ieslive_dotView;
- (void)_ieslive_updateCountDotViewLocation:(struct CGPoint)arg1;
- (void)_ieslive_updateDotViewLocation:(struct CGPoint)arg1;
- (long long)ieslive_countOfShowingNum;
- (_Bool)ieslive_isUnreadDotShown;
- (void)ieslive_hideUnreadView;
- (id)ieslive_showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2 fillColor:(id)arg3 fontColor:(id)arg4;
- (id)ieslive_showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2 fillColor:(id)arg3;
- (id)ieslive_showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (id)ieslive_showUnreadViewAtPoint:(struct CGPoint)arg1;
- (id)ieslive_showUnreadViewAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2;
- (void)ieslive_updateDot;
- (id)ieslive_redDotConstraint;
- (void)ieslive_setRedDotConstraint:(id)arg1;
- (void)ieslive_setRedDotNumberColor:(id)arg1;
- (void)ieslive_setRedDotNumberHidden:(_Bool)arg1;
- (void)ieslive_setRedDotNumber:(long long)arg1;
- (void)ieslive_setRedDotNumberLabel:(id)arg1;
- (id)ieslive_redDotNumberLabel;
- (void)ieslive_setRedDotColor:(id)arg1;
- (void)ieslive_setRedDotHidden:(_Bool)arg1;
- (void)ieslive_setRedDotView:(id)arg1;
- (id)ieslive_redDotView;
- (void)ieslive_setRedDotOffset:(struct CGPoint)arg1;
- (struct CGPoint)ieslive_redDotOffset;
- (void)ieslive_setRedDotSize:(struct CGSize)arg1;
- (struct CGSize)ieslive_redDotSize;
- (void)ies_uikit_traitCollectionDidChange:(id)arg1;
- (void)ies_removeReloadBlockForKey:(id)arg1;
- (void)ies_addReloadBlockForKey:(id)arg1 andExecuteIt:(CDUnknownBlockType)arg2;
- (id)ies_uikit_reloadBlocks;
- (void)setIes_uikit_reloadBlocks:(id)arg1;
- (void)setLiveRTLViewType:(unsigned long long)arg1;
@property(nonatomic) _Bool iesLiveAdjustForKeyboardShow;
@property(nonatomic) struct CGAffineTransform iesLiveTransformBeforeKeyboardShow;
@property(nonatomic) long long iesLiveKeyboardAction;
- (void)setAwe_keyboardHeight:(double)arg1;
- (double)awe_keyboardHeight;
@property(readonly, nonatomic) UIView *actionForwarderView;
@property(nonatomic) _Bool aweui_disableNavigationbarBringToFront;
- (void)awe_layoutSubviews;
- (CDUnknownBlockType)awe_layoutSubviewsBlock;
- (void)setAwe_layoutSubviewsBlock:(CDUnknownBlockType)arg1;
- (void)awe_uikit_didAddSubview:(id)arg1;
- (id)awe_showMusicianBadge;
- (id)awe_showEnterpriseBadge;
- (id)awe_showVerifiedUserBadge;
- (id)awe_showCrownBadge;
- (void)awe_hideBadgeImageView;
- (id)awe_showBadgeImage:(id)arg1 atPosition:(long long)arg2;
- (id)awe_showBadgeImage:(id)arg1;
- (id)awe_badgeImageView;
- (void)awe_dashBorderLayoutSubviews;
- (void)awe_addDashBorderLineDashPattern:(id)arg1 strokeColor:(id)arg2 fillColor:(id)arg3 lineWidth:(double)arg4 cornerRadius:(double)arg5;
- (void)setAwe_dashBorderCornerRadius:(double)arg1;
- (double)awe_dashBorderCornerRadius;
@property(retain, nonatomic) CAShapeLayer *awe_dashBorder;
- (_Bool)awe_HitTestingAdditions_pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic, setter=awe_setHitTestingInsets:) struct UIEdgeInsets awe_hitTestingInsets;
@property(nonatomic, setter=awe_setHitTestingMode:) long long awe_hitTestingMode;
- (void)hideHollowOutBorder;
- (void)showHollowOutGradientColors:(id)arg1 width:(double)arg2 padding:(double)arg3 aboveSelf:(_Bool)arg4;
- (void)showHollowOutGradientColors:(id)arg1 width:(double)arg2 padding:(double)arg3;
- (void)setGradientBorder:(id)arg1;
@property(readonly, nonatomic) AWEGradientBorderView *gradientBorder;
- (void)setCountDotView:(id)arg1;
- (id)countDotView;
- (void)setDotView:(id)arg1;
- (id)dotView;
- (void)_updateCountDotViewLocation:(struct CGPoint)arg1;
- (void)_updateDotViewLocation:(struct CGPoint)arg1;
- (long long)countOfShowingNum;
- (_Bool)isUnreadDotShown;
- (void)hideUnreadView;
- (id)showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2 fillColor:(id)arg3 fontColor:(id)arg4;
- (id)showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2 fillColor:(id)arg3;
- (id)showUnreadViewWithUnreadCount:(long long)arg1 atPoint:(struct CGPoint)arg2;
- (id)showUnreadViewAtPoint:(struct CGPoint)arg1;
- (id)showUnreadViewAtPoint:(struct CGPoint)arg1 withFrame:(struct CGRect)arg2;
- (void)removeBubbleAnimates;
- (void)bubbleCoreAnimate:(CDUnknownBlockType)arg1;
- (void)bubbleCoreAnimate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bubbleAnimate:(CDUnknownBlockType)arg1;
- (void)bubbleAnimate:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGPoint)cs_centerPointForPosition:(id)arg1 withToast:(id)arg2;
- (void)hideToastActivity;
- (void)makeToastActivity:(id)arg1;
- (void)cs_handleToastTapped:(id)arg1;
- (void)cs_toastTimerDidFinish:(id)arg1;
- (id)cs_toastQueue;
- (id)cs_activeToasts;
- (id)toastViewForMessage:(id)arg1 title:(id)arg2 image:(id)arg3 style:(id)arg4;
- (void)cs_hideToast:(id)arg1 fromTap:(_Bool)arg2;
- (void)cs_hideToast:(id)arg1;
- (void)cs_showToast:(id)arg1 duration:(double)arg2 position:(id)arg3;
- (void)hideToast:(id)arg1;
- (void)hideToasts;
- (void)showToast:(id)arg1 duration:(double)arg2 position:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showToast:(id)arg1;
- (void)makeToast:(id)arg1 duration:(double)arg2 position:(id)arg3 title:(id)arg4 image:(id)arg5 style:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)makeToast:(id)arg1 duration:(double)arg2 position:(id)arg3 style:(id)arg4;
- (void)makeToast:(id)arg1 duration:(double)arg2 position:(id)arg3;
- (void)awe_makeToast:(id)arg1;
- (id)user_addSingleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) MASViewAttribute *awe_safeAreaLayoutGuideRight;
@property(readonly, nonatomic) MASViewAttribute *awe_safeAreaLayoutGuideLeft;
@property(readonly, nonatomic) MASViewAttribute *awe_safeAreaLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *awe_safeAreaLayoutGuideTop;
@property(nonatomic) double awe_finalShowAlpha;
- (void)tokamak_addSubview:(id)arg1;
- (void)awe_UITracker_gestureRecognizer:(id)arg1;
- (void)awe_UITracker_addGestureRecognizer:(id)arg1;
- (id)user_addSingleTapRecognizerWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)isShowingRedView;
- (void)hidePointView;
- (void)showPointViewWithColor:(id)arg1 withRadius:(double)arg2 atPoint:(struct CGPoint)arg3;
- (void)hiddenRedView;
- (void)showRedView;
- (void)showRedViewWithPoint:(struct CGPoint)arg1;
- (id)redView;
- (void)setRedView:(id)arg1;
@property(nonatomic) _Bool p_videoFeedCellIsShown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

