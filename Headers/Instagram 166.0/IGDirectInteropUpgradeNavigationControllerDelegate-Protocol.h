//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDirectInteropUpgradeBottomButtonsViewModel, UIViewController;

@protocol IGDirectInteropUpgradeNavigationControllerDelegate <NSObject>
- (void)moveBottomButtonsToViewController:(UIViewController *)arg1;
- (void)updateLoadingState:(_Bool)arg1;
- (void)updateBottomButtonsViewModel:(IGDirectInteropUpgradeBottomButtonsViewModel *)arg1;
- (void)dismissIfNeededWithCompletion:(void (^)(void))arg1;
@end

