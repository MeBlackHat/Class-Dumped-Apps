//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGSessionTracker, NSMutableDictionary, NSString;

@interface IGSundialRealtimeEventStore : NSObject
{
    NSMutableDictionary *_eventStore;
    IGSessionTracker *_sessionTracker;
    NSString *_currentMediaID;
    long long _prevLoopCount;
}

- (void).cxx_destruct;
- (id)_eventForMediaID:(id)arg1;
- (id)flushEvents;
- (void)updateEventForMediaID:(id)arg1 playbackState:(CDStruct_7b7c8ae7)arg2;
- (id)initWithSessionTracker:(id)arg1;

@end

