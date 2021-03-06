//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GDCDataserviceRequestDescriptor, NSString;

@interface GDCPollForChangesOptions : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaxRetryCount; // @dynamic hasMaxRetryCount;
@property(nonatomic) _Bool hasNotifiedChangeId; // @dynamic hasNotifiedChangeId;
@property(nonatomic) _Bool hasNotifiedTeamDriveId; // @dynamic hasNotifiedTeamDriveId;
@property(nonatomic) _Bool hasPollOnce; // @dynamic hasPollOnce;
@property(nonatomic) _Bool hasRequestDescriptor; // @dynamic hasRequestDescriptor;
@property(nonatomic) _Bool hasSkipPollingTeamDrives; // @dynamic hasSkipPollingTeamDrives;
@property(nonatomic) int maxRetryCount; // @dynamic maxRetryCount;
@property(nonatomic) long long notifiedChangeId; // @dynamic notifiedChangeId;
@property(copy, nonatomic) NSString *notifiedTeamDriveId; // @dynamic notifiedTeamDriveId;
@property(nonatomic) _Bool pollOnce; // @dynamic pollOnce;
@property(retain, nonatomic) GDCDataserviceRequestDescriptor *requestDescriptor; // @dynamic requestDescriptor;
@property(nonatomic) _Bool skipPollingTeamDrives; // @dynamic skipPollingTeamDrives;

@end

