//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGAsyncTask, IGStoryClipsLyricsCaptureAnimatedView, IGStoryMusicTrackClip, IGUserSession;

@interface IGStoryClipsLyricsCaptureView : IGPassthroughView
{
    IGStoryClipsLyricsCaptureAnimatedView *_lyricsAnimatedView;
    IGAsyncTask *_lyricsFetchTask;
    IGUserSession *_userSession;
    _Bool _lyricsOnCaptureSelected;
    IGStoryMusicTrackClip *_musicTrackClip;
    double _playbackTime;
    double _musicClipStartTime;
}

@property(nonatomic) double musicClipStartTime; // @synthesize musicClipStartTime=_musicClipStartTime;
@property(nonatomic) double playbackTime; // @synthesize playbackTime=_playbackTime;
@property(nonatomic) _Bool lyricsOnCaptureSelected; // @synthesize lyricsOnCaptureSelected=_lyricsOnCaptureSelected;
@property(retain, nonatomic) IGStoryMusicTrackClip *musicTrackClip; // @synthesize musicTrackClip=_musicTrackClip;
- (void).cxx_destruct;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 userSession:(id)arg2;

@end

