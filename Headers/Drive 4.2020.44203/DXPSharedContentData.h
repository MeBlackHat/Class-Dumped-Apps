//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class DXPSharedContentHashMetadata, GPBTimestamp, NSString;

@interface DXPSharedContentData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHashMetadata; // @dynamic hasHashMetadata;
@property(nonatomic) _Bool hasShareTime; // @dynamic hasShareTime;
@property(retain, nonatomic) DXPSharedContentHashMetadata *hashMetadata; // @dynamic hashMetadata;
@property(copy, nonatomic) NSString *obfuscatedCustomerId; // @dynamic obfuscatedCustomerId;
@property(retain, nonatomic) GPBTimestamp *shareTime; // @dynamic shareTime;

@end

