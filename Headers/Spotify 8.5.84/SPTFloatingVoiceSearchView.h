//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTSearchVoiceEnabledView-Protocol.h"

@class GLUEButton, NSLayoutConstraint, NSString;
@protocol SPTSearchVoiceEnabledViewDelegate;

@interface SPTFloatingVoiceSearchView : UIView <SPTSearchVoiceEnabledView>
{
    id <SPTSearchVoiceEnabledViewDelegate> _voiceDelegate;
    GLUEButton *_microphoneButton;
    NSLayoutConstraint *_bottomConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) GLUEButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(nonatomic) __weak id <SPTSearchVoiceEnabledViewDelegate> voiceDelegate; // @synthesize voiceDelegate=_voiceDelegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeVoiceElement;
- (void)showVoiceElement;
- (_Bool)showingVoiceElement;
- (void)microphoneButtonPressed:(id)arg1;
- (void)setupLayout;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

