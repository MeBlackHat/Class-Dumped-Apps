//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NFDDeliveryAddress;

@interface NFDTarget : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int channelType; // @dynamic channelType;
@property(retain, nonatomic) NFDDeliveryAddress *deliveryAddress; // @dynamic deliveryAddress;
@property(nonatomic) _Bool hasChannelType; // @dynamic hasChannelType;
@property(nonatomic) _Bool hasDeliveryAddress; // @dynamic hasDeliveryAddress;

@end

