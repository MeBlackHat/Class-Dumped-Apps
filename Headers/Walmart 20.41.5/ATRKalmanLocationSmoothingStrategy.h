//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AtriusLocation/ATRILocationSmoothingStrategy-Protocol.h>

@class ATRCoordinate, ATRLocation;

@interface ATRKalmanLocationSmoothingStrategy : NSObject <ATRILocationSmoothingStrategy>
{
    _Bool _firstPosition;
    double _processNoiseCovariance;
    double _measurementNoiseCovariance;
    ATRCoordinate *_initialEstimationErrorCovariance;
    ATRLocation *_previousLocation;
    ATRCoordinate *_previousCoordinate;
    ATRCoordinate *_p;
    ATRCoordinate *_k;
}

@property(retain) ATRCoordinate *k; // @synthesize k=_k;
@property(retain) ATRCoordinate *p; // @synthesize p=_p;
@property _Bool firstPosition; // @synthesize firstPosition=_firstPosition;
@property(retain) ATRCoordinate *previousCoordinate; // @synthesize previousCoordinate=_previousCoordinate;
@property(retain) ATRLocation *previousLocation; // @synthesize previousLocation=_previousLocation;
@property(retain, nonatomic) ATRCoordinate *initialEstimationErrorCovariance; // @synthesize initialEstimationErrorCovariance=_initialEstimationErrorCovariance;
@property(nonatomic) double measurementNoiseCovariance; // @synthesize measurementNoiseCovariance=_measurementNoiseCovariance;
@property(nonatomic) double processNoiseCovariance; // @synthesize processNoiseCovariance=_processNoiseCovariance;
- (void).cxx_destruct;
- (id)updateCoordinate:(id)arg1 timeRatio:(float)arg2;
- (id)update:(id)arg1;
- (void)reset;
- (id)initWithProcessNoiseCovariance:(double)arg1 andMeasurementCovariance:(double)arg2 andInitialEstimationErrorCovariance:(id)arg3;
- (id)init;

@end

