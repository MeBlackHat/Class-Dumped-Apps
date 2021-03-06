//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ByteRtcEngineKit/ByteRtcRoomDelegate-Protocol.h>

@class ByteRtcEngineKit, ByteRtcLiveTranscoding, NSString;
@protocol ByteRtcRoomDelegate;

@interface ByteRtcRoom : NSObject <ByteRtcRoomDelegate>
{
    struct IRtcEngine *_rtcEngine;
    struct IRTCRoom *_rtcRoom;
    struct ByteRtcRoomEventHandler *_byteRtcRoomEventHandler;
    id <ByteRtcRoomDelegate> _delegate;
    NSString *_roomId;
    long long _nowClientRole;
    ByteRtcLiveTranscoding *_transCoding;
    ByteRtcEngineKit *_engine;
}

@property(nonatomic) __weak ByteRtcEngineKit *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) ByteRtcLiveTranscoding *transCoding; // @synthesize transCoding=_transCoding;
@property(nonatomic) long long nowClientRole; // @synthesize nowClientRole=_nowClientRole;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak id <ByteRtcRoomDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)TransCodeProfiletoJson:(id)arg1 Action:(id)arg2;
- (void)destroyResourceInternal;
- (void)destroyResource;
- (void)enableSubscribeSelf:(_Bool)arg1;
- (long long)sendMessage:(id)arg1 message:(id)arg2;
- (int)setupRemoteScreen:(id)arg1;
- (int)setupRemoteVideo:(id)arg1;
- (int)setVideoCompositingLayout:(id)arg1;
- (int)disableLiveTranscoding;
- (int)enableLiveTranscoding:(id)arg1;
- (int)unMuteRemoteVideoStream:(id)arg1;
- (int)muteRemoteVideoStream:(id)arg1;
- (int)setDefaultMuteAllRemoteVideoStreams:(_Bool)arg1;
- (int)unMuteAllRemoteVideoStreams;
- (int)muteAllRemoteVideoStreams;
- (int)unMuteRemoteAudioStream:(id)arg1;
- (int)muteRemoteAudioStream:(id)arg1;
- (int)setDefaultMuteAllRemoteAudioStreams:(_Bool)arg1;
- (int)unMuteAllRemoteAudioStreams;
- (int)muteAllRemoteAudioStreams;
- (int)enableAudioVolumeIndication:(long long)arg1 smooth:(long long)arg2;
- (int)enableAutoSubscribe:(_Bool)arg1;
- (int)unSubscribeStream:(id)arg1;
- (int)subscribeStream:(id)arg1 subscribeConfig:(id)arg2;
- (int)unpublish;
- (int)publish;
- (int)renewToken:(id)arg1;
- (int)leaveRoom;
- (int)setChannelProfile:(long long)arg1;
- (long long)clientRole;
- (int)setClientRole:(long long)arg1;
- (int)joinRoomByToken:(id)arg1 userId:(id)arg2 info:(id)arg3 tracdId:(id)arg4;
- (int)joinRoomByToken:(id)arg1 userId:(id)arg2 info:(id)arg3;
- (id)getRoomId;
- (void)setRtcRoomDelegate:(id)arg1;
- (void)destroy;
- (void)dealloc;
- (void)setByteRtcEngine:(id)arg1;
- (id)initWithRtcRoom:(struct IRTCRoom *)arg1 roomId:(id)arg2;
- (void)rtcRoom:(id)arg1 remoteVideoStats:(id)arg2;
- (void)rtcRoom:(id)arg1 localVideoStats:(id)arg2;
- (void)rtcRoom:(id)arg1 didLocalVideoEnabled:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcRoom:(id)arg1 didVideoMuted:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcRoom:(id)arg1 firstRemoteVideoFrameOfUid:(id)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)rtcRoom:(id)arg1 videoSizeChangedOfUid:(id)arg2 size:(struct CGSize)arg3 rotation:(long long)arg4;
- (void)rtcRoom:(id)arg1 firstRemoteVideoDecodedOfUid:(id)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)rtcRoom:(id)arg1 firstLocalVideoFrameWithSize:(struct CGSize)arg2 elapsed:(long long)arg3;
- (void)rtcRoom:(id)arg1 TransCodingWithUrl:(id)arg2 errorCode:(long long)arg3;
- (void)rtcRoom:(id)arg1 didMessageSendResult:(long long)arg2 error:(long long)arg3;
- (void)rtcRoom:(id)arg1 didMessageReceived:(id)arg2 message:(id)arg3;
- (void)rtcRoom:(id)arg1 didCustomMessage:(id)arg2;
- (void)rtcRoom:(id)arg1 didPublishSucceedOfStream:(id)arg2;
- (void)rtcRoom:(id)arg1 onStreamSubscribed:(long long)arg2 streamID:(id)arg3 subscribeConfig:(id)arg4;
- (void)rtcRoom:(id)arg1 didStreamRemoved:(id)arg2 stream:(id)arg3;
- (void)rtcRoom:(id)arg1 onStreamAdd:(id)arg2;
- (void)rtcRoom:(id)arg1 firstRemoteAudioFrameOfUid:(id)arg2 elapsed:(long long)arg3;
- (void)rtcRoom:(id)arg1 firstLocalAudioFrame:(long long)arg2;
- (void)rtcRoomConnectionDidInterrupted:(id)arg1;
- (void)rtcRoomConnectionDidLost:(id)arg1;
- (void)rtcRoom:(id)arg1 remoteAudioStats:(id)arg2;
- (void)rtcRoom:(id)arg1 localAudioStats:(id)arg2;
- (void)rtcRoom:(id)arg1 didLocalAudioEnabled:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcRoom:(id)arg1 didAudioMuted:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcRoom:(id)arg1 didOfflineOfUid:(id)arg2 reason:(unsigned long long)arg3;
- (void)rtcRoom:(id)arg1 didJoinedOfUid:(id)arg2 elapsed:(long long)arg3;
- (void)rtcRoom:(id)arg1 networkQuality:(id)arg2 txQuality:(unsigned long long)arg3 rxQuality:(unsigned long long)arg4;
- (void)rtcRoom:(id)arg1 reportRtcStats:(id)arg2;
- (void)rtcRoom:(id)arg1 reportAudioVolumeIndicationOfSpeakers:(id)arg2 totalVolume:(long long)arg3;
- (void)rtcRoom:(id)arg1 audioQualityOfUid:(id)arg2 quality:(unsigned long long)arg3 delay:(unsigned long long)arg4 lost:(unsigned long long)arg5;
- (void)rtcRoom:(id)arg1 didOccurError:(long long)arg2;
- (void)rtcRoom:(id)arg1 didOccurWarning:(long long)arg2;
- (void)rtcRoomDidLeaveRoom:(id)arg1 withStats:(id)arg2;
- (void)rtcRoom:(id)arg1 didRejoinRoom:(id)arg2 withUid:(id)arg3 elapsed:(long long)arg4;
- (void)rtcRoom:(id)arg1 didJoinRoom:(id)arg2 withUid:(id)arg3 elapsed:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

