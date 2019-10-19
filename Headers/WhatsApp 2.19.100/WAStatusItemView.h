//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, WAStatusItem;
@protocol WAStatusItemViewDelegate;

@interface WAStatusItemView : UIView
{
    CADisplayLink *_displayLink;
    double _pauseStartTime;
    double _focusStartTime;
    double _totalFocusTime;
    double _totalPauseTime;
    double _itemViewStartTime;
    _Bool _needsUpdateAccessibilityElements;
    NSArray *_accessibilityElements;
    _Bool _paused;
    _Bool _inFocus;
    _Bool _audioMuted;
    _Bool _shownFrom3DTouch;
    float _progress;
    WAStatusItem *_statusItem;
    id <WAStatusItemViewDelegate> _delegate;
}

+ (Class)viewClassForStatusItem:(id)arg1;
@property(nonatomic, getter=isShownFrom3DTouch) _Bool shownFrom3DTouch; // @synthesize shownFrom3DTouch=_shownFrom3DTouch;
@property(nonatomic) __weak id <WAStatusItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic, getter=isInFocus) _Bool inFocus; // @synthesize inFocus=_inFocus;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) WAStatusItem *statusItem; // @synthesize statusItem=_statusItem;
- (void).cxx_destruct;
- (void)openAnnotation:(id)arg1 atPoint:(struct CGPoint)arg2 inAnnotationView:(id)arg3;
- (id)newInteractiveAnnotationViewWithContainerView:(id)arg1;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateAccessibilityElementsIfNeeded;
- (void)setNeedsUpdateAccessibilityElements;
- (id)itemAccessibilityLabel;
- (void)finishPresentingIfPossible;
- (_Bool)isFinishedPresenting;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)rewind;
- (void)handleDisplayLinkUpdate:(id)arg1;
- (void)cancelTimerIfNeeded;
- (void)startTimerIfNeeded;
- (void)handleItemUpdated:(id)arg1;
- (void)didUpdateItem;
- (void)didSetItem;
- (_Bool)managingOwnTiming;
- (double)presentationTime;
- (double)position;
- (double)timeSpent;
- (double)playTime;
- (double)focusedTime;
- (double)pausedTime;
- (double)loadTime;
- (void)prepareForReuse;
@property(readonly, nonatomic, getter=isHandlingPanGesture) _Bool handlingPanGesture;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

