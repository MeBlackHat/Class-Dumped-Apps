//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsSyncControlItemsSyncControlServiceComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsSyncControlDaggerItemsSyncControlServiceComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsSyncControlItemsSyncControlServiceComponentImpl>
{
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> enableUploadOnlySyncProvider_;
    id <JavaxInjectProvider> getItemsSyncerProvider_;
    id <JavaxInjectProvider> getSystemPropertiesClientProvider_;
    id <JavaxInjectProvider> enableDaysToSyncProvider_;
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> provideDefaultDaysToSyncSettingProvider_;
    id <JavaxInjectProvider> maxItemsToSyncProvider_;
    id <JavaxInjectProvider> targetDaysToSyncValueOverrideProvider_;
    id <JavaxInjectProvider> maxItemsToSyncWithTargetDaysProvider_;
    id <JavaxInjectProvider> targetItemsToSyncProvider_;
    id <JavaxInjectProvider> provideTargetItemsToSyncProvider_;
    id <JavaxInjectProvider> provideUserConfiguredPerLabelItemsSyncSettingsProvider_;
    id <JavaxInjectProvider> getItemsSyncStatusManagerProvider_;
    id <JavaxInjectProvider> itemsSyncControlServiceServerProvider_;
}

- (void)dealloc;
- (id)getItemsSyncControlService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

