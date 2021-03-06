//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKRemoteMediaClient.h"

#import "GCKMediaControlChannelAdInfoParser-Protocol.h"
#import "GCKMediaControlChannelDelegate-Protocol.h"

@class GCKAnalyticsEventLogger, GCKBTimestampedObject, GCKCastChannel, GCKMediaControlChannel, NSMutableDictionary, NSString, NSTimer;
@protocol GCKRemoteMediaClientAdInfoParserDelegate;

@interface GCKCastRemoteMediaClient : GCKRemoteMediaClient <GCKMediaControlChannelDelegate, GCKMediaControlChannelAdInfoParser>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    NSMutableDictionary *_requests;
    NSTimer *_continuousStatusSyncTimer;
    GCKBTimestampedObject *_lastKnownMediaStatusObject;
    id <GCKRemoteMediaClientAdInfoParserDelegate> _adInfoParserDelegate;
    GCKMediaControlChannel *_mediaControlChannel;
}

+ (id)requiredNamespace;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)handleSessionDisconnected;
- (void)handleSessionConnected;
- (id)channel;
- (id)parseAdBreaksFromMediaStatus:(id)arg1;
- (_Bool)parseIsPlayingAdFromMediaStatus:(id)arg1;
- (id)adInfoParserDelegate;
- (void)setAdInfoParserDelegate:(id)arg1;
- (void)untrackRequest:(long long)arg1;
- (id)startRequestWithID:(long long)arg1;
- (void)cancelAllRequests;
- (void)cancelRequest:(long long)arg1;
- (void)mediaControlChannel:(id)arg1 requestDidFailWithID:(long long)arg2 error:(id)arg3;
- (void)mediaControlChannel:(id)arg1 didCancelRequestWithID:(long long)arg2;
- (void)mediaControlChannel:(id)arg1 didReplaceRequestWithID:(long long)arg2;
- (void)mediaControlChannel:(id)arg1 requestDidCompleteWithID:(long long)arg2;
- (void)mediaControlChannel:(id)arg1 didRemoveQueueItemsWithIDs:(id)arg2;
- (void)mediaControlChannel:(id)arg1 didUpdateQueueItemsWithIDs:(id)arg2;
- (void)mediaControlChannel:(id)arg1 didInsertQueueItemsWithIDs:(id)arg2 beforeItemWithID:(unsigned long long)arg3;
- (void)mediaControlChannel:(id)arg1 didReceiveQueueItems:(id)arg2;
- (void)mediaControlChannel:(id)arg1 didReceiveQueueItemIDs:(id)arg2;
- (void)mediaControlChannelDidUpdateMetadata:(id)arg1;
- (void)mediaControlChannelDidUpdatePreloadStatus:(id)arg1;
- (void)mediaControlChannelDidUpdateQueue:(id)arg1;
- (void)mediaControlChannelDidUpdateStatus:(id)arg1;
- (void)mediaControlChannel:(id)arg1 didFailToLoadMediaWithError:(id)arg2;
- (void)mediaControlChannel:(id)arg1 didCompleteLoadWithSessionID:(long long)arg2;
- (double)timeSinceLastMediaStatusUpdate;
- (double)approximateLiveSeekableRangeEnd;
- (double)approximateLiveSeekableRangeStart;
- (double)approximateStreamPosition;
- (id)precacheData:(id)arg1 requestItems:(id)arg2;
- (id)precacheItems:(id)arg1;
- (id)precacheData:(id)arg1;
- (id)requestStatus;
- (id)setStreamMuted:(_Bool)arg1 customData:(id)arg2;
- (id)setStreamMuted:(_Bool)arg1;
- (id)setStreamVolume:(float)arg1 customData:(id)arg2;
- (id)setStreamVolume:(float)arg1;
- (id)queueSetRepeatMode:(long long)arg1;
- (id)queuePreviousItem;
- (id)queueNextItem;
- (id)queueJumpToItemWithID:(unsigned long long)arg1 playPosition:(double)arg2 customData:(id)arg3;
- (id)queueJumpToItemWithID:(unsigned long long)arg1 customData:(id)arg2;
- (id)queueJumpToItemWithID:(unsigned long long)arg1;
- (id)queueMoveItemWithID:(unsigned long long)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (id)queueReorderItemsWithIDs:(id)arg1 insertBeforeItemWithID:(unsigned long long)arg2;
- (id)queueRemoveItemWithID:(unsigned long long)arg1;
- (id)queueRemoveItemsWithIDs:(id)arg1 customData:(id)arg2;
- (id)queueRemoveItemsWithIDs:(id)arg1;
- (id)queueUpdateItems:(id)arg1 customData:(id)arg2;
- (id)queueUpdateItems:(id)arg1;
- (id)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2 playPosition:(double)arg3 customData:(id)arg4;
- (id)queueInsertAndPlayItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueInsertItem:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2 customData:(id)arg3;
- (id)queueInsertItems:(id)arg1 beforeItemWithID:(unsigned long long)arg2;
- (id)queueFetchItemsForIDs:(id)arg1;
- (id)queueFetchItemIDs;
- (id)queueLoadItems:(id)arg1 withOptions:(id)arg2;
- (id)skipAd;
- (id)seekWithOptions:(id)arg1;
- (id)playWithCustomData:(id)arg1;
- (id)play;
- (id)stopWithCustomData:(id)arg1;
- (id)stop;
- (id)pauseWithCustomData:(id)arg1;
- (id)pause;
- (id)setTextTrackStyle:(id)arg1;
- (id)setActiveTrackIDs:(id)arg1;
- (id)setPlaybackRate:(float)arg1 customData:(id)arg2;
- (id)setPlaybackRate:(float)arg1;
- (id)loadMedia:(id)arg1 withOptions:(id)arg2;
- (id)loadMediaWithLoadRequestData:(id)arg1;
- (_Bool)connected;
- (id)mediaStatus;
@property(readonly, nonatomic) GCKCastChannel *mediaControlChannel;
- (id)initWithAnalyticsEventLogger:(id)arg1;
- (id)init;
- (id)initWithChannel:(id)arg1 analyticsEventLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

