//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDWaypointQuery;

@interface GMSx_GMTTDOffstreetParking : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool calculateWalkingTrip; // @dynamic calculateWalkingTrip;
@property(nonatomic) _Bool hasCalculateWalkingTrip; // @dynamic hasCalculateWalkingTrip;
@property(nonatomic) _Bool hasParkingLocation; // @dynamic hasParkingLocation;
@property(retain, nonatomic) GMSx_GMTTDWaypointQuery *parkingLocation; // @dynamic parkingLocation;

@end

