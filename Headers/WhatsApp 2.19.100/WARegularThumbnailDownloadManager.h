//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMMSThumbnailDownloadOperationDelegate-Protocol.h"

@class NSMutableDictionary, WAChatStorage, WAMMSTaskSessionV4, WANetworkUsageManager, WANetworkUsageMetricsManager, WASimpleOperationQueue;
@protocol OS_dispatch_queue, WARegularThumbnailDownloadManagerDelegate;

@interface WARegularThumbnailDownloadManager : NSObject <WAMMSThumbnailDownloadOperationDelegate>
{
    WAChatStorage *_chatStorage;
    NSMutableDictionary *_mmsv4PlaintextHashToOperations;
    WASimpleOperationQueue *_mmsv4ExecutionQueue;
    NSObject<OS_dispatch_queue> *_mmsv4DownloadDelegateQueue;
    WAMMSTaskSessionV4 *_taskSession;
    WANetworkUsageManager *_networkUsageManager;
    WANetworkUsageMetricsManager *_networkUsageMetricsManager;
    id <WARegularThumbnailDownloadManagerDelegate> _delegate;
    NSMutableDictionary *_timerForDownloadOperationIdentifier;
}

- (void).cxx_destruct;
- (void)downloadTask:(id)arg1 populatedDownloadEvent:(id)arg2 shouldSubmit:(_Bool)arg3;
- (void)downloadTask:(id)arg1 didCompleteWithError:(id)arg2 terminal:(_Bool)arg3 bytesTransferred:(unsigned long long)arg4;
- (void)cancelAllDownloads;
- (void)removeOperationFromCollections:(id)arg1;
- (void)queueMediaDownloadForMessage:(id)arg1 policy:(id)arg2 path:(id)arg3;
- (_Bool)shouldEnqueueMessage:(id)arg1;
- (_Bool)shouldDownloadHighResThumbnail:(id)arg1;
- (void)handleThumbnailDownloadForExternalMessage:(id)arg1;
- (id)initWithChatStorage:(id)arg1 mmsTaskSession:(id)arg2 networkUsageManager:(id)arg3 networkUsageMetricsManager:(id)arg4 delegate:(id)arg5;

@end

