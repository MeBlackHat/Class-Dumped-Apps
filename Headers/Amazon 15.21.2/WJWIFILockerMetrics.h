//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WJMetricsHelper;

@interface WJWIFILockerMetrics : NSObject
{
    WJMetricsHelper *_metricsHelper;
}

@property(retain, nonatomic) WJMetricsHelper *metricsHelper; // @synthesize metricsHelper=_metricsHelper;
- (void).cxx_destruct;
- (void)trackNetworkUpdated:(long long)arg1;
- (void)trackNetworkCreated:(long long)arg1;
- (void)trackNetworkUsed:(long long)arg1 success:(_Bool)arg2;
- (void)trackNetworksFetched:(id)arg1;
- (id)initWithMetricsHelper:(id)arg1;

@end

