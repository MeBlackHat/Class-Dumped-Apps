//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface EXHTYH264VideoSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int degradationPreference; // @dynamic degradationPreference;
@property(nonatomic) _Bool hasDegradationPreference; // @dynamic hasDegradationPreference;
@property(retain, nonatomic) NSMutableArray *layerSettingsArray; // @dynamic layerSettingsArray;
@property(readonly, nonatomic) unsigned long long layerSettingsArray_Count; // @dynamic layerSettingsArray_Count;

@end

