//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, UILabel;
@protocol IESLiveSettings;

@interface IESLiveMTSmallRedEvelopeAnimationView : UIView <CAAnimationDelegate>
{
    UIView *_containerView;
    UIImageView *_diamondImageView;
    UIImageView *_headBgView;
    UILabel *_diamond;
    UILabel *_textLabel;
    CDUnknownBlockType _complete;
    id <IESLiveSettings> _settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *diamond; // @synthesize diamond=_diamond;
@property(retain, nonatomic) UIImageView *headBgView; // @synthesize headBgView=_headBgView;
@property(retain, nonatomic) UIImageView *diamondImageView; // @synthesize diamondImageView=_diamondImageView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)doAnimationWithFinalFrame:(struct CGRect)arg1 complete:(CDUnknownBlockType)arg2;
- (void)renderWith:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

