//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopCommonUtilLifecycleTracker, ComGoogleAppsBigtopDataItemsAddonsCachedAddOnDataManager, ComGoogleAppsBigtopDataItemsItemsProto_AddOnCardListConfig, XPTExecutionGuard;
@protocol ComGoogleAppsBigtopDataNetworkAddonsApiAddOnsApiaryClient, ComGoogleAppsXplatObserveSettable, JBTSettingsClient, JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsAddonsMemoryAddOnDataList : NSObject
{
    id lock_;
    ComGoogleAppsBigtopCommonUtilLifecycleTracker *lifecycleTracker_;
    id <ComGoogleAppsXplatObserveSettable> settableSnapshot_;
    ComGoogleAppsBigtopDataItemsItemsProto_AddOnCardListConfig *listConfig_;
    id <ComGoogleAppsBigtopDataNetworkAddonsApiAddOnsApiaryClient> addOnsApiaryClient_;
    ComGoogleAppsBigtopDataItemsAddonsCachedAddOnDataManager *cachedAddOnDataManager_;
    id <JavaxInjectProvider> executor_;
    XPTExecutionGuard *executionGuard_;
    id <JBTSettingsClient> settingsClient_;
}

- (void)dealloc;
- (id)refresh;
- (void)stop;
- (id)submitAddOnActionWithComGoogleAppsBigtopDataItemsItemsProto_SubmitAddOnActionRequest:(id)arg1;
- (id)start;

@end

