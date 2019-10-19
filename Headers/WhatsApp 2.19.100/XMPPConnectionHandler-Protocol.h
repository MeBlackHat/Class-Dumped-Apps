//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMPPConnection, XMPPNotificationStanza, XMPPStanza;

@protocol XMPPConnectionHandler <NSObject>
- (void)connectionDidReceiveOfflineCompleteMarker:(XMPPConnection *)arg1;
- (_Bool)handleLoginResponseStanza:(XMPPStanza *)arg1 onConnection:(XMPPConnection *)arg2;
- (void)xmppConnection:(XMPPConnection *)arg1 initialConfigurationAsync:(void (^)(unsigned long long, id, NSDictionary *))arg2;
- (_Bool)handleNotification:(XMPPNotificationStanza *)arg1 onConnection:(XMPPConnection *)arg2;
@end

