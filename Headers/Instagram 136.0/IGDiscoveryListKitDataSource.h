//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@class IGDiscoveryGridDataController, IGDiscoveryGridDataStore, IGFeedItemLogger, IGPlaybackCoordinator, IGUserSession, NSString;
@protocol IGDiscoveryGridLoggingProvider, IGDiscoveryListKitDataSourceDelegate, IGDiscoverySectionLoggingProvider, IGGridItemPositionProvider;

@interface IGDiscoveryListKitDataSource : NSObject <IGListAdapterDataSource>
{
    IGUserSession *_userSession;
    struct IGGridLayoutConfiguration _layoutConfig;
    id <IGDiscoveryListKitDataSourceDelegate> _delegate;
    id <IGGridItemPositionProvider> _gridPositionProvider;
    id <IGDiscoverySectionLoggingProvider> _discoveryLoggingProvider;
    id <IGDiscoveryGridLoggingProvider> _gridLoggingProvider;
    IGDiscoveryGridDataController *_dataController;
    IGPlaybackCoordinator *_playbackCoordinator;
    IGFeedItemLogger *_feedItemLogger;
    NSString *_discoveryRecommendationCoverTitle;
    IGDiscoveryGridDataStore *_dataStore;
}

@property(retain, nonatomic) IGDiscoveryGridDataStore *dataStore; // @synthesize dataStore=_dataStore;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithUserSession:(id)arg1 layoutConfig:(struct IGGridLayoutConfiguration)arg2 discoveryRecommendationCoverTitle:(id)arg3 dataController:(id)arg4 playbackCoordinator:(id)arg5 feedItemLogger:(id)arg6 delegate:(id)arg7 loggingProvider:(id)arg8 gridLoggingProvider:(id)arg9 gridPositionProvider:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

