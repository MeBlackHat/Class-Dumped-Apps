//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1VoicePlaybackView.h>

#import <T1Twitter/T1VideoCaptionsViewDelegate-Protocol.h>
#import <T1Twitter/TAVUIAutoplayable-Protocol.h>

@class NSString, NSTimer, T1VideoCaptionsView, T1VoiceAvatarView, UIButton, UIImageView, UILabel, UITapGestureRecognizer, UIView;
@protocol T1VoiceViewDelegate, T1VoiceViewModel;

@interface T1VoiceView : T1VoicePlaybackView <T1VideoCaptionsViewDelegate, TAVUIAutoplayable>
{
    id <T1VoiceViewDelegate> _delegate;
    id <T1VoiceViewModel> _viewModel;
    T1VoiceAvatarView *_avatarView;
    UILabel *_positionLabel;
    UIImageView *_brandingImageView;
    UILabel *_brandingLabel;
    UILabel *_durationLabel;
    UIButton *_playPauseButton;
    UIImageView *_soundImageView;
    T1VideoCaptionsView *_captionsView;
    NSTimer *_audioLevelTimer;
    unsigned long long _audioLevelTickValue;
    UITapGestureRecognizer *_tapGesture;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) unsigned long long audioLevelTickValue; // @synthesize audioLevelTickValue=_audioLevelTickValue;
@property(retain, nonatomic) NSTimer *audioLevelTimer; // @synthesize audioLevelTimer=_audioLevelTimer;
@property(retain, nonatomic) T1VideoCaptionsView *captionsView; // @synthesize captionsView=_captionsView;
@property(retain, nonatomic) UIImageView *soundImageView; // @synthesize soundImageView=_soundImageView;
@property(retain, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *brandingLabel; // @synthesize brandingLabel=_brandingLabel;
@property(retain, nonatomic) UIImageView *brandingImageView; // @synthesize brandingImageView=_brandingImageView;
@property(retain, nonatomic) UILabel *positionLabel; // @synthesize positionLabel=_positionLabel;
@property(retain, nonatomic) T1VoiceAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) id <T1VoiceViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <T1VoiceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_updateSubviewsVisibility;
- (void)_t1_handleTapEvent;
- (void)_t1_updateAudioLevelValue;
- (void)_t1_endAudioLevelUpdates;
- (void)_t1_beginAudioLevelUpdates;
- (void)willResignAsActiveAutoplayableWithManager:(id)arg1;
- (void)didBecomeActiveAutoplayableWithManager:(id)arg1;
@property(readonly, nonatomic) UIView *autoplayableView;
- (void)player:(id)arg1 didUpdatePlaybackState:(id)arg2;
- (void)videoCaptionsView:(id)arg1 legibleMediaSelectionOption:(id)arg2;
- (void)videoCaptionsView:(id)arg1 enableCaptions:(_Bool)arg2;
- (long long)t1_playerViewAttachmentPriority;
- (void)_t1_createCaptionsViewIfNeeded;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithImagePipeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

