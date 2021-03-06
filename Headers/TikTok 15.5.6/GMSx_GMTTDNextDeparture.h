//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDTime, NSString;

@interface GMSx_GMTTDNextDeparture : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool estimatedFromFrequency; // @dynamic estimatedFromFrequency;
@property(nonatomic) _Bool hasEstimatedFromFrequency; // @dynamic hasEstimatedFromFrequency;
@property(nonatomic) _Bool hasPlatformName; // @dynamic hasPlatformName;
@property(nonatomic) _Bool hasRealtimeStatus; // @dynamic hasRealtimeStatus;
@property(nonatomic) _Bool hasScheduledTime; // @dynamic hasScheduledTime;
@property(nonatomic) _Bool hasStopCode; // @dynamic hasStopCode;
@property(nonatomic) _Bool hasStopName; // @dynamic hasStopName;
@property(nonatomic) _Bool hasTime; // @dynamic hasTime;
@property(nonatomic) _Bool hasWheelchairAccessibility; // @dynamic hasWheelchairAccessibility;
@property(copy, nonatomic) NSString *platformName; // @dynamic platformName;
@property(nonatomic) int realtimeStatus; // @dynamic realtimeStatus;
@property(retain, nonatomic) GMSx_GMTTDTime *scheduledTime; // @dynamic scheduledTime;
@property(copy, nonatomic) NSString *stopCode; // @dynamic stopCode;
@property(copy, nonatomic) NSString *stopName; // @dynamic stopName;
@property(retain, nonatomic) GMSx_GMTTDTime *time; // @dynamic time;
@property(nonatomic) int wheelchairAccessibility; // @dynamic wheelchairAccessibility;

@end

