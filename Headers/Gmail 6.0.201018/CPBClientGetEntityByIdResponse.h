//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CPBClientResponseHeader, NSMutableArray;

@interface CPBClientGetEntityByIdResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *entityArray; // @dynamic entityArray;
@property(readonly, nonatomic) unsigned long long entityArray_Count; // @dynamic entityArray_Count;
@property(retain, nonatomic) NSMutableArray *entityResultArray; // @dynamic entityResultArray;
@property(readonly, nonatomic) unsigned long long entityResultArray_Count; // @dynamic entityResultArray_Count;
@property(nonatomic) _Bool hasResponseHeader; // @dynamic hasResponseHeader;
@property(retain, nonatomic) CPBClientResponseHeader *responseHeader; // @dynamic responseHeader;

@end

