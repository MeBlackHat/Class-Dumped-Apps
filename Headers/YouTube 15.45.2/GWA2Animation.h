//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWA2Effect, ORCH2Animation;

@interface GWA2Animation : NSObject
{
    ORCH2Animation *_proto;
    GWA2Effect *_effect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GWA2Effect *effect; // @synthesize effect=_effect;
@property(readonly, nonatomic) ORCH2Animation *proto; // @synthesize proto=_proto;
- (struct CGPoint)controlPoint2;
- (struct CGPoint)controlPoint1;
- (id)timingFunction;
@property(readonly, nonatomic) int delayInMilliseconds;
@property(readonly, nonatomic) int durationInMilliseconds;
- (id)initWithProto:(id)arg1;

@end

