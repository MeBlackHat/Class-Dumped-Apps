//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface ImpersonatedUser : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool forcePrimary; // @dynamic forcePrimary;
@property(nonatomic) _Bool hasForcePrimary; // @dynamic hasForcePrimary;
@property(nonatomic) _Bool hasImpersonatedGaiaId; // @dynamic hasImpersonatedGaiaId;
@property(nonatomic) _Bool hasImpersonationType; // @dynamic hasImpersonationType;
@property(copy, nonatomic) NSString *impersonatedGaiaId; // @dynamic impersonatedGaiaId;
@property(nonatomic) int impersonationType; // @dynamic impersonationType;

@end

