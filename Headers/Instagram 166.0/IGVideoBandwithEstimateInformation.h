//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGVideoBandwithEstimateInformation : NSObject
{
    NSString *_bandwidthEstimatorType;
    double _estimatedAvailableBandwidthInKbps;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double estimatedAvailableBandwidthInKbps; // @synthesize estimatedAvailableBandwidthInKbps=_estimatedAvailableBandwidthInKbps;
@property(readonly, copy, nonatomic) NSString *bandwidthEstimatorType; // @synthesize bandwidthEstimatorType=_bandwidthEstimatorType;
- (id)initWithBandwidthEstimatorType:(id)arg1 estimatedAvailableBandwidthInKbps:(double)arg2;

@end

