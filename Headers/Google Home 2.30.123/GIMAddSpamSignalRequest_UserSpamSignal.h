//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMId, NSData, NSMutableArray, NSString;

@interface GIMAddSpamSignalRequest_UserSpamSignal : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *appSpecificSignal; // @dynamic appSpecificSignal;
@property(retain, nonatomic) GIMId *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(copy, nonatomic) NSString *messageId; // @dynamic messageId;
@property(retain, nonatomic) NSMutableArray *messagesArray; // @dynamic messagesArray;
@property(readonly, nonatomic) unsigned long long messagesArray_Count; // @dynamic messagesArray_Count;
@property(retain, nonatomic) NSMutableArray *spamMessagesArray; // @dynamic spamMessagesArray;
@property(readonly, nonatomic) unsigned long long spamMessagesArray_Count; // @dynamic spamMessagesArray_Count;
@property(nonatomic) int spamType; // @dynamic spamType;
@property(retain, nonatomic) GIMId *userId; // @dynamic userId;

@end

