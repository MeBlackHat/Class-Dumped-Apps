//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class WAPBRankingMetric;

@interface WAPBIndividualRankingMetricSet : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIncomingCall; // @dynamic hasIncomingCall;
@property(nonatomic) _Bool hasIncomingGroupMention; // @dynamic hasIncomingGroupMention;
@property(nonatomic) _Bool hasIncomingGroupReply; // @dynamic hasIncomingGroupReply;
@property(nonatomic) _Bool hasIncomingMedia; // @dynamic hasIncomingMedia;
@property(nonatomic) _Bool hasIncomingMessage; // @dynamic hasIncomingMessage;
@property(nonatomic) _Bool hasOutgoingCall; // @dynamic hasOutgoingCall;
@property(nonatomic) _Bool hasOutgoingMedia; // @dynamic hasOutgoingMedia;
@property(nonatomic) _Bool hasOutgoingMessage; // @dynamic hasOutgoingMessage;
@property(nonatomic) _Bool hasStatusReceived; // @dynamic hasStatusReceived;
@property(nonatomic) _Bool hasStatusRowConsumed; // @dynamic hasStatusRowConsumed;
@property(nonatomic) _Bool hasStatusRowHardIgnore; // @dynamic hasStatusRowHardIgnore;
@property(nonatomic) _Bool hasStatusRowReplyEngagement; // @dynamic hasStatusRowReplyEngagement;
@property(nonatomic) _Bool hasStatusRowSeen; // @dynamic hasStatusRowSeen;
@property(nonatomic) _Bool hasStatusRowSoftIgnore; // @dynamic hasStatusRowSoftIgnore;
@property(nonatomic) _Bool hasStatusRowViewEngagement; // @dynamic hasStatusRowViewEngagement;
@property(retain, nonatomic) WAPBRankingMetric *incomingCall; // @dynamic incomingCall;
@property(retain, nonatomic) WAPBRankingMetric *incomingGroupMention; // @dynamic incomingGroupMention;
@property(retain, nonatomic) WAPBRankingMetric *incomingGroupReply; // @dynamic incomingGroupReply;
@property(retain, nonatomic) WAPBRankingMetric *incomingMedia; // @dynamic incomingMedia;
@property(retain, nonatomic) WAPBRankingMetric *incomingMessage; // @dynamic incomingMessage;
@property(retain, nonatomic) WAPBRankingMetric *outgoingCall; // @dynamic outgoingCall;
@property(retain, nonatomic) WAPBRankingMetric *outgoingMedia; // @dynamic outgoingMedia;
@property(retain, nonatomic) WAPBRankingMetric *outgoingMessage; // @dynamic outgoingMessage;
@property(retain, nonatomic) WAPBRankingMetric *statusReceived; // @dynamic statusReceived;
@property(retain, nonatomic) WAPBRankingMetric *statusRowConsumed; // @dynamic statusRowConsumed;
@property(retain, nonatomic) WAPBRankingMetric *statusRowHardIgnore; // @dynamic statusRowHardIgnore;
@property(retain, nonatomic) WAPBRankingMetric *statusRowReplyEngagement; // @dynamic statusRowReplyEngagement;
@property(retain, nonatomic) WAPBRankingMetric *statusRowSeen; // @dynamic statusRowSeen;
@property(retain, nonatomic) WAPBRankingMetric *statusRowSoftIgnore; // @dynamic statusRowSoftIgnore;
@property(retain, nonatomic) WAPBRankingMetric *statusRowViewEngagement; // @dynamic statusRowViewEngagement;

@end

