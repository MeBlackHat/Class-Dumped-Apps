//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class DYNAPIProtoSpace, RPCStatus;

@interface DYNAPIProtoBatchGetSpacesResponse_SpaceResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSpace; // @dynamic hasSpace;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) DYNAPIProtoSpace *space; // @dynamic space;
@property(retain, nonatomic) RPCStatus *status; // @dynamic status;

@end

