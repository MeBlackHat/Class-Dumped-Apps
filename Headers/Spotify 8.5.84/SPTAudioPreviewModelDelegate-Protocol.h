//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTAudioPreviewModel;

@protocol SPTAudioPreviewModelDelegate <NSObject>
- (void)audioPreviewModelDidChangeTrackIdentifier:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangeEndTime:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangeStartTime:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidStop:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangePaused:(id <SPTAudioPreviewModel>)arg1;
- (void)audioPreviewModelDidChangePlaying:(id <SPTAudioPreviewModel>)arg1;
@end

