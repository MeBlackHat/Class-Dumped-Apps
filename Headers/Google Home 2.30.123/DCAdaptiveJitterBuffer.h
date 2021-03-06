//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;

@interface DCAdaptiveJitterBuffer : NSObject
{
    struct AdaptiveJitterBuffer *_buffer;
    NSCondition *_packetCondition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSCondition *packetCondition; // @synthesize packetCondition=_packetCondition;
@property(nonatomic) struct AdaptiveJitterBuffer *buffer; // @synthesize buffer=_buffer;
- (float)playSpeedForPTS:(long long)arg1;
- (void)cancelWaiters;
- (_Bool)waitForPacket;
- (id)nextPacket;
- (long long)peekPTS;
- (void)addSlaveTiming:(long long)arg1;
- (void)addPacket:(id)arg1;
- (_Bool)fullyBuffered;
- (long long)bufferLength;
- (int)numPackets;
- (void)addBias:(long long)arg1;
- (void)setTargetDelay:(long long)arg1;
- (long long)targetDelay;
- (void)setAutoAdjust:(_Bool)arg1;
- (void)releaseUnusedPackets;
- (void)dealloc;
- (id)initWithTimebase:(int)arg1 isLive:(_Bool)arg2 isWifi:(_Bool)arg3;

@end

