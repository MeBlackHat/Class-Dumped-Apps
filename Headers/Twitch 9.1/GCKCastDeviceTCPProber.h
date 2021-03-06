//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCKCastDeviceControllerDelegate-Protocol.h"
#import "GCKRequestDelegate-Protocol.h"
#import "GCKRuntimeConfigurationValueObserver-Protocol.h"

@class GCKAnalyticsEventLogger, GCKCastDeviceController, GCKDBNetworkInfo, GCKDatabase, GCKDeviceInformation, GCKDiscoveryCriteria, GCKError, GCKNNetworkReachability, GCKNSocketAddress, GCKRuntimeConfiguration, NSDate, NSDictionary, NSString;
@protocol GCKCastDeviceTCPProberDelegate;

__attribute__((visibility("hidden")))
@interface GCKCastDeviceTCPProber : NSObject <GCKCastDeviceControllerDelegate, GCKRequestDelegate, GCKRuntimeConfigurationValueObserver>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKDatabase *_database;
    GCKNNetworkReachability *_networkReachability;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKCastDeviceController *_deviceController;
    GCKDiscoveryCriteria *_discoveryCriteria;
    GCKNSocketAddress *_socketAddress;
    GCKDBNetworkInfo *_networkInfo;
    GCKError *_error;
    NSDictionary *_appAvailability;
    GCKDeviceInformation *_deviceInformation;
    int _invocationReason;
    NSDate *_startTime;
    unsigned long long _proberState;
    double _discoveryTTL;
    double _tcpCachedAppIDTTL;
    id <GCKCastDeviceTCPProberDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKCastDeviceTCPProberDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)intervalSinceStart;
- (id)deviceInfoFromDeviceInformation:(id)arg1 appAvailability:(id)arg2;
- (void)disconnectIfFinished;
- (void)runtimeConfiguration:(id)arg1 value:(id)arg2 didChangeFrom:(id)arg3 to:(id)arg4;
- (void)updateFromRuntimeConfigurations;
- (void)deviceController:(id)arg1 didReceiveDeviceInformation:(id)arg2;
- (void)deviceController:(id)arg1 didReceiveAppAvailability:(id)arg2;
- (void)deviceController:(id)arg1 request:(long long)arg2 didFailWithError:(id)arg3;
- (void)deviceController:(id)arg1 didDisconnectWithError:(id)arg2 willTryToReconnect:(_Bool)arg3;
- (void)deviceController:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceControllerDidConnect:(id)arg1;
- (void)didDisconnect;
- (void)stop;
- (void)probeSocketAddress:(id)arg1 withCriteria:(id)arg2 probingReason:(int)arg3;
@property(readonly, nonatomic) _Bool active;
- (id)initWithAnalyticsEventLogger:(id)arg1 database:(id)arg2 networkReachability:(id)arg3 runtimeConfiguration:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

