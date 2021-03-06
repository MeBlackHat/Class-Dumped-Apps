//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilConcurrentExecutor-Protocol.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable, JavaUtilCollection, JavaUtilConcurrentCallable, JavaUtilConcurrentFuture, JavaUtilList;

@protocol JavaUtilConcurrentExecutorService <JavaUtilConcurrentExecutor, JavaObject>
- (id)invokeAnyWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg3;
- (id)invokeAnyWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (id <JavaUtilList>)invokeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg3;
- (id <JavaUtilList>)invokeAllWithJavaUtilCollection:(id <JavaUtilCollection>)arg1;
- (id <JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id <JavaLangRunnable>)arg1;
- (id <JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id <JavaLangRunnable>)arg1 withId:(id)arg2;
- (id <JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id <JavaUtilConcurrentCallable>)arg1;
- (_Bool)awaitTerminationWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)arg2;
- (_Bool)isTerminated;
- (_Bool)isShutdown;
- (id <JavaUtilList>)shutdownNow;
- (void)shutdown;
@end

