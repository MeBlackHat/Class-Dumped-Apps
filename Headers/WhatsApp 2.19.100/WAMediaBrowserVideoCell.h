//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMediaBrowserZoomableMediaCell.h"

#import "WAMediaPlayerDelegate-Protocol.h"
#import "WAMediaPlayerTransportControlViewDelegate-Protocol.h"

@class NSString, UIButton, UIFont, UIImageView, UIView, WAInteractiveAnnotationView, WAMediaPlayerBase, WAMediaPlayerPlayButtonView, WAMediaPlayerTransportControlView, WAMediaTransferProgressView;

@interface WAMediaBrowserVideoCell : WAMediaBrowserZoomableMediaCell <WAMediaPlayerDelegate, WAMediaPlayerTransportControlViewDelegate>
{
    WAMediaPlayerBase *_mediaPlayer;
    WAMediaPlayerTransportControlView *_playerTransportBar;
    WAMediaPlayerPlayButtonView *_playButtonView;
    WAMediaTransferProgressView *_transferView;
    _Bool _exitFullScreenAfterPlayingToEnd;
    UIView *_missingVideoContainerView;
    UIImageView *_missingVideoIconView;
    UIButton *_missingVideoButton;
    UIFont *_missingVideoButtonFont;
    _Bool _pendingInitialPlayback;
    long long _userInteractionDisabledCount;
    UIView *_touchTrapperView;
    WAInteractiveAnnotationView *_annotationsView;
}

- (void).cxx_destruct;
- (void)setAccessibilityLabelForContent:(id)arg1;
- (void)mediaPlayerTransportControlViewDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerTransportControlViewDidEndScrubbing:(id)arg1;
- (void)mediaPlayerTransportControlViewDidBeginScrubbing:(id)arg1;
- (_Bool)canMediaPlayerTransportControlViewBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidEndScrubbing:(id)arg1;
- (void)mediaPlayerDidBeginScrubbing:(id)arg1;
- (void)mediaPlayerDidPlayToEndTime:(id)arg1;
- (void)mediaPlayerDidFinishLoading:(id)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(id)arg1;
- (void)mediaPlayerStatusDidChange:(id)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(id)arg1;
- (void)updateLoadedProgress;
@property(nonatomic) CDStruct_1b6d18a9 currentTime;
- (void)mediaDownloadProgressDidChange:(id)arg1;
- (_Bool)isStreaming;
- (void)setPresentationState:(long long)arg1;
- (long long)presentationState;
- (struct CGSize)bestSizeForMediaPlayer;
- (_Bool)shouldSetPlayerItem;
- (void)loadMediaPlayerItemIfNeeded;
- (void)missingVideoButtonTapped:(id)arg1;
- (void)didChangeObjectAtStage:(long long)arg1;
- (void)setMediaPlayerPosterImage:(id)arg1;
- (void)didChangeObject;
- (void)setDisplaying:(_Bool)arg1;
- (_Bool)shouldConsiderTouchForTaps:(struct CGPoint)arg1;
- (_Bool)supportsFullScreenPresentation;
- (id)viewForZooming;
- (void)prepareForReuse;
- (void)setTransferring:(_Bool)arg1;
- (void)setScrubbing:(_Bool)arg1;
- (void)didUpdateParallaxOffset;
- (void)playButtonTapped:(id)arg1;
- (void)updatePlayerBarAlpha;
- (void)addOrUpdateAnnotationsView;
- (void)layoutMissingVideoView;
- (void)setPlayButtonIsVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviewsInCell;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillPresentCallScreen:(id)arg1;
- (void)endDisablingUserInteraction;
- (void)beginDisablingUserInteraction;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

