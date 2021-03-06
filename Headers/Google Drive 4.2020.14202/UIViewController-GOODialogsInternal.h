//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GOOActionSheetController, GOOHeaderConfiguration, GOOHeaderViewController, GOOPanelViewController, MASViewAttribute, MDCBottomSheetPresentationController, MDCDialogPresentationController, NSArray;
@protocol GOOFlexibleHeader, MDMTransitionController, UIViewControllerPreviewing;

@interface UIViewController (GOODialogsInternal)
+ (void)goo_swizzleAutomaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) UIViewController *goo_deepestChildViewControllerForStatusBarHidden;
@property(readonly, nonatomic) UIViewController *goo_deepestChildViewControllerForStatusBarStyle;
- (_Bool)ogl_preferredContentSizeCategoryChangedFromPreviousTraitCollection:(id)arg1;
- (id)goo_internalNavigationStyle;
- (void)goo_backButtonTouched;
- (_Bool)goo_automaticallyAdjustsScrollViewInsets;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_bottomLayoutGuide;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideBottom;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuideTop;
@property(readonly, nonatomic) MASViewAttribute *mas_topLayoutGuide;
@property(readonly, nonatomic) MDCBottomSheetPresentationController *mdc_bottomSheetPresentationController;
@property(readonly, nonatomic) MDCDialogPresentationController *mdc_dialogPresentationController;
- (const void *)mdm_transitionControllerKey;
- (void)mdm_setTransitionController:(id)arg1;
@property(readonly, nonatomic) id <MDMTransitionController> mdm_transitionController;
- (_Bool)isBeingPopped;
- (_Bool)isInsidePeek;
@property(nonatomic) __weak id <UIViewControllerPreviewing> gdk_previewingContext;
@property(retain, nonatomic) NSArray *gdk_previewActions;
- (void)prmvcsl_viewWillDisappear:(_Bool)arg1;
- (void)prmvcsl_viewDidAppear:(_Bool)arg1;
@property(retain, nonatomic, setter=goo_setPresentingSheetController:) GOOActionSheetController *goo_presentingSheetController;
@property(readonly, nonatomic) GOOPanelViewController *goo_panelViewController;
@property(readonly, nonatomic) GOOHeaderViewController *goo_headerViewController;
@property(nonatomic, setter=goo_setFlexibleHeader:) __weak id <GOOFlexibleHeader> goo_flexibleHeader;
@property(readonly, nonatomic) GOOHeaderConfiguration *goo_headerConfig;
- (_Bool)goo_hasHeaderConfig;
@end

