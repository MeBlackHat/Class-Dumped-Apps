//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class MDCSlider, YTFormattedStringLabel, YTQTMButton;

@protocol MDXVolumeControlDialogViewProtocol <NSObject>
@property(readonly, nonatomic) YTFormattedStringLabel *screenNameLabel;
@property(readonly, nonatomic) YTQTMButton *closeButton;
@property(readonly, nonatomic) YTQTMButton *disconnectButton;
@property(readonly, nonatomic) MDCSlider *volumeSlider;
@property(nonatomic) double volume;

@optional
@property(readonly, nonatomic) YTQTMButton *remoteButton;
@property(readonly, nonatomic) YTQTMButton *voiceSearchButton;
@end

