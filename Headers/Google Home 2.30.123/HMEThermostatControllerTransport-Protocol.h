//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GHCThermostatState, HMEThermostatUserHold;
@protocol HMEThermostatControllerAnalyticsProtocol, HMEThermostatControllerTransportDelegateProtocol;

@protocol HMEThermostatControllerTransport <NSObject>
@property(copy, nonatomic) CDUnknownBlockType updateCallback;
@property(nonatomic) __weak id <HMEThermostatControllerTransportDelegateProtocol> delegate;
@property(nonatomic) __weak id <HMEThermostatControllerAnalyticsProtocol> analyticsDelegate;
- (void)endEmergencyHeat;
- (void)processRealtimeUpdate:(GHCThermostatState *)arg1;
- (void)updateCurrentThermostatAtom:(unsigned int)arg1;
- (void)endScheduleHold;
- (void)setScheduleHold:(HMEThermostatUserHold *)arg1;
- (void)setFanTimerDuration:(double)arg1 speed:(int)arg2;
- (void)setMode:(int)arg1;
- (void)setHoldTemperatureHeat:(double)arg1 cool:(double)arg2;
- (void)setHoldTemperature:(double)arg1;
- (void)setTargetTemperatureHeat:(double)arg1 cool:(double)arg2;
- (void)setTargetTemperature:(double)arg1;
- (void)fetchState;
@end

