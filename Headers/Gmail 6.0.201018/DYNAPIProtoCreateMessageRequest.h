//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class DYNAPIProtoMessage, NSString;

@interface DYNAPIProtoCreateMessageRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(retain, nonatomic) DYNAPIProtoMessage *message; // @dynamic message;
@property(copy, nonatomic) NSString *parent; // @dynamic parent;
@property(copy, nonatomic) NSString *requestId; // @dynamic requestId;
@property(copy, nonatomic) NSString *threadKey; // @dynamic threadKey;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

