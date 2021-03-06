//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch;

@interface ComGoogleCommonUtilConcurrentRateLimiter : NSObject
{
    ComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch *stopwatch_;
    unsigned long long mutexDoNotUseDirectly_;
}

+ (int)roundedPermitsPerTimeWithDouble:(double)arg1 withDouble:(double)arg2;
+ (int)microsToSecWithLong:(long long)arg1;
+ (id)createWithSecondGranularityHorizonWithInt:(int)arg1 withInt:(int)arg2 withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg3;
+ (id)createWithSecondGranularityHorizonWithInt:(int)arg1 withInt:(int)arg2 withComGoogleCommonBaseTicker:(id)arg3;
+ (id)createWithSecondGranularityHorizonWithInt:(int)arg1 withJavaTimeDuration:(id)arg2 withComGoogleCommonBaseTicker:(id)arg3;
+ (id)createWithSecondGranularityHorizonWithInt:(int)arg1 withInt:(int)arg2;
+ (id)createWithSecondGranularityHorizonWithInt:(int)arg1 withJavaTimeDuration:(id)arg2;
+ (id)createWithRequestAlignedBucketsWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)createWithRequestAlignedBucketsWithInt:(int)arg1 withInt:(int)arg2;
+ (id)createWithRequestAlignedBucketsWithInt:(int)arg1 withJavaTimeDuration:(id)arg2;
+ (id)createWithCapacityWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg1 withDouble:(double)arg2 withLong:(long long)arg3 withJavaUtilConcurrentTimeUnit:(id)arg4;
+ (id)createWithCapacityWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg1 withDouble:(double)arg2 withJavaTimeDuration:(id)arg3;
+ (id)createWithCapacityWithDouble:(double)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (id)createWithCapacityWithDouble:(double)arg1 withJavaTimeDuration:(id)arg2;
+ (id)createWithDouble:(double)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3 withDouble:(double)arg4 withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg5;
+ (id)createWithDouble:(double)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3 withDouble:(double)arg4;
+ (id)createWithDouble:(double)arg1 withJavaTimeDuration:(id)arg2 withDouble:(double)arg3;
+ (id)createWithDouble:(double)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
+ (id)createWithDouble:(double)arg1 withJavaTimeDuration:(id)arg2;
+ (id)createWithDouble:(double)arg1 withComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg2;
+ (id)createWithDouble:(double)arg1;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)description;
- (void)doForceAcquireWithLong:(long long)arg1;
- (void)forceAcquire;
- (long long)reserveAndGetWaitLengthWithInt:(int)arg1 withLong:(long long)arg2;
- (_Bool)couldAcquire;
- (_Bool)tryAcquireWithInt:(int)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3;
- (_Bool)tryAcquireWithInt:(int)arg1 withJavaTimeDuration:(id)arg2;
- (_Bool)tryAcquire;
- (_Bool)tryAcquireWithInt:(int)arg1;
- (_Bool)tryAcquireWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(id)arg2;
- (_Bool)tryAcquireWithJavaTimeDuration:(id)arg1;
- (_Bool)supportsAsync;
- (id)checkSupportsAsync;
- (long long)reserveWithInt:(int)arg1;
- (double)acquireWithInt:(int)arg1;
- (double)acquire;
- (int)doGetAvailablePermitsWithLong:(long long)arg1;
- (int)getAvailablePermits;
- (double)getRate;
- (void)setRateWithDouble:(double)arg1;
- (id)initWithComGoogleCommonUtilConcurrentRateLimiter_SleepingStopwatch:(id)arg1;
- (void)doSetPermitsWithinHorizonWithInt:(int)arg1;
- (void)setPermitsWithinHorizonWithInt:(int)arg1;
- (int)doLatestPermitAgeSecWithLong:(long long)arg1;
- (int)latestPermitAgeSec;

@end

