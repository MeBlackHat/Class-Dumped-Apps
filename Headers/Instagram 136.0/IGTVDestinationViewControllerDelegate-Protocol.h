//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGTVDestinationViewController;

@protocol IGTVDestinationViewControllerDelegate <NSObject>
- (void)destinationViewControllerWillPerformUpdates:(IGTVDestinationViewController *)arg1;
- (_Bool)shouldDestinationViewControllerConsiderSafeAreaForPreferredContentBottomInset:(IGTVDestinationViewController *)arg1;
- (_Bool)shouldDestinationViewControllerPreferTabBarHidden:(IGTVDestinationViewController *)arg1;
- (double)refreshControlTopInsetForDestinationViewController:(IGTVDestinationViewController *)arg1;
- (double)adjustedInsetForTopScrollIndicatorInset:(double)arg1 destinationViewController:(IGTVDestinationViewController *)arg2;
- (double)adjustedInsetForTopContentInset:(double)arg1 destinationViewController:(IGTVDestinationViewController *)arg2;
@end

