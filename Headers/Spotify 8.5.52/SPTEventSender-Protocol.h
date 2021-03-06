//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPBMessage, NSData, NSString;
@protocol SPTEventSenderMessage;

@protocol SPTEventSender <NSObject>
- (void)sendWrappedNonAuthenticatedEvent:(id <SPTEventSenderMessage>)arg1;
- (void)sendWrappedEvent:(id <SPTEventSenderMessage>)arg1;
- (void)sendNonAuthenticatedEventWithName:(NSString *)arg1 data:(NSData *)arg2;
- (void)sendNonAuthenticatedEventWithProtobuf:(GPBMessage *)arg1;
- (void)sendEventWithName:(NSString *)arg1 data:(NSData *)arg2;
- (void)sendEventWithProtobuf:(GPBMessage *)arg1;
@end

