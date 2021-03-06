//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAdFetcher, IGAdInsertionMediaViewTracker, IGAdPlatformEventCenter, IGAdPool, IGAdSlotsTracker;

@interface IGAdPlatformStatefulComponents : NSObject
{
    IGAdPool *_adPool;
    IGAdInsertionMediaViewTracker *_mediaTrackers;
    IGAdPlatformEventCenter *_eventCenter;
    IGAdFetcher *_adFetcher;
    IGAdSlotsTracker *_adSlotsTracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAdSlotsTracker *adSlotsTracker; // @synthesize adSlotsTracker=_adSlotsTracker;
@property(readonly, nonatomic) IGAdFetcher *adFetcher; // @synthesize adFetcher=_adFetcher;
@property(readonly, nonatomic) IGAdPlatformEventCenter *eventCenter; // @synthesize eventCenter=_eventCenter;
@property(readonly, nonatomic) IGAdInsertionMediaViewTracker *mediaTrackers; // @synthesize mediaTrackers=_mediaTrackers;
@property(readonly, nonatomic) IGAdPool *adPool; // @synthesize adPool=_adPool;
- (id)initWithAdPool:(id)arg1 mediaTrackers:(id)arg2 eventCenter:(id)arg3 adFetcher:(id)arg4 adSlotsTracker:(id)arg5;

@end

