//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonUtilConcurrentInterruptibleTask.h"

@class ComGoogleCommonUtilConcurrentTrustedListenableFutureTask;
@protocol ComGoogleCommonUtilConcurrentAsyncCallable;

@interface ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_TrustedFutureInterruptibleAsyncTask : ComGoogleCommonUtilConcurrentInterruptibleTask
{
    ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *this$0_;
    id <ComGoogleCommonUtilConcurrentAsyncCallable> callable_;
}

- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)toPendingString;
- (void)afterRanInterruptiblyWithId:(id)arg1 withJavaLangThrowable:(id)arg2;
- (id)runInterruptibly;
- (_Bool)isDone;

@end

