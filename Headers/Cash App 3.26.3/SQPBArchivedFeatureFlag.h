//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SQPBArchivedFeatureFlag : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool clientDataEnabled; // @dynamic clientDataEnabled;
@property(copy, nonatomic) NSString *label; // @dynamic label;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) int realm; // @dynamic realm;
@property(copy, nonatomic) NSString *selectedOptionValue; // @dynamic selectedOptionValue;

@end

