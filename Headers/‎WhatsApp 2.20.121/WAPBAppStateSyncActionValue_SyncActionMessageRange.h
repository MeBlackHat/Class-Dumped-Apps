//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSMutableArray;

@interface WAPBAppStateSyncActionValue_SyncActionMessageRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalMessagesArray; // @dynamic additionalMessagesArray;
@property(readonly, nonatomic) unsigned long long additionalMessagesArray_Count; // @dynamic additionalMessagesArray_Count;
@property(nonatomic) _Bool hasLastMessageTimestamp; // @dynamic hasLastMessageTimestamp;
@property(nonatomic) _Bool hasLastSystemMessageTimestamp; // @dynamic hasLastSystemMessageTimestamp;
@property(nonatomic) long long lastMessageTimestamp; // @dynamic lastMessageTimestamp;
@property(nonatomic) long long lastSystemMessageTimestamp; // @dynamic lastSystemMessageTimestamp;

@end

