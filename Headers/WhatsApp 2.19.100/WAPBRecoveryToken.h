//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSData;

@interface WAPBRecoveryToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long creationTimestamp; // @dynamic creationTimestamp;
@property(nonatomic) _Bool hasCreationTimestamp; // @dynamic hasCreationTimestamp;
@property(nonatomic) _Bool hasTokenData; // @dynamic hasTokenData;
@property(nonatomic) _Bool hasVersion; // @dynamic hasVersion;
@property(copy, nonatomic) NSData *tokenData; // @dynamic tokenData;
@property(nonatomic) int version; // @dynamic version;

@end

