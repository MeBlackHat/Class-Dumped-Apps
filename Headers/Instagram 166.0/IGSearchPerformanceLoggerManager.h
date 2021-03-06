//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSearchQuickPerformanceLoggingDelegate-Protocol.h>

@class IGSearchPerformanceLogger, NSString;

@interface IGSearchPerformanceLoggerManager : NSObject <IGSearchQuickPerformanceLoggingDelegate>
{
    IGSearchPerformanceLogger *_searchPerformanceLogger;
}

- (void).cxx_destruct;
- (void)markSearchRequestThrottleWithSearchQuery:(id)arg1;
- (void)markSearchRequestStartWithSearchQuery:(id)arg1;
- (void)markSearchQueryDidChange:(id)arg1 searchSessionId:(id)arg2;
- (void)markEndOfQuerySearchResultsNotDisplayedWithNumFetchedResults:(long long)arg1 rankToken:(id)arg2 searchQuery:(id)arg3;
- (void)markSearchRequestCompleteWithNumFetchedResults:(long long)arg1 searchQuery:(id)arg2;
- (void)markSearchRequestFailedWithSearchQuery:(id)arg1;
- (void)markSearchNavigationExit;
- (void)searchResultsDisplayedWithSearchQuery:(id)arg1 results:(id)arg2 rankToken:(id)arg3 typeAheadResultsState:(long long)arg4 typeaheadIsLoading:(_Bool)arg5;
- (id)initWithSearchTypeString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

