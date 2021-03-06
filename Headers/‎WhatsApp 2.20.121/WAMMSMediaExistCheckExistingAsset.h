//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, WAMediaKey;

@interface WAMMSMediaExistCheckExistingAsset : NSObject
{
    NSData *_encHash;
    WAMediaKey *_mediaKey;
    NSData *_plaintextHash;
    NSData *_sidecar;
    NSArray *_partialPlaintextHashes;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *partialPlaintextHashes; // @synthesize partialPlaintextHashes=_partialPlaintextHashes;
@property(readonly, nonatomic) NSData *sidecar; // @synthesize sidecar=_sidecar;
@property(readonly, nonatomic) NSData *plaintextHash; // @synthesize plaintextHash=_plaintextHash;
@property(readonly, nonatomic) WAMediaKey *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, nonatomic) NSData *encHash; // @synthesize encHash=_encHash;
- (id)initWithEncHash:(id)arg1 mediaKey:(id)arg2 plaintextHash:(id)arg3 sidecar:(id)arg4 partialPlaintextHashes:(id)arg5;

@end

