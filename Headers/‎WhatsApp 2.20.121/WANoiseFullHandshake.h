//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAEC25519KeyPair, WAEC25519PublicKey, WAHandshakeCipher, WANoiseStreamCipher;

@interface WANoiseFullHandshake : NSObject
{
    WAHandshakeCipher *_cipher;
    WAEC25519KeyPair *_clientEphemeralKeyPair;
    WAEC25519KeyPair *_clientStaticKeyPair;
    WAEC25519PublicKey *_serverEphemeralPublicKey;
    WAEC25519PublicKey *_serverStaticPublicKey;
    _Bool _generatedClientHello;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool generatedClientHello; // @synthesize generatedClientHello=_generatedClientHello;
@property(readonly, nonatomic) WANoiseStreamCipher *streamCipher;
- (_Bool)encryptClientFinishLoginPayload:(id)arg1 ciphertextOutput:(out id *)arg2 error:(out id *)arg3;
- (_Bool)decryptServerHelloCiphertext:(id)arg1 certificate:(out id *)arg2 serverStaticPublicKey:(out id *)arg3 error:(out id *)arg4;
- (_Bool)generateClientHelloCiphertextOutput:(out id *)arg1 withError:(out id *)arg2;
- (id)initWithVersion:(id)arg1 clientStaticKeyPair:(id)arg2;

@end

