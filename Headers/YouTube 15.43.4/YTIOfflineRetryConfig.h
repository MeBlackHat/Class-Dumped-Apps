//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface YTIOfflineRetryConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInitialRetryIntervalMs; // @dynamic hasInitialRetryIntervalMs;
@property(nonatomic) _Bool hasMaxRetryIntervalMs; // @dynamic hasMaxRetryIntervalMs;
@property(nonatomic) _Bool hasMaxTotalRetries; // @dynamic hasMaxTotalRetries;
@property(nonatomic) int initialRetryIntervalMs; // @dynamic initialRetryIntervalMs;
@property(nonatomic) int maxRetryIntervalMs; // @dynamic maxRetryIntervalMs;
@property(nonatomic) int maxTotalRetries; // @dynamic maxTotalRetries;

@end

