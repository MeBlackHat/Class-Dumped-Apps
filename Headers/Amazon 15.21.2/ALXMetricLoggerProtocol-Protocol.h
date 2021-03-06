//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol ALXMetric;

@protocol ALXMetricLoggerProtocol <NSObject>
- (void)stopRecording:(id <ALXMetric>)arg1;
- (void)startRecording:(id <ALXMetric>)arg1;
- (void)log:(id <ALXMetric>)arg1;
- (void)logStop:(NSString *)arg1;
- (void)logStart:(NSString *)arg1;
- (void)logWakewordDetectedHandledMetric:(NSString *)arg1;
- (void)logWakewordDetectedStartMetric:(NSString *)arg1;
- (void)logRequestUnexpectedResponseMetric:(NSString *)arg1;
- (void)logRequestServerErrorMetric:(NSString *)arg1;
- (void)logRequestFailureMetric:(NSString *)arg1;
- (void)logRequestStatusCodeMetric:(NSString *)arg1 withStatusCode:(unsigned long long)arg2;
- (void)logRequestResponseReceivedMetric:(NSString *)arg1;
- (void)logRequestSentMetric:(NSString *)arg1;
- (void)logMetricWithTriggerName:(NSString *)arg1;
- (void)registerCounterWithMetricName:(NSString *)arg1 triggerName:(NSString *)arg2;
- (void)registerAndLogMetric:(NSString *)arg1 withTrigger:(NSString *)arg2;
@end

