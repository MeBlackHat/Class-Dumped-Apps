//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationContextHandler-Protocol.h"

@class NSString;
@protocol SPTCollectionPlatform, SPTCollectionPlatformConfiguration;

@interface SPTAssistedCurationLikedSongsContextHandler : NSObject <SPTAssistedCurationContextHandler>
{
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTCollectionPlatformConfiguration> _collectionPlatformConfiguration;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionPlatformConfiguration; // @synthesize collectionPlatformConfiguration=_collectionPlatformConfiguration;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
- (id)supportedCardProviders;
- (id)provideSortMechanism;
- (id)provideDatasourceForContextURI:(id)arg1;
- (_Bool)canHandleContextURI:(id)arg1;
@property(readonly, nonatomic, getter=isReachableContext) _Bool reachableContext;
@property(readonly, nonatomic) _Bool useContextName;
- (id)initWithCollectionPlatform:(id)arg1 collectionPlatformConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

