//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGChainingFeedViewController, IGMedia;

@protocol IGChainingFeedViewControllerEventHandler <NSObject>
- (void)chainingFeedViewControllerWillResign:(IGChainingFeedViewController *)arg1;
- (void)chainingFeedViewControllerDidDisappear:(IGChainingFeedViewController *)arg1;
- (void)chainingFeedViewControllerWillDisappear:(IGChainingFeedViewController *)arg1;
- (void)chainingFeedViewController:(IGChainingFeedViewController *)arg1 didObserveFocusedVideoStateUpdate:(CDStruct_c3b9c2ee)arg2;
- (void)chainingFeedViewController:(IGChainingFeedViewController *)arg1 didObserveFocusChangeToSection:(long long)arg2 focusedItem:(IGMedia *)arg3;
@end

