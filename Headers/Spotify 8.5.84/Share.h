//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface Share : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *capability; // @dynamic capability;
@property(copy, nonatomic) NSString *creatorUri; // @dynamic creatorUri;
@property(copy, nonatomic) NSString *destinationId; // @dynamic destinationId;
@property(copy, nonatomic) NSString *entityUri; // @dynamic entityUri;
@property(nonatomic) _Bool hasCapability; // @dynamic hasCapability;
@property(nonatomic) _Bool hasCreatorUri; // @dynamic hasCreatorUri;
@property(nonatomic) _Bool hasDestinationId; // @dynamic hasDestinationId;
@property(nonatomic) _Bool hasEntityUri; // @dynamic hasEntityUri;
@property(nonatomic) _Bool hasIntegration; // @dynamic hasIntegration;
@property(nonatomic) _Bool hasShareId; // @dynamic hasShareId;
@property(nonatomic) _Bool hasSourcePage; // @dynamic hasSourcePage;
@property(nonatomic) _Bool hasSourcePageUri; // @dynamic hasSourcePageUri;
@property(nonatomic) _Bool hasSystemDestination; // @dynamic hasSystemDestination;
@property(copy, nonatomic) NSString *integration; // @dynamic integration;
@property(copy, nonatomic) NSString *shareId; // @dynamic shareId;
@property(copy, nonatomic) NSString *sourcePage; // @dynamic sourcePage;
@property(copy, nonatomic) NSString *sourcePageUri; // @dynamic sourcePageUri;
@property(copy, nonatomic) NSString *systemDestination; // @dynamic systemDestination;

@end

