//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBInt64Array, NSMutableArray;

@interface GIPRAffinityRequestContext_PhotosSuggestedSharingContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int affinityVersion; // @dynamic affinityVersion;
@property(retain, nonatomic) NSMutableArray *emailsArray; // @dynamic emailsArray;
@property(readonly, nonatomic) unsigned long long emailsArray_Count; // @dynamic emailsArray_Count;
@property(retain, nonatomic) GPBInt64Array *gaiaIdsArray; // @dynamic gaiaIdsArray;
@property(readonly, nonatomic) unsigned long long gaiaIdsArray_Count; // @dynamic gaiaIdsArray_Count;
@property(retain, nonatomic) NSMutableArray *phonesArray; // @dynamic phonesArray;
@property(readonly, nonatomic) unsigned long long phonesArray_Count; // @dynamic phonesArray_Count;

@end

