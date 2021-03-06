//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableSet, NSURL, SPTPlayerState;
@protocol SPTQueueTrack;

@protocol SPTQueueLogger <NSObject>
- (void)logClearQueueWithNumberOfItemsToRemove:(unsigned long long)arg1;
- (void)logSpeedControlMenuButtonTapped;
- (void)logSleepTimerButtonTapped;
- (void)logBanButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(SPTPlayerState *)arg2;
- (void)logHeartButtonTappedWithFeedbackButtonBehavior:(long long)arg1 playerState:(SPTPlayerState *)arg2;
- (void)logSkip15SecondsBackwardTapped;
- (void)logSkip15SecondsForwardTapped;
- (void)logDragToSortUpNextTrack:(id <SPTQueueTrack>)arg1 atIndex:(long long)arg2;
- (void)logTapToDeselectUpNextTrack:(id <SPTQueueTrack>)arg1 atIndex:(long long)arg2;
- (void)logTapToSelectUpNextTrack:(id <SPTQueueTrack>)arg1 atIndex:(long long)arg2;
- (void)logTapUpNextTrack:(id <SPTQueueTrack>)arg1 atIndex:(long long)arg2;
- (void)logTapNowPlayingTrack;
- (void)logAddSelectedTracks:(NSMutableSet *)arg1;
- (void)logRemoveSelectedTracks:(NSMutableSet *)arg1;
- (void)logRepeatButtonTappedWithMode:(unsigned long long)arg1;
- (void)logViewDidScrollWithPlayerState:(SPTPlayerState *)arg1;
- (void)logShuffleButtonTappedEnableShuffle:(_Bool)arg1 playerState:(SPTPlayerState *)arg2;
- (void)logSkipToNextTappedWithPlayerState:(SPTPlayerState *)arg1;
- (void)logSkipToPreviousTappedWithPlayerState:(SPTPlayerState *)arg1;
- (void)logPlayButtonTappedWithBehavior:(long long)arg1 playerState:(SPTPlayerState *)arg2;
- (void)logGoToPlayContextButtonTappedWithPlayerState:(SPTPlayerState *)arg1 contextURI:(NSURL *)arg2;
- (void)logSwipeToCloseWithPlayerState:(SPTPlayerState *)arg1;
- (void)logCloseButtonTappedWithPlayerState:(SPTPlayerState *)arg1;
- (void)logGoToNowPlayingViewButtonTappedWithPlayerState:(SPTPlayerState *)arg1;
@end

