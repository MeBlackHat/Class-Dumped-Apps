//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGFeedItem, IGVideoFeedViewController, IGVideoPlaybackItem;

@protocol IGVideoFeedViewControllerDelegate <NSObject>
- (void)videoFeedViewController:(IGVideoFeedViewController *)arg1 didBeginPlayingItem:(IGVideoPlaybackItem *)arg2;
- (void)videoFeedViewController:(IGVideoFeedViewController *)arg1 willDismissWithFocusedFeedItem:(IGFeedItem *)arg2 currentPlaybackTime:(double)arg3;
@end

