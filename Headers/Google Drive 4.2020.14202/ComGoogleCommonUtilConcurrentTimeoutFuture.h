//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture.h"

@protocol ComGoogleCommonUtilConcurrentListenableFuture, JavaUtilConcurrentScheduledFuture;

@interface ComGoogleCommonUtilConcurrentTimeoutFuture : ComGoogleCommonUtilConcurrentFluentFuture_TrustedFuture
{
    id <ComGoogleCommonUtilConcurrentListenableFuture> delegateRef_;
    id <JavaUtilConcurrentScheduledFuture> timer_;
}

+ (id)createWithComGoogleCommonUtilConcurrentListenableFuture:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnit:(id)arg3 withJavaUtilConcurrentScheduledExecutorService:(id)arg4;
- (void)dealloc;
- (void)afterDone;
- (id)pendingToString;

@end

