//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface TIMPBNGetMessagesCheckInfoInConversationResponseBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long cursorReverseNext; // @dynamic cursorReverseNext;
@property(nonatomic) _Bool hasCursorReverseNext; // @dynamic hasCursorReverseNext;
@property(nonatomic) _Bool hasRealMsgTotalCount; // @dynamic hasRealMsgTotalCount;
@property(retain, nonatomic) NSMutableArray *msgsCheckinfoListArray; // @dynamic msgsCheckinfoListArray;
@property(readonly, nonatomic) unsigned long long msgsCheckinfoListArray_Count; // @dynamic msgsCheckinfoListArray_Count;
@property(nonatomic) int realMsgTotalCount; // @dynamic realMsgTotalCount;

@end

