//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PSKAffinity, PSKName, PSKPhoto;

@interface PSKDisplayInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PSKAffinity *affinity; // @dynamic affinity;
@property(nonatomic) _Bool hasAffinity; // @dynamic hasAffinity;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPhoto; // @dynamic hasPhoto;
@property(nonatomic) _Bool hasPrimary; // @dynamic hasPrimary;
@property(retain, nonatomic) PSKName *name; // @dynamic name;
@property(retain, nonatomic) PSKPhoto *photo; // @dynamic photo;
@property(nonatomic) _Bool primary; // @dynamic primary;

@end

