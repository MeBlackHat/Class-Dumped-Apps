//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class CSHMMobileConversation, NSMutableArray, NSString;

@interface CSHMMobileCachedConversationData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CSHMMobileConversation *conversation; // @dynamic conversation;
@property(retain, nonatomic) NSMutableArray *conversationEventsArray; // @dynamic conversationEventsArray;
@property(readonly, nonatomic) unsigned long long conversationEventsArray_Count; // @dynamic conversationEventsArray_Count;
@property(nonatomic) _Bool hasConversation; // @dynamic hasConversation;
@property(nonatomic) _Bool hasUserParticipantId; // @dynamic hasUserParticipantId;
@property(copy, nonatomic) NSString *userParticipantId; // @dynamic userParticipantId;

@end

