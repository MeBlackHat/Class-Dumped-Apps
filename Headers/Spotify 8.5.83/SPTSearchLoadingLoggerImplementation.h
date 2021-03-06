//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSearchLoadingLogger-Protocol.h"

@class NSString, NSURL;
@protocol SPTPerformanceMetricsViewLoggerFactory, SPTViewLogger;

@interface SPTSearchLoadingLoggerImplementation : NSObject <SPTSearchLoadingLogger>
{
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTViewLogger> _viewLogger;
    NSURL *_pageURI;
    NSString *_pageIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSURL *pageURI; // @synthesize pageURI=_pageURI;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
- (void)logLoadingCancelledWithDataSource:(unsigned long long)arg1;
- (void)logLoadingFailedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingCompletedWithDataSource:(unsigned long long)arg1;
- (void)logLoadingStartedWithReason:(unsigned long long)arg1;
- (id)initWithViewLoggerFactory:(id)arg1 pageURI:(id)arg2 pageIdentifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

