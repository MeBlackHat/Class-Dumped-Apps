//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryMusicTrack, IGStoryOriginalSoundInfo, IGSundialAudioBrowserContentViewController;

@protocol IGSundialAudioBrowserContentViewControllerDelegate <NSObject>
- (void)audioBrowserContentViewControllerDidTapSaveButton:(IGSundialAudioBrowserContentViewController *)arg1;
- (void)audioBrowserContentViewController:(IGSundialAudioBrowserContentViewController *)arg1 didTapOriginalAudio:(IGStoryOriginalSoundInfo *)arg2;
- (void)audioBrowserContentViewController:(IGSundialAudioBrowserContentViewController *)arg1 didTapMusicTrack:(IGStoryMusicTrack *)arg2;
@end

