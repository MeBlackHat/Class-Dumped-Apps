//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class JCalendarIcalProposal, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol ComGoogleAppsBigtopDataItemsCalendarApiCalendarEventDataService <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)addCalendarEventsWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)respondToCalendarEventProposalWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withJCalendarIcalProposal:(JCalendarIcalProposal *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getCalendarEventFromRemoteIfNecessaryWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getCalendarEventDataWithNSString:(NSString *)arg1;
@end

