//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGNetworkBandwidthEstimatorLegacyProtocol-Protocol.h>

@class NSString;

@interface IGNetworkBayesianBandwidthEstimator : NSObject <IGNetworkBandwidthEstimatorLegacyProtocol>
{
    long long _currentWindow;
    double _bitrateEstimate;
    double _bitrateEstimateVar;
    long long _previousCaptureTime;
    long long _bytesTotal;
}

- (double)_updateBayesianEstimateWindowAtTime:(long long)arg1 withBytes:(long long)arg2 withRateWindow:(long long)arg3;
- (void)_updateBayesianEstimateAtTime:(long long)arg1 withBytes:(long long)arg2;
- (double)bandwidthEstimate;
- (void)addBytesTransfered:(long long)arg1 atTimeInMs:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

