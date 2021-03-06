//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIInnerTubeContext;

@interface YTILogAttestationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *botguardResponse; // @dynamic botguardResponse;
@property(copy, nonatomic) NSString *challenge; // @dynamic challenge;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *droidguardResponse; // @dynamic droidguardResponse;
@property(nonatomic) _Bool hasChallenge; // @dynamic hasChallenge;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(copy, nonatomic) NSData *iosguardResponse; // @dynamic iosguardResponse;
@property(readonly, nonatomic) int xguardClientResponseOneOfCase; // @dynamic xguardClientResponseOneOfCase;

@end

