//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLPlayerStickySettings, NSError, UIView, UIViewController, YTICommand, YTIWatchNextResponse, YTNGWatchController, YTPlaybackData, YTPlayerResponse, YTWatchTransition;
@protocol YTNGWatchViewControllerProtocol, YTWatchPlayerViewControllerDelegate;

@protocol YTNGWatchControllerDelegate <NSObject>
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) MLPlayerStickySettings *mediaStickySettings;
- (void)runNonCriticalTasks;
- (void)newScreenLoggingStarted;
- (void)updateCurrentWatchTransition:(YTWatchTransition *)arg1;
- (void)updateCurrentWatchTransitionNavigationEndpoint:(YTICommand *)arg1;
- (void)playbackControllerDidPressPause;
- (void)playbackControllerDidPlay;
- (void)playbackControllerDidReceivePlayerResponse:(YTPlayerResponse *)arg1;
- (void)playbackControllerDidLoadPlayerWithPlaybackData:(YTPlaybackData *)arg1;
- (void)playbackControllerContentMediaTimeDidChangeToTime:(double)arg1 totalMediaTime:(double)arg2;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerCurrentVideoAspectRatioDidChange:(double)arg1;
- (void)playbackControllerWillFailWithError:(NSError *)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerStateDidChange;
- (_Bool)isFullScreen;
- (void)showSmallScreenWithCompletion:(void (^)(void))arg1;
- (void)showFullScreen;
- (void)watchController:(YTNGWatchController *)arg1 didReceiveWatchNextResponse:(YTIWatchNextResponse *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didClearPlayerViewControllerWithThumbnailView:(UIView *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didSetPlayerViewController:(UIViewController<YTWatchPlayerViewControllerDelegate> *)arg2;
- (void)watchController:(YTNGWatchController *)arg1 didCreateWatchViewController:(UIViewController<YTNGWatchViewControllerProtocol> *)arg2;
@end

