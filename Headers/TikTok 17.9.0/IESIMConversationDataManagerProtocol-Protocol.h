//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSOrderedSet, NSSet, NSString;
@protocol IESIMConversationCreationOptionsProtocol, IESIMConversationOperateParticipantOptionsProtocol, IESIMConversationProtocol;

@protocol IESIMConversationDataManagerProtocol <NSObject>
- (void)fetchConversationInfo:(long long)arg1 conversationID:(NSString *)arg2 type:(unsigned long long)arg3 inInbox:(int)arg4 completion:(void (^)(NSError *))arg5;
- (void)sendMessageP2P:(long long)arg1 conversationId:(NSString *)arg2 visibleUser:(NSOrderedSet *)arg3 messageType:(long long)arg4 content:(NSString *)arg5 ext:(NSDictionary *)arg6 complection:(void (^)(NSSet *, NSError *))arg7;
- (void)sendMessageP2P:(NSOrderedSet *)arg1 messageType:(long long)arg2 content:(NSString *)arg3 ext:(NSDictionary *)arg4 toConversation:(id <IESIMConversationProtocol>)arg5 complection:(void (^)(NSSet *, NSError *))arg6;
- (void)setStickOnTop:(_Bool)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)setMute:(_Bool)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)enterConversation:(NSString *)arg1 conversationType:(unsigned long long)arg2 shortID:(long long)arg3 inbox:(int)arg4 options:(id <IESIMConversationOperateParticipantOptionsProtocol>)arg5 completion:(void (^)(NSSet *, id <IESIMConversationOperationResponse>, NSError *))arg6;
- (void)setAliasForParticipant:(long long)arg1 alias:(NSString *)arg2 ofConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg4;
- (void)setBatchRoleForParticipant:(NSOrderedSet *)arg1 role:(long long)arg2 bizExt:(NSDictionary *)arg3 ofConversation:(id <IESIMConversationProtocol>)arg4 completion:(void (^)(NSSet *, NSSet *, NSError *))arg5;
- (void)setRoleForParticipant:(long long)arg1 role:(long long)arg2 ofConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg4;
- (void)dismissFromConversation:(id <IESIMConversationProtocol>)arg1 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg2;
- (void)leaveFromConversation:(id <IESIMConversationProtocol>)arg1 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg2;
- (void)removeParticipants:(NSSet *)arg1 options:(id <IESIMConversationOperateParticipantOptionsProtocol>)arg2 fromConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(NSSet *, id <IESIMConversationOperationResponse>, NSError *))arg4;
- (void)removeParticipants:(NSSet *)arg1 fromConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSSet *, id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)addParticipants:(NSOrderedSet *)arg1 options:(id <IESIMConversationOperateParticipantOptionsProtocol>)arg2 toConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(NSSet *, id <IESIMConversationOperationResponse>, NSError *))arg4;
- (void)addParticipants:(NSOrderedSet *)arg1 toConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSSet *, id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)deleteAllMessagesWithMode:(unsigned long long)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteWithOptions:(unsigned long long)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSError *))arg3;
- (void)deleteWithMode:(unsigned long long)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSError *))arg3;
- (void)sendUserAction:(long long)arg1 extra:(NSDictionary *)arg2 toConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(NSError *))arg4;
- (void)markAsUnreadWithMode:(unsigned long long)arg1 unreadCount:(long long)arg2 ofConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(NSError *))arg4;
- (void)markAllMessagesBeforeMessage:(NSString *)arg1 asReadWithMode:(unsigned long long)arg2 ofConversation:(id <IESIMConversationProtocol>)arg3 completion:(void (^)(NSError *))arg4;
- (void)markAllMessagesAsReadWithMode:(unsigned long long)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(NSError *))arg3;
- (void)markAllConversationsAsReadWithMode:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)createConversationWithOtherParticipants:(NSSet *)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 options:(id <IESIMConversationCreationOptionsProtocol>)arg4 completion:(void (^)(NSString *, id <IESIMConversationOperationResponse>, NSError *))arg5;
- (void)createConversationWithOtherParticipants:(NSSet *)arg1 type:(unsigned long long)arg2 inInbox:(int)arg3 completion:(void (^)(NSString *, id <IESIMConversationOperationResponse>, NSError *))arg4;
- (void)setNotice:(NSString *)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)setIcon:(NSString *)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)setDesc:(NSString *)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)setName:(NSString *)arg1 ofConversation:(id <IESIMConversationProtocol>)arg2 completion:(void (^)(id <IESIMConversationOperationResponse>, NSError *))arg3;
- (void)conversationForceSetUpdated:(id <IESIMConversationProtocol>)arg1 at:(NSDate *)arg2;
- (void)conversationUpdateCurrentIfNeeded:(id <IESIMConversationProtocol>)arg1 completion:(void (^)(NSError *))arg2;
- (void)conversationUpdateIfNeeded:(id <IESIMConversationProtocol>)arg1;
@end

