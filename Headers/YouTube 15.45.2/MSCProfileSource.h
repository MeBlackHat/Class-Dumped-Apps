//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/SSOProfileSource-Protocol.h>
#import <Module_Framework/SSOProfileSourceInternal-Protocol.h>

@class MSCFlags, MSCSharedCache, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MDILogger, OS_dispatch_queue, SSOService;

@interface MSCProfileSource : NSObject <SSOProfileSourceInternal, SSOProfileSource>
{
    id <SSOService> _service;
    MSCFlags *_flags;
    id <MDILogger> _logger;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    MSCSharedCache *_sharedCache;
    NSMutableDictionary *_profileCaches;
    NSMutableDictionary *_profileImageCaches;
    NSMutableDictionary *_coverImageCaches;
    NSMutableSet *_identitiesWithNotifications;
    NSMutableArray *_registeredHandlers;
    NSMutableDictionary *_profileMemoryCaches;
    NSMutableDictionary *_profileImageMemoryCaches;
    NSMutableDictionary *_coverImageMemoryCaches;
    NSMapTable *_imageToDefaultSizeMap;
    NSMapTable *_imageToDisabledMap;
    NSMutableDictionary *_lastNotifiedProfiles;
    NSMutableDictionary *_lastNotifiedProfileImages;
    NSMutableDictionary *_lastNotifiedCoverImages;
    NSMutableDictionary *_inFlightProfileFetches;
    NSMutableDictionary *_inFlightProfileImageFetches;
    NSMutableDictionary *_inFlightCoverImageFetches;
    _Bool _shouldCacheCoverImages;
    double _profileRefreshInterval;
    unsigned long long _profileImageWidth;
}

+ (id)defaultSizeProfileImageForImage:(id)arg1;
+ (id)defaultSizePlaceholderProfileImage;
+ (id)profileSourceWithService:(id)arg1 flags:(id)arg2 logger:(id)arg3;
+ (void)setScreenScaleForTestsOnly:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldCacheCoverImages; // @synthesize shouldCacheCoverImages=_shouldCacheCoverImages;
@property(nonatomic) double profileRefreshInterval; // @synthesize profileRefreshInterval=_profileRefreshInterval;
- (void)registerNotificationsForIdentity:(id)arg1;
- (id)cachedDataFromCacheWithGroupName:(id)arg1 key:(id)arg2 identity:(id)arg3 cachePerUserDictionary:(id)arg4;
- (void)writeProfileToDisk:(id)arg1 forIdentity:(id)arg2;
- (void)remoteFetchCoverImageForProfile:(id)arg1 identity:(id)arg2;
- (void)remoteFetchProfileImageForProfile:(id)arg1 identity:(id)arg2;
- (void)remoteFetchProfileForIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleFetchedProfile:(id)arg1 forIdentity:(id)arg2 userCallback:(CDUnknownBlockType)arg3;
- (void)fetchURL:(id)arg1 identity:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)sendNotificationIfCoverImageChanged:(id)arg1 forIdentity:(id)arg2;
- (void)sendNotificationIfProfileImageChanged:(id)arg1 forIdentity:(id)arg2;
- (void)sendNotificationIfProfileChanged:(id)arg1 forIdentity:(id)arg2;
- (_Bool)makeCacheWithGroupNameAvailable:(id)arg1 identity:(id)arg2 cachePerUserDictionary:(id)arg3;
- (id)disabledProfileImageForImage:(id)arg1;
- (id)defaultSizeProfileImageForIdentity:(id)arg1;
- (void)setProfileUpdateDate:(id)arg1 forIdentity:(id)arg2;
- (_Bool)isStaleProfile:(id)arg1;
- (void)removeProfileFileCache;
- (void)removeCachedDataForIdentity:(id)arg1;
- (id)cachedCoverImageForIdentity:(id)arg1 refreshIfStale:(_Bool)arg2;
- (id)cachedCoverImageForIdentity:(id)arg1;
- (id)cachedProfileImageForIdentity:(id)arg1 refreshIfStale:(_Bool)arg2;
- (id)cachedProfileImageForIdentity:(id)arg1;
- (id)cachedProfileForIdentity:(id)arg1 refreshIfStale:(_Bool)arg2;
- (id)cachedProfileForIdentity:(id)arg1;
- (void)fetchProfileForIdentity:(id)arg1 useCachedProfile:(_Bool)arg2 callback:(CDUnknownBlockType)arg3;
@property(nonatomic) unsigned long long profileImageWidth; // @synthesize profileImageWidth=_profileImageWidth;
- (_Bool)fetchIsInFlightForIdentity:(id)arg1 inFlightFetches:(id)arg2;
- (id)initWithService:(id)arg1 flags:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

