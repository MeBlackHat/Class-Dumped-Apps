//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class GABDate;

@interface GABRecurrenceEnd : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GABDate *endDate; // @dynamic endDate;
@property(nonatomic) _Bool hasEndDate; // @dynamic hasEndDate;
@property(nonatomic) _Bool hasOccurenceCount; // @dynamic hasOccurenceCount;
@property(nonatomic) int occurenceCount; // @dynamic occurenceCount;

@end

