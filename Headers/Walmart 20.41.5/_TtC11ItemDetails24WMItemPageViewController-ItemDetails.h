//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/_TtC11ItemDetails24WMItemPageViewController.h>

@interface _TtC11ItemDetails24WMItemPageViewController (ItemDetails)
- (void)refreshTableForSectionController:(id)arg1;
- (void)sectionController:(id)arg1 popToRootViewControllerAnimated:(_Bool)arg2;
- (void)sectionController:(id)arg1 popViewController:(_Bool)arg2;
- (void)sectionController:(id)arg1 dismissViewControllerAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sectionController:(id)arg1 presentViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)sectionController:(id)arg1 pushViewController:(id)arg2 animated:(_Bool)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)viewNeedsRefresh;
- (void)nextDayEligibilityUpdatedWithEligibility:(id)arg1;
- (void)nextDayEnabledWithEnabled:(_Bool)arg1;
- (void)applicationWillResignActive;
@property(nonatomic, readonly) double bottomInset;
@property(nonatomic, readonly) _Bool hasShadow;
@property(nonatomic, readonly) double rightInset;
@property(nonatomic, readonly) double leftInset;
- (void)checkPerimeterXError:(id)arg1;
@end

