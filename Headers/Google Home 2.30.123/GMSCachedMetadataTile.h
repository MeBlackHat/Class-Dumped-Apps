//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GMSTileExpiration;

@interface GMSCachedMetadataTile : NSObject
{
    int _sourceTileDataVersion;
    id _metadata;
    id <GMSTileExpiration> _expirationState;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GMSTileExpiration> expirationState; // @synthesize expirationState=_expirationState;
@property(readonly, nonatomic) int sourceTileDataVersion; // @synthesize sourceTileDataVersion=_sourceTileDataVersion;
@property(readonly, nonatomic) id metadata; // @synthesize metadata=_metadata;
- (id)initWithMetadata:(id)arg1 sourceTileDataVersion:(int)arg2 expirationState:(id)arg3;

@end

