//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Payments/NSObject-Protocol.h>
#import <Payments/WAXOutgoingStanza-Protocol.h>

@class NSString, WADomainJID, XMPPIQStanza;
@protocol WAXOutgoingStanzaElementMfaPaymentChangePINRequest_Account;

@protocol WAXOutgoingStanzaMfaPaymentChangePINRequest <NSObject, WAXOutgoingStanza>
@property(nonatomic, readonly) id <WAXOutgoingStanzaElementMfaPaymentChangePINRequest_Account> account;
@property(nonatomic, readonly) NSString *xmlns;
@property(nonatomic, readonly) NSString *id_p;
@property(nonatomic, readonly) WADomainJID *to;
@property(nonatomic, readonly) NSString *type;
@property(nonatomic, readonly) XMPPIQStanza *xmppIQStanza;
@end

