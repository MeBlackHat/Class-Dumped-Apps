//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface GCAIUserSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *albumArray; // @dynamic albumArray;
@property(readonly, nonatomic) unsigned long long albumArray_Count; // @dynamic albumArray_Count;
@property(nonatomic) _Bool disabledByOther; // @dynamic disabledByOther;
@property(copy, nonatomic) NSString *displayId; // @dynamic displayId;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasDisabledByOther; // @dynamic hasDisabledByOther;
@property(nonatomic) _Bool hasDisplayId; // @dynamic hasDisplayId;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasLastModifiedTimeMs; // @dynamic hasLastModifiedTimeMs;
@property(nonatomic) _Bool hasSettingId; // @dynamic hasSettingId;
@property(nonatomic) long long lastModifiedTimeMs; // @dynamic lastModifiedTimeMs;
@property(nonatomic) int settingId; // @dynamic settingId;

@end

