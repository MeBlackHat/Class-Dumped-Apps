//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SNPNexusBaiMetricsVader : NSObject
{
}

+ (_Bool)shouldPostNexusLogs;
+ (void)postNexusMetricEvent:(id)arg1 featureName:(id)arg2 featureBundleVersion:(id)arg3 featureDiskBundleVersion:(id)arg4 metricType:(id)arg5 metricValue:(id)arg6;
+ (void)postCountNexusMetricEvent:(id)arg1 featureName:(id)arg2 featureBundleVersion:(id)arg3 featureDiskBundleVersion:(id)arg4 metricValue:(id)arg5;
+ (void)postTimeNexusMetricEvent:(id)arg1 featureName:(id)arg2 featureBundleVersion:(id)arg3 featureDiskBundleVersion:(id)arg4 metricValue:(id)arg5;

@end

