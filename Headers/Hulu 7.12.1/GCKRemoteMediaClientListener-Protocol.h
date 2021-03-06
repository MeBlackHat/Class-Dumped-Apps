//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GoogleCast/NSObject-Protocol.h>

@class GCKMediaMetadata, GCKMediaStatus, GCKRemoteMediaClient, NSArray;

@protocol GCKRemoteMediaClientListener <NSObject>

@optional
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didReceiveQueueItems:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didRemoveQueueItemsWithIDs:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateQueueItemsWithIDs:(NSArray *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didInsertQueueItemsWithIDs:(NSArray *)arg2 beforeItemWithID:(unsigned long long)arg3;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didReceiveQueueItemIDs:(NSArray *)arg2;
- (void)remoteMediaClientDidUpdatePreloadStatus:(GCKRemoteMediaClient *)arg1;
- (void)remoteMediaClientDidUpdateQueue:(GCKRemoteMediaClient *)arg1;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateMediaMetadata:(GCKMediaMetadata *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didUpdateMediaStatus:(GCKMediaStatus *)arg2;
- (void)remoteMediaClient:(GCKRemoteMediaClient *)arg1 didStartMediaSessionWithID:(long long)arg2;
@end

