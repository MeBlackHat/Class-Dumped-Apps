//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface BootstrapRequestNonAuth : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(copy, nonatomic) NSString *errorReason; // @dynamic errorReason;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasErrorReason; // @dynamic hasErrorReason;
@property(nonatomic) _Bool hasInstallationId; // @dynamic hasInstallationId;
@property(nonatomic) _Bool hasLatency; // @dynamic hasLatency;
@property(nonatomic) _Bool hasPayloadSize; // @dynamic hasPayloadSize;
@property(nonatomic) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(copy, nonatomic) NSString *installationId; // @dynamic installationId;
@property(nonatomic) long long latency; // @dynamic latency;
@property(nonatomic) long long payloadSize; // @dynamic payloadSize;
@property(nonatomic) int statusCode; // @dynamic statusCode;

@end

