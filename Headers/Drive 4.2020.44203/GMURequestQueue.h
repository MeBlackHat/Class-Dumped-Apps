//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMUQueue.h"

@class NSMutableArray, PHSBroadcast;

@interface GMURequestQueue : GMUQueue
{
    NSMutableArray *_liveRequests;
    double _nextStartWaitInterval;
    _Bool _paused;
    _Bool _shouldEnableBackoff;
    _Bool _didReceiveMemoryWarning;
    PHSBroadcast *_eventBroadcast;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool didReceiveMemoryWarning; // @synthesize didReceiveMemoryWarning=_didReceiveMemoryWarning;
@property _Bool shouldEnableBackoff; // @synthesize shouldEnableBackoff=_shouldEnableBackoff;
@property(readonly, nonatomic) PHSBroadcast *eventBroadcast; // @synthesize eventBroadcast=_eventBroadcast;
- (void)resetBackoffInterval;
- (void)requestDidWriteUploadFile:(id)arg1;
- (void)requestDidComplete:(id)arg1 withSuccess:(_Bool)arg2;
- (void)addUserInitiatedRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)dequeueRequests;
@property(getter=isPaused) _Bool paused;
- (void)didAddObject:(id)arg1;
@property(readonly, nonatomic) unsigned long long maxConcurrentRequests;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (id)liveAssetsPromise;
- (id)init;

@end

