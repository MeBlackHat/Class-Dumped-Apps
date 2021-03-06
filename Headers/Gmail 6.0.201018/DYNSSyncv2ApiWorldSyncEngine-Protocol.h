//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JavaUtilOptional;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSSyncv2ApiWorldSyncEngine <JavaObject>
- (JavaUtilOptional *)getFirstWorldUpdatedEventTimeMillis;
- (JavaUtilOptional *)getClientWorldViewResumeTimeMillis;
- (void)markClientWorldViewResume;
- (_Bool)isWorldSynced;
- (_Bool)hasFirstWorldSyncCompleted;
- (void)markOutOfSync;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)resolveWorldSynced;
- (void)safeStop;
- (void)stop;
- (void)start;
@end

