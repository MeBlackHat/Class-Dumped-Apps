//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GHMMeetingRoom : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int availability; // @dynamic availability;
@property(copy, nonatomic) NSString *buildingName; // @dynamic buildingName;
@property(copy, nonatomic) NSString *calendarId; // @dynamic calendarId;
@property(nonatomic) int capacity; // @dynamic capacity;
@property(nonatomic) int category; // @dynamic category;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(retain, nonatomic) NSMutableArray *featuresArray; // @dynamic featuresArray;
@property(readonly, nonatomic) unsigned long long featuresArray_Count; // @dynamic featuresArray_Count;
@property(copy, nonatomic) NSString *floorName; // @dynamic floorName;
@property(copy, nonatomic) NSString *meetingRoomId; // @dynamic meetingRoomId;
@property(copy, nonatomic) NSString *shortName; // @dynamic shortName;
@property(nonatomic) int suitability; // @dynamic suitability;

@end

