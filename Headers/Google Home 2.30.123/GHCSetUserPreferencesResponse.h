//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCAdditionalInfo, GHCPreferenceNode;

@interface GHCSetUserPreferencesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCAdditionalInfo *additionalInfo; // @dynamic additionalInfo;
@property(nonatomic) _Bool hasAdditionalInfo; // @dynamic hasAdditionalInfo;
@property(nonatomic) _Bool hasPreferenceNode; // @dynamic hasPreferenceNode;
@property(retain, nonatomic) GHCPreferenceNode *preferenceNode; // @dynamic preferenceNode;

@end

