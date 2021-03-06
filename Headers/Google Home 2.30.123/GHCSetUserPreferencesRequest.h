//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCClientEnvironment, GHCDeviceId, NSMutableArray, NSString;

@interface GHCSetUserPreferencesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCClientEnvironment *clientEnvironment; // @dynamic clientEnvironment;
@property(retain, nonatomic) GHCDeviceId *deviceId; // @dynamic deviceId;
@property(nonatomic) _Bool hasClientEnvironment; // @dynamic hasClientEnvironment;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(retain, nonatomic) NSMutableArray *parametersArray; // @dynamic parametersArray;
@property(readonly, nonatomic) unsigned long long parametersArray_Count; // @dynamic parametersArray_Count;
@property(nonatomic) int preferenceSelector; // @dynamic preferenceSelector;
@property(retain, nonatomic) NSMutableArray *preferenceSettingsArray; // @dynamic preferenceSettingsArray;
@property(readonly, nonatomic) unsigned long long preferenceSettingsArray_Count; // @dynamic preferenceSettingsArray_Count;
@property(copy, nonatomic) NSString *structureId; // @dynamic structureId;

@end

