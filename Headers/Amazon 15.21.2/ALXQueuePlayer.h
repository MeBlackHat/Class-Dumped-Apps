//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALXAudioTrackDelegate-Protocol.h"

@class AVQueuePlayer, NSArray, NSMutableArray, NSString;
@protocol ALXQueuePlayerDelegate, OS_dispatch_queue;

@interface ALXQueuePlayer : NSObject <ALXAudioTrackDelegate>
{
    _Bool _playing;
    _Bool _interrupted;
    id <ALXQueuePlayerDelegate> _delegate;
    AVQueuePlayer *_player;
    NSMutableArray *_mutableTracks;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _boundaryObserverToken;
}

@property(retain, nonatomic) id boundaryObserverToken; // @synthesize boundaryObserverToken=_boundaryObserverToken;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(nonatomic) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(retain, nonatomic) NSMutableArray *mutableTracks; // @synthesize mutableTracks=_mutableTracks;
@property(retain, nonatomic) AVQueuePlayer *player; // @synthesize player=_player;
@property(nonatomic) __weak id <ALXQueuePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isPlaying;
- (void)trackDidLoad:(id)arg1;
- (void)trackPlaybackStalledStopped:(id)arg1;
- (void)trackPlaybackStalledStarted:(id)arg1;
- (void)trackFailedToPlayToEnd:(id)arg1 withError:(id)arg2;
- (void)trackDidPlayToEnd:(id)arg1;
- (void)resetInterruptionFlags;
- (void)updateCurrentOffsetWithTrack:(id)arg1;
- (void)callDidStartPlayingTrackIfNeededWithTrack:(id)arg1;
- (void)queueTracks:(id)arg1;
- (void)replaceQueueWithAudioTracks:(id)arg1;
- (void)endInterruptionWithOption:(unsigned long long)arg1;
- (void)beginInterruption;
- (void)handleAudioRouteChangeNotification:(id)arg1;
- (void)handleAudioInterruptionNotification:(id)arg1;
- (void)handleAudioResetNotification:(id)arg1;
- (void)registerForNotifications;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) unsigned long long currentOffsetInMillis;
@property(readonly, nonatomic) _Bool paused;
@property(readonly, nonatomic) NSArray *tracks;
- (void)setVolume:(float)arg1;
- (void)clearEnqueued;
- (void)clear;
- (void)stop;
- (void)queueTrack:(id)arg1;
- (void)pause;
- (void)resume;
- (void)play;
- (void)playTrack:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

