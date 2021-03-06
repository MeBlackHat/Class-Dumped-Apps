//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIPRExtensionSet, GIPRFieldFilter, GIPRMergedPersonSourceOptions, GIPRPeopleContext, GIPRRequestMask, NSString;

@interface GIPRListCircledPeopleRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GIPRPeopleContext *context; // @dynamic context;
@property(nonatomic) int dedupeOption; // @dynamic dedupeOption;
@property(retain, nonatomic) GIPRExtensionSet *extensionSet; // @dynamic extensionSet;
@property(retain, nonatomic) GIPRFieldFilter *fieldFilter; // @dynamic fieldFilter;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasExtensionSet; // @dynamic hasExtensionSet;
@property(nonatomic) _Bool hasFieldFilter; // @dynamic hasFieldFilter;
@property(nonatomic) _Bool hasMergedPersonSourceOptions; // @dynamic hasMergedPersonSourceOptions;
@property(nonatomic) _Bool hasRequestMask; // @dynamic hasRequestMask;
@property(retain, nonatomic) GIPRMergedPersonSourceOptions *mergedPersonSourceOptions; // @dynamic mergedPersonSourceOptions;
@property(nonatomic) int orderBy; // @dynamic orderBy;
@property(nonatomic) int pageSize; // @dynamic pageSize;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *personId; // @dynamic personId;
@property(retain, nonatomic) GIPRRequestMask *requestMask; // @dynamic requestMask;

@end

