//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UADate, UAPreferenceDataStore, UATagGroupsLookupAPIClient, UATagGroupsLookupResponseCache;
@protocol UATagGroupsHistory, UATagGroupsLookupManagerDelegate;

@interface UATagGroupsLookupManager : NSObject
{
    NSObject<UATagGroupsLookupManagerDelegate> *_delegate;
    UAPreferenceDataStore *_dataStore;
    id <UATagGroupsHistory> _tagGroupsHistory;
    UATagGroupsLookupAPIClient *_lookupAPIClient;
    UATagGroupsLookupResponseCache *_cache;
    UADate *_currentTime;
}

+ (id)lookupManagerWithAPIClient:(id)arg1 dataStore:(id)arg2 cache:(id)arg3 tagGroupsHistory:(id)arg4 currentTime:(id)arg5;
+ (id)lookupManagerWithConfig:(id)arg1 dataStore:(id)arg2 tagGroupsHistory:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UADate *currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) UATagGroupsLookupResponseCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) UATagGroupsLookupAPIClient *lookupAPIClient; // @synthesize lookupAPIClient=_lookupAPIClient;
@property(retain, nonatomic) id <UATagGroupsHistory> tagGroupsHistory; // @synthesize tagGroupsHistory=_tagGroupsHistory;
@property(retain, nonatomic) UAPreferenceDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(nonatomic) __weak NSObject<UATagGroupsLookupManagerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)getTagGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)refreshCacheWithRequestedTagGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)generateTagGroups:(id)arg1 cachedResponse:(id)arg2 refreshDate:(id)arg3;
- (id)overrideDeviceTags:(id)arg1;
- (id)errorWithCode:(long long)arg1 message:(id)arg2;
@property(readonly, nonatomic) double maxSentMutationAge;
- (void)updateMaxSentMutationAge;
@property(nonatomic) double cacheStaleReadTime;
@property(nonatomic) double cacheMaxAgeTime;
@property(nonatomic) double preferLocalTagDataTime;
@property(nonatomic) _Bool enabled;
- (id)initWithAPIClient:(id)arg1 dataStore:(id)arg2 cache:(id)arg3 tagGroupsHistory:(id)arg4 currentTime:(id)arg5;

@end

