//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString, PhotosMCAssistantMessage_Notification_Vibrate;

@interface PhotosMCAssistantMessage_Notification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool displayInSystemTray; // @dynamic displayInSystemTray;
@property(nonatomic) int displayInSystemTrayQuietPeriodSec; // @dynamic displayInSystemTrayQuietPeriodSec;
@property(nonatomic) long long doNotNotifyAfterTimestampMs; // @dynamic doNotNotifyAfterTimestampMs;
@property(nonatomic) _Bool hasDisplayInSystemTray; // @dynamic hasDisplayInSystemTray;
@property(nonatomic) _Bool hasDisplayInSystemTrayQuietPeriodSec; // @dynamic hasDisplayInSystemTrayQuietPeriodSec;
@property(nonatomic) _Bool hasDoNotNotifyAfterTimestampMs; // @dynamic hasDoNotNotifyAfterTimestampMs;
@property(nonatomic) _Bool hasIncludeInBadgeCount; // @dynamic hasIncludeInBadgeCount;
@property(nonatomic) _Bool hasThrottlingKey; // @dynamic hasThrottlingKey;
@property(nonatomic) _Bool hasVibrate; // @dynamic hasVibrate;
@property(nonatomic) _Bool includeInBadgeCount; // @dynamic includeInBadgeCount;
@property(copy, nonatomic) NSString *throttlingKey; // @dynamic throttlingKey;
@property(retain, nonatomic) PhotosMCAssistantMessage_Notification_Vibrate *vibrate; // @dynamic vibrate;

@end

