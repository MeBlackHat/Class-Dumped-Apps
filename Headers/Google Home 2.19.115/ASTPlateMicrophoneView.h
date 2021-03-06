//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GSKGlifControllerDelegate-Protocol.h"
#import "GSKGlifDotsControllerAnimationDelegate-Protocol.h"

@class GSKGlifController, GSKGlifSpeechVolumeStream, NSString;
@protocol ASTPlateMicrophoneViewDelegate;

@interface ASTPlateMicrophoneView : UIView <GSKGlifControllerDelegate, GSKGlifDotsControllerAnimationDelegate>
{
    _Bool _ensuringState;
    double _glifViewScale;
    id <ASTPlateMicrophoneViewDelegate> _delegate;
    GSKGlifController *_micGlifController;
    UIView *_glifView;
    unsigned long long _state;
    GSKGlifSpeechVolumeStream *_volumeStream;
}

@property(nonatomic) _Bool ensuringState; // @synthesize ensuringState=_ensuringState;
@property(retain, nonatomic) GSKGlifSpeechVolumeStream *volumeStream; // @synthesize volumeStream=_volumeStream;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *glifView; // @synthesize glifView=_glifView;
@property(retain, nonatomic) GSKGlifController *micGlifController; // @synthesize micGlifController=_micGlifController;
@property(nonatomic) __weak id <ASTPlateMicrophoneViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double glifViewScale; // @synthesize glifViewScale=_glifViewScale;
- (void).cxx_destruct;
- (void)setGlifToReplyState:(id)arg1;
- (void)setGlifToThinkingState;
- (void)setGlifToIdleState;
- (void)setGlifToListeningState:(id)arg1;
@property(readonly, nonatomic) UIView *iconView;
@property(readonly, nonatomic) UIView *dotsView;
- (_Bool)canTransitionToDotState:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool isInDotsState;
@property(readonly, nonatomic) _Bool isTransitioning;
- (unsigned long long)glifStateFromMicrophoneState;
- (void)enqueueEnsureState;
- (void)ensureState;
- (void)ensureStateIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

