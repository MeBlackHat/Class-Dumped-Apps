//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSKVoiceSearchContainerView.h"

@class GSKMicButton, UIView;

@interface GSKGlifVoiceSearchContainerView : GSKVoiceSearchContainerView
{
    GSKMicButton *_micButton;
    UIView *_glifView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *glifView; // @synthesize glifView=_glifView;
@property(readonly, nonatomic) GSKMicButton *micButton; // @synthesize micButton=_micButton;
- (double)computeStreamingTextViewMaxHeight;
- (void)updateUserInterfaceWithColorTheme:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

