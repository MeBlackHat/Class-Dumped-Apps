//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface DCPTalkbackLatency : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLatencyMeasureTag; // @dynamic hasLatencyMeasureTag;
@property(nonatomic) _Bool hasPacketReceivedTime; // @dynamic hasPacketReceivedTime;
@property(nonatomic) _Bool hasPacketSendTime; // @dynamic hasPacketSendTime;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) unsigned int latencyMeasureTag; // @dynamic latencyMeasureTag;
@property(nonatomic) unsigned long long packetReceivedTime; // @dynamic packetReceivedTime;
@property(nonatomic) unsigned long long packetSendTime; // @dynamic packetSendTime;
@property(nonatomic) unsigned int sessionId; // @dynamic sessionId;

@end

