//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GHKVideoFpsTracker : NSObject
{
    long long _lastSampleTime;
    float _count;
    _Bool shouldReset;
    float frameTimeMean;
    float frameTimeVariance;
    float frameSpacingMax;
}

@property _Bool shouldReset; // @synthesize shouldReset;
@property float frameSpacingMax; // @synthesize frameSpacingMax;
@property float frameTimeVariance; // @synthesize frameTimeVariance;
@property float frameTimeMean; // @synthesize frameTimeMean;
- (void)reset;
- (void)addFrameTimeSample;
@property(readonly) float frameSpacingMaxMs;
@property(readonly) float frameTimeStdDevMs;
@property(readonly) float frameTimeMeanMs;
@property(readonly) float fps;

@end

