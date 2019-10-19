//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAPttSliderDelegate-Protocol.h"

@class UIButton, UILabel, WAPttPlayer, WAPttSlider;
@protocol WAInterruptedPttRecordingViewDelegate;

@interface WAInterruptedPttRecordingView : UIView <WAPttSliderDelegate>
{
    UILabel *_durationLabel;
    WAPttSlider *_playerScrubber;
    WAPttPlayer *_player;
    long long _audioDuration;
    _Bool _resumePlaybackAfterDragging;
    float _sliderValueOnDragBegin;
    float _currentProgress;
    _Bool _isDragging;
    _Bool _suppressVoiceOverUntilFocusIsLost;
    id <WAInterruptedPttRecordingViewDelegate> _delegate;
    double _duration;
    UIButton *_playPauseButton;
}

@property(readonly, nonatomic) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) __weak id <WAInterruptedPttRecordingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)accessibilityElementDidLoseFocus;
- (_Bool)accessibilityActivate;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (_Bool)pttSliderShouldUseLargeThumbImage:(id)arg1;
- (void)playerScrubberDidEndDragging:(id)arg1;
- (void)playerScrubberDidChangeValue:(id)arg1;
- (void)playerScrubberDidStartDragging:(id)arg1;
- (void)pauseAudio;
- (void)playAudio;
- (void)updateDurationView;
- (void)updatePushToTalkControls;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithInterruptedPTTRecording:(id)arg1;

@end

