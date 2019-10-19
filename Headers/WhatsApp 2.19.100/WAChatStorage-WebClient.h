//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorage.h>

@interface WAChatStorage (WebClient)
- (_Bool)relayOutgoingMessage:(id)arg1;
- (id)messagePlaceholderForWebMessageInfo:(id)arg1;
- (id)allMessagesInChatSessionIncludingAndAfterMessage:(id)arg1;
- (id)recentMessagesForChatSession:(id)arg1 activityLevel:(long long)arg2;
- (id)allChatSessionsInContext:(id)arg1;
- (unsigned long long)countMessagesInChatSession:(id)arg1 ofType:(int)arg2;
- (unsigned long long)countMediaMessagesInChatSession:(id)arg1;
- (unsigned long long)countMessagesInChatSession:(id)arg1;
- (id)messagesInChatSession:(id)arg1 ofType:(int)arg2 count:(unsigned long long)arg3 sortOrder:(unsigned long long)arg4 withRelation:(unsigned long long)arg5 toMessageID:(id)arg6;
- (id)mediaMessagesInChatSession:(id)arg1 count:(unsigned long long)arg2 sortOrder:(unsigned long long)arg3 withRelation:(unsigned long long)arg4 toMessageID:(id)arg5;
- (id)messagesInChatSession:(id)arg1 count:(unsigned long long)arg2 sortOrder:(unsigned long long)arg3 withRelation:(unsigned long long)arg4 toMessageID:(id)arg5;
- (id)messagesPredicateForChatSession:(id)arg1 type:(int)arg2 beforeMessage:(id)arg3 afterMessage:(id)arg4;
@end

