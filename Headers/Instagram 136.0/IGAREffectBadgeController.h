//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGAREffectDownloaderBadgingListener-Protocol.h>
#import <InstagramAppCoreFramework/IGNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>

@class IGAREffectDownloader, IGNetworkSource, IGUserDefaults, NSArray, NSString;
@protocol IGAPIClient;

@interface IGAREffectBadgeController : NSObject <IGAREffectDownloaderBadgingListener, IGNetworkSourceDelegate, IGUserSessionObject>
{
    IGAREffectDownloader *_arEffectDownloader;
    NSArray *_newAREffectIDs;
    long long _newAREffectCount;
    id <IGAPIClient> _networker;
    IGUserDefaults *_userDefaults;
    struct NSMutableDictionary *_arEffectIDStates;
    IGNetworkSource *_arEffectBadgeNetworkSource;
}

- (void).cxx_destruct;
- (void)syncSeenStates;
- (void)markAREffectUsed:(id)arg1;
- (long long)badgeStateForAREffect:(id)arg1;
- (void)markNewAREffectsAsViewed;
- (long long)numberOfNewAREffects;
- (void)didFetchAREffects:(id)arg1 arEffectDownloader:(id)arg2;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3;
- (void)dealloc;
- (id)initWithAREffectDownloader:(id)arg1 networker:(id)arg2 userDefaults:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

