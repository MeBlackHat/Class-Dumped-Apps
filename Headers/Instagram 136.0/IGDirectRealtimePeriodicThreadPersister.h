//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGDirectCache, NSMutableSet, NSNumber, NSString;
@protocol IGDirectRealtimeIrisDeltaDebugFileLogging, OS_dispatch_queue;

@interface IGDirectRealtimePeriodicThreadPersister : NSObject
{
    NSMutableSet *_threadIdsAwaitingPersistence;
    NSMutableSet *_deletedThreadIdsAwaitingPersistence;
    NSNumber *_sequenceIdAwaitingPersistence;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _timerFactory;
    IGDirectCache *_cache;
    id <IGDirectRealtimeIrisDeltaDebugFileLogging> _deltaLogger;
    NSString *_userPk;
    FBTimer *_timer;
    _Bool _paused;
}

- (void).cxx_destruct;
- (void)_persist;
- (void)_scheduleTimerIfNeeded;
- (void)_schedulePersistenceForThreadIds:(id)arg1 deletedThreadIds:(id)arg2 sequenceId:(id)arg3;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)resume;
- (void)pause;
- (void)schedulePersistenceForSequenceId:(id)arg1;
- (void)schedulePersistenceForAllThreadsWithSequenceId:(id)arg1;
- (void)schedulePersistenceForDeletedThreadId:(id)arg1 sequenceId:(id)arg2;
- (void)schedulePersistenceForThreadId:(id)arg1 sequenceId:(id)arg2;
- (id)initWithDirectCache:(id)arg1 deltaLogger:(id)arg2 userPk:(id)arg3 queue:(id)arg4 timerFactory:(CDUnknownBlockType)arg5;

@end

