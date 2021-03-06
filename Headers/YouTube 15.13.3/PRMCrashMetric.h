//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@interface PRMCrashMetric : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long crashCount; // @dynamic crashCount;
@property(nonatomic) _Bool hasCrashCount; // @dynamic hasCrashCount;
@property(nonatomic) _Bool hasIsMemorySuspension; // @dynamic hasIsMemorySuspension;
@property(nonatomic) _Bool hasUserInitiatedSessions; // @dynamic hasUserInitiatedSessions;
@property(nonatomic) _Bool hasUserSessionCount; // @dynamic hasUserSessionCount;
@property(nonatomic) _Bool isMemorySuspension; // @dynamic isMemorySuspension;
@property(nonatomic) int userInitiatedSessions; // @dynamic userInitiatedSessions;
@property(nonatomic) long long userSessionCount; // @dynamic userSessionCount;

@end

