//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCClientEnvironment, GHCSubscriptionEntities, NSString;

@interface GHCAppSubscriptionUpdateRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCClientEnvironment *clientEnvironment; // @dynamic clientEnvironment;
@property(nonatomic) _Bool hasClientEnvironment; // @dynamic hasClientEnvironment;
@property(nonatomic) _Bool hasSubscriptionEntities; // @dynamic hasSubscriptionEntities;
@property(copy, nonatomic) NSString *hgsStructureId; // @dynamic hgsStructureId;
@property(retain, nonatomic) GHCSubscriptionEntities *subscriptionEntities; // @dynamic subscriptionEntities;

@end

