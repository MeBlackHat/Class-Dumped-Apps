//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMERelayDeviceQueryManager-Protocol.h"
#import "SetupCastChannelListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol AnalyticsLogger, GCAConfigurationFlags, HMECastChannelData, HMEDeviceAuthData, HMELocalDeviceAuthorizationRefresher;

@interface HMERelayDeviceQueryManager : NSObject <HMERelayDeviceQueryManager, SetupCastChannelListener>
{
    id <GCAConfigurationFlags> _flags;
    id <AnalyticsLogger> _analyticsLogger;
    id <HMECastChannelData> _castChannelData;
    NSMutableDictionary *_executingQueries;
    id <HMELocalDeviceAuthorizationRefresher> _authorizationRefresher;
    id <HMEDeviceAuthData> _deviceAuthData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEDeviceAuthData> deviceAuthData; // @synthesize deviceAuthData=_deviceAuthData;
@property(readonly, nonatomic) id <HMELocalDeviceAuthorizationRefresher> authorizationRefresher; // @synthesize authorizationRefresher=_authorizationRefresher;
@property(readonly, nonatomic) NSMutableDictionary *executingQueries; // @synthesize executingQueries=_executingQueries;
@property(readonly, nonatomic) id <HMECastChannelData> castChannelData; // @synthesize castChannelData=_castChannelData;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
- (void)logRelayDeviceSettingsRequest:(id)arg1 responseCode:(id)arg2;
- (id)generalErrorWithCode:(long long)arg1;
- (id)generalError;
- (void)sendQueryWrapper:(id)arg1 onChannel:(id)arg2 localAuthToken:(id)arg3;
- (void)setupCastChannel:(id)arg1 didReceiveJsonData:(id)arg2 responseCode:(long long)arg3 responseType:(id)arg4 requestId:(long long)arg5;
- (void)setupCastChannelDidConnect:(id)arg1;
- (void)executeQuery:(id)arg1 shouldRetry401:(_Bool)arg2 device:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithAnalyticsLogger:(id)arg1 authorizationRefresher:(id)arg2 castChannelData:(id)arg3 deviceAuthData:(id)arg4 experimentFlags:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

