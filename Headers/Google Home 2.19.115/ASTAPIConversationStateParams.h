//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface ASTAPIConversationStateParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) NSMutableArray *dialogIntentStateArray; // @dynamic dialogIntentStateArray;
@property(readonly, nonatomic) unsigned long long dialogIntentStateArray_Count; // @dynamic dialogIntentStateArray_Count;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasLastSpokenLanguage; // @dynamic hasLastSpokenLanguage;
@property(nonatomic) _Bool hasSpokenQuery; // @dynamic hasSpokenQuery;
@property(retain, nonatomic) NSMutableArray *intentUpdateArray; // @dynamic intentUpdateArray;
@property(readonly, nonatomic) unsigned long long intentUpdateArray_Count; // @dynamic intentUpdateArray_Count;
@property(copy, nonatomic) NSString *lastSpokenLanguage; // @dynamic lastSpokenLanguage;
@property(copy, nonatomic) NSString *spokenQuery; // @dynamic spokenQuery;

@end

