//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AudioPlayerDelegate-Protocol.h"
#import "DirectorsCutPlayerDelegate-Protocol.h"
#import "MetadataPlayerDelegate-Protocol.h"
#import "NXSConnectionDelegate-Protocol.h"
#import "NXSPlayer-Protocol.h"
#import "NXSTimerTargetProtocol-Protocol.h"
#import "VideoPlayerDelegate-Protocol.h"

@class GLRenderViewController, NSDate, NSString, NSTimer, NXSAnalyticsCoordinator, NXSConnection, StreamStateNG, UIView;
@protocol NXSPlayerDelegate;

@interface NXSVideoPlayer : NSObject <AudioPlayerDelegate, DirectorsCutPlayerDelegate, MetadataPlayerDelegate, NXSTimerTargetProtocol, NXSConnectionDelegate, VideoPlayerDelegate, NXSPlayer>
{
    NSTimer *_stateCheckTimer;
    NSTimer *_statsLogTimer;
    GLRenderViewController *_renderView;
    int _playbackSessionId;
    _Bool _playAudio;
    _Bool _isLive;
    NSDate *_lastPresentTimestamp;
    _Bool _isTrackingLatencyMeasurement;
    _Bool _useVideoFrameSizeForIntrinsicContentSize;
    float _volume;
    int _playerState;
    unsigned int _currentPacketSsrc;
    unsigned int _currentPacketSequence;
    unsigned int _pixelBufferFormat;
    id <NXSPlayerDelegate> _delegate;
    StreamStateNG *_audioStream;
    StreamStateNG *_videoStream;
    StreamStateNG *_directorsCutStream;
    StreamStateNG *_metadataStream;
    NSDate *_requestedStartTime;
    NSDate *_lastBufferTime;
    NXSConnection *_connection;
    double _currentPacketDisplayTime;
    double _currentPacketStartTime;
    NXSAnalyticsCoordinator *_analyticsCoordinator;
    long long _videoQualityOfService;
}

+ (id)audioPlayerWithCodecType:(int)arg1 sampleRate:(int)arg2 packetBuffer:(id)arg3 privateData:(id)arg4 remoteSessionStartTime:(id)arg5 userRequestedStartTime:(id)arg6;
+ (_Bool)hasWifiConnection;
+ (int)bestProfileForConnection;
+ (unsigned int)newPlaybackSessionId;
- (void).cxx_destruct;
@property(nonatomic) _Bool useVideoFrameSizeForIntrinsicContentSize; // @synthesize useVideoFrameSizeForIntrinsicContentSize=_useVideoFrameSizeForIntrinsicContentSize;
@property(nonatomic) long long videoQualityOfService; // @synthesize videoQualityOfService=_videoQualityOfService;
@property(retain, nonatomic) NXSAnalyticsCoordinator *analyticsCoordinator; // @synthesize analyticsCoordinator=_analyticsCoordinator;
@property(nonatomic) unsigned int pixelBufferFormat; // @synthesize pixelBufferFormat=_pixelBufferFormat;
@property(nonatomic) unsigned int currentPacketSequence; // @synthesize currentPacketSequence=_currentPacketSequence;
@property(nonatomic) unsigned int currentPacketSsrc; // @synthesize currentPacketSsrc=_currentPacketSsrc;
@property(nonatomic) double currentPacketStartTime; // @synthesize currentPacketStartTime=_currentPacketStartTime;
@property(nonatomic) double currentPacketDisplayTime; // @synthesize currentPacketDisplayTime=_currentPacketDisplayTime;
@property(nonatomic) _Bool isTrackingLatencyMeasurement; // @synthesize isTrackingLatencyMeasurement=_isTrackingLatencyMeasurement;
@property(retain, nonatomic) NXSConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *lastBufferTime; // @synthesize lastBufferTime=_lastBufferTime;
@property(copy, nonatomic) NSDate *requestedStartTime; // @synthesize requestedStartTime=_requestedStartTime;
@property(retain, nonatomic) StreamStateNG *metadataStream; // @synthesize metadataStream=_metadataStream;
@property(retain, nonatomic) StreamStateNG *directorsCutStream; // @synthesize directorsCutStream=_directorsCutStream;
@property(retain, nonatomic) StreamStateNG *videoStream; // @synthesize videoStream=_videoStream;
@property(retain, nonatomic) StreamStateNG *audioStream; // @synthesize audioStream=_audioStream;
@property int playerState; // @synthesize playerState=_playerState;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) __weak id <NXSPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerFired:(id)arg1;
- (void)connection:(id)arg1 didReceiveRedirect:(id)arg2;
- (void)connection:(id)arg1 didReceivePlaybackEnd:(id)arg2;
- (void)updateSlaveTimingForStream:(id)arg1 withPTS:(long long)arg2;
- (void)connection:(id)arg1 didReceivePlaybackPacket:(id)arg2;
- (void)connection:(id)arg1 didReceivePlaybackBegin:(id)arg2;
- (void)connection:(id)arg1 didEstablishConnection:(id)arg2;
- (void)connection:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)connection:(id)arg1 willDisconnectWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveError:(id)arg2;
- (void)metadataPlayer:(id)arg1 shouldPresentMetaPayload:(id)arg2;
- (void)directorsCutPlayer:(id)arg1 shouldPresentDirectorsCutRegions:(id)arg2;
- (void)playerDidDropFrame:(id)arg1;
- (void)presentFrame:(id)arg1;
- (void)playerDidPresentPTS:(long long)arg1;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) UIView *view;
- (void)clearView;
- (void)refreshView;
- (id)snapshot;
- (void)stopPlayingWithEndReason:(unsigned long long)arg1;
- (void)stopPlaying;
- (void)startPlayingWithPlaybackProfile:(int)arg1 startTime:(id)arg2 directorsCutEnabled:(_Bool)arg3 metadataEnabled:(_Bool)arg4;
- (void)playThumbnailStream;
- (void)playAtTime:(id)arg1 directorsCutEnabled:(_Bool)arg2 metadataEnabled:(_Bool)arg3;
- (void)disconnect;
- (void)connect;
- (void)checkBuffering;
- (_Bool)packetBuffersAreBuffered;
- (_Bool)packetBuffersAreDry;
- (id)getMaster;
- (void)logStats;
- (void)resetWithEndReason:(unsigned long long)arg1;
- (void)dealloc;
- (void)resetRenderView;
- (id)initWithNXSConnection:(id)arg1 playAudio:(_Bool)arg2 videoQualityOfService:(long long)arg3 bufferPixelFormat:(unsigned int)arg4 useVideoFrameSizeForIntrinsicContentSize:(_Bool)arg5;
- (id)initWithNXSConnection:(id)arg1 playAudio:(_Bool)arg2 videoQualityOfService:(long long)arg3;
- (id)initWithNXSConnection:(id)arg1 playAudio:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

