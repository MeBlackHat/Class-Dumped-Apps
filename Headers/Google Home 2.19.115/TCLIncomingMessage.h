//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMId, GIMStateSyncMessageBundle, NSData, NSDate, NSNumber, NSString, TCLAccountChangeMessage, TCLEndpoint, TCLGenericMessage, TCLMediaMessage, TCLReceiptMessage;

@interface TCLIncomingMessage : NSObject
{
    long long _messageType;
    TCLEndpoint *_sender;
    GIMId *_receiverId;
    GIMId *_groupId;
    NSString *_messageId;
    NSString *_originalMessageId;
    NSDate *_messageTimestamp;
    TCLGenericMessage *_genericMessage;
    TCLReceiptMessage *_receiptMessage;
    TCLMediaMessage *_mediaMessage;
    TCLAccountChangeMessage *_accountChangeMessage;
    GIMStateSyncMessageBundle *_stateSyncMessage;
    NSNumber *_requestReceipt;
    NSData *_receiptSignature;
}

+ (id)incomingMessageWithMessageType:(long long)arg1 sender:(id)arg2 receiverId:(id)arg3 groupId:(id)arg4 messageId:(id)arg5 originalMessageId:(id)arg6 messageTimestamp:(id)arg7 genericMessage:(id)arg8 receiptMessage:(id)arg9 mediaMessage:(id)arg10 accountChangeMessage:(id)arg11 stateSyncMessage:(id)arg12 requestReceipt:(id)arg13 receiptSignature:(id)arg14;
@property(readonly, nonatomic) NSData *receiptSignature; // @synthesize receiptSignature=_receiptSignature;
@property(readonly, nonatomic) NSNumber *requestReceipt; // @synthesize requestReceipt=_requestReceipt;
@property(readonly, nonatomic) GIMStateSyncMessageBundle *stateSyncMessage; // @synthesize stateSyncMessage=_stateSyncMessage;
@property(readonly, nonatomic) TCLAccountChangeMessage *accountChangeMessage; // @synthesize accountChangeMessage=_accountChangeMessage;
@property(readonly, nonatomic) TCLMediaMessage *mediaMessage; // @synthesize mediaMessage=_mediaMessage;
@property(readonly, nonatomic) TCLReceiptMessage *receiptMessage; // @synthesize receiptMessage=_receiptMessage;
@property(readonly, nonatomic) TCLGenericMessage *genericMessage; // @synthesize genericMessage=_genericMessage;
@property(readonly, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(readonly, nonatomic) NSString *originalMessageId; // @synthesize originalMessageId=_originalMessageId;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) GIMId *groupId; // @synthesize groupId=_groupId;
@property(readonly, nonatomic) GIMId *receiverId; // @synthesize receiverId=_receiverId;
@property(readonly, nonatomic) TCLEndpoint *sender; // @synthesize sender=_sender;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessageType:(long long)arg1 sender:(id)arg2 receiverId:(id)arg3 groupId:(id)arg4 messageId:(id)arg5 originalMessageId:(id)arg6 messageTimestamp:(id)arg7 genericMessage:(id)arg8 receiptMessage:(id)arg9 mediaMessage:(id)arg10 accountChangeMessage:(id)arg11 stateSyncMessage:(id)arg12 requestReceipt:(id)arg13 receiptSignature:(id)arg14;

@end

