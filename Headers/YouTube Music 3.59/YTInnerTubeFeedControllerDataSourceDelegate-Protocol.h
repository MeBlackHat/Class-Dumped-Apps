//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTIInvalidationContinuationData, YTITimedContinuationData, YTInnerTubeFeedControllerDataSource;

@protocol YTInnerTubeFeedControllerDataSourceDelegate <NSObject>

@optional
- (void)innerTubeFeedControllerDataSource:(YTInnerTubeFeedControllerDataSource *)arg1 didReceiveContinuationResponse:(id)arg2;
- (void)innerTubeFeedControllerDataSource:(YTInnerTubeFeedControllerDataSource *)arg1 willReceiveContinuationResponse:(id)arg2;
- (void)invalidationContinuationTriggered:(YTIInvalidationContinuationData *)arg1;
- (void)invalidationContinuationSetupCompleted:(YTIInvalidationContinuationData *)arg1 error:(NSError *)arg2 immediate:(_Bool)arg3;
- (void)timedContinuationDidBecomeAvailable:(YTITimedContinuationData *)arg1;
@end

