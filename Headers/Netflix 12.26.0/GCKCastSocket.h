//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFCW444/GCKNSSLSocket.h>

@class GCKClientCertificate, GCKSSecurityTrust, NSMutableData, NSString;
@protocol GCKCastSocketDelegate;

__attribute__((visibility("hidden")))
@interface GCKCastSocket : GCKNSSLSocket
{
    unsigned long long _state;
    long long _closeErrorCode;
    _Bool _shouldDisconnect;
    _Bool _guestMode;
    _Bool _guestModeHandshaking;
    NSString *_guestModeToken;
    GCKClientCertificate *_clientCertificate;
    GCKSSecurityTrust *_trust;
    NSMutableData *_incomingMessage;
    unsigned long long _incomingMessageBytesReceived;
    id <GCKCastSocketDelegate> _castDelegate;
    unsigned long long _maxMessageLength;
}

@property(nonatomic) unsigned long long maxMessageLength; // @synthesize maxMessageLength=_maxMessageLength;
@property(nonatomic) __weak id <GCKCastSocketDelegate> castDelegate; // @synthesize castDelegate=_castDelegate;
- (void).cxx_destruct;
- (void)notifyCanAcceptDataOfLength:(unsigned long long)arg1;
- (void)notifyError:(long long)arg1 whileConnecting:(_Bool)arg2;
- (void)notifyDidReceiveMessage:(id)arg1;
- (void)notifyDidConnectWithPeerSecurityTrust:(id)arg1;
- (long long)translateNetworkErrorCode:(long long)arg1;
- (void)doTeardownWithErrorCode:(long long)arg1;
- (_Bool)readMessages;
- (_Bool)verifyCertificate:(id)arg1 error:(id *)arg2;
- (void)finishConnecting;
- (void)continueGuestModeHandshake;
- (_Bool)startGuestModeHandshake;
- (void)super_onDisconnectedWithError:(id)arg1;
- (void)super_onConnectionFailedWithError:(id)arg1;
- (void)super_onWritable;
- (void)super_onReadable;
- (void)super_onReady;
- (void)super_onConnected;
- (void)super_closeWithError:(id)arg1;
- (long long)super_receiveBytes:(char *)arg1 length:(unsigned long long)arg2 partialOK:(_Bool)arg3;
- (long long)super_receiveData:(id)arg1;
- (long long)super_sendBytes:(const char *)arg1 length:(unsigned long long)arg2 partialOK:(_Bool)arg3;
- (long long)super_sendData:(id)arg1;
- (_Bool)super_connectToAddress:(id)arg1 error:(id *)arg2;
- (void)onDisconnectedWithError:(id)arg1;
- (void)onWritable;
- (void)onReadable;
- (void)onReady;
- (void)onConnectionFailedWithError:(id)arg1;
- (void)onConnected;
- (long long)sendMessage:(id)arg1;
- (_Bool)closeWithError:(id)arg1;
- (_Bool)connectToAddress:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAddressType:(long long)arg1;
- (id)initWithAddressType:(long long)arg1 bufferSize:(unsigned long long)arg2 guestModeClientCertificate:(id)arg3 guestModeToken:(id)arg4;

@end

