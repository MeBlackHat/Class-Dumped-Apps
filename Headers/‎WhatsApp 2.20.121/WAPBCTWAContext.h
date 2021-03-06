//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSString, WAPBCTWAContextDetails, WAPBContextInfo_ExternalAdReplyInfo;

@interface WAPBCTWAContext : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) WAPBContextInfo_ExternalAdReplyInfo *externalAdReplyInfo;

// Remaining properties
@property(copy, nonatomic) NSString *accountNumber; // @dynamic accountNumber;
@property(retain, nonatomic) WAPBCTWAContextDetails *contextDetails; // @dynamic contextDetails;
@property(copy, nonatomic) NSString *ctwaContextCode; // @dynamic ctwaContextCode;
@property(nonatomic) _Bool hasAccountNumber; // @dynamic hasAccountNumber;
@property(nonatomic) _Bool hasContextDetails; // @dynamic hasContextDetails;
@property(nonatomic) _Bool hasCtwaContextCode; // @dynamic hasCtwaContextCode;
@property(nonatomic) _Bool hasIceBreaker; // @dynamic hasIceBreaker;
@property(nonatomic) _Bool hasSourceUrlstring; // @dynamic hasSourceUrlstring;
@property(copy, nonatomic) NSString *iceBreaker; // @dynamic iceBreaker;
@property(copy, nonatomic) NSString *sourceUrlstring; // @dynamic sourceUrlstring;

@end

