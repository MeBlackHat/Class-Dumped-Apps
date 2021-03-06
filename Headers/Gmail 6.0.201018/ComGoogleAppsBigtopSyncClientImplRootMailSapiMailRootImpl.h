//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTSapiMailRoot-Protocol.h"

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, NSString;
@protocol ComGoogleAppsXplatDaggerAsyncProvider;

@interface ComGoogleAppsBigtopSyncClientImplRootMailSapiMailRootImpl : NSObject <JBTSapiMailRoot>
{
    id <ComGoogleAppsXplatDaggerAsyncProvider> imageUrlSettingsFactory_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> items_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> labels_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> medias_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> offlineSyncEventPublisher_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> organizationElements_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> originalMessageBodyFetching_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> search_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> searchRefinementChipBuilderFactory_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> searchHistory_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> signatures_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> smartcomposeManualPhrasebook_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> snapshots_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> surveys_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> taskCompose_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> tasks_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> weekdays_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> unifiedInboxManager_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> userActions_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> userSettings_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> attachmentFetching_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> clusterLists_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> clusters_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> compose_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> contacts_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> conversations_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> filters_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> itemLists_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> prefetchers_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> ads_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
}

+ (void)initialize;
- (void)dealloc;
- (id)weekdays;
- (id)userSettings;
- (id)userActions;
- (id)unifiedInboxManager;
- (id)tasks;
- (id)taskCompose;
- (id)surveys;
- (id)snapshots;
- (id)smartcomposeManualPhrasebook;
- (id)signatures;
- (id)searchRefinementChipBuilderFactory;
- (id)searchHistory;
- (id)search;
- (id)originalMessageBodyFetching;
- (id)prefetchers;
- (id)organizationElements;
- (id)offlineSyncEventPublisher;
- (id)medias;
- (id)labels;
- (id)items;
- (id)itemLists;
- (id)filters;
- (id)imageUrlSettingsFactory;
- (id)conversations;
- (id)contacts;
- (id)compose;
- (id)clusters;
- (id)clusterLists;
- (id)attachmentFetching;
- (id)ads;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

