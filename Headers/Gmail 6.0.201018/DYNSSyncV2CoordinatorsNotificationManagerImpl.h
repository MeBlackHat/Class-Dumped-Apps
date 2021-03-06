//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncv2ApiNotificationManager-Protocol.h"

@class DYNSSyncApiRevisionedEventConverter, DYNSSyncV2CoordinatorsCatchUpManager, DYNSSyncV2EntitiesEntityManagerUtils, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, DYNSSyncV2GroupEventHandlerLauncher, NSString, XPTExecutionGuard;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSCommonAppFocusStateTracker, DYNSCommonDynamiteClock, DYNSStorageApiBackgroundSyncDataStorageController, DYNSSyncPrefetchApiPrefetchManager, DYNSSyncv2ApiBackfillManager, DYNSSyncv2ApiWorldSyncEngine, JavaUtilMap, JavaUtilSet, JavaxInjectProvider;

@interface DYNSSyncV2CoordinatorsNotificationManagerImpl : NSObject <DYNSSyncv2ApiNotificationManager>
{
    id <DYNSCommonAppFocusStateTracker> appFocusStateTracker_;
    id <DYNSStorageApiBackgroundSyncDataStorageController> backgroundSyncDataStorageController_;
    id <DYNSSyncv2ApiBackfillManager> backfillManager_;
    DYNSSyncV2CoordinatorsCatchUpManager *catchUpManager_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    DYNSSyncV2EntitiesEntityManagerUtils *entityManagerUtils_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    DYNSSyncV2GroupEventHandlerLauncher *groupEventHandlerLauncher_;
    long long worldSyncInBackgroundIntervalMicros_;
    id <DYNSSyncPrefetchApiPrefetchManager> prefetchManagerOnWorldUpdate_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncApiRevisionedEventConverter *revisionedEventConverter_;
    id <ComGoogleAppsXplatObserveSettable> userDataInvalidatedEventSettable_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    id <DYNSSyncv2ApiWorldSyncEngine> worldSyncEngine_;
    id lock_;
    id <JavaUtilSet> messageIdsWithoutPayloadBatch_;
    id <JavaUtilMap> notificationPayloadsBatch_;
    XPTExecutionGuard *processNotificationsGuard_;
}

+ (void)initialize;
- (void)dealloc;
- (int)getMaxGroupsToCatchUp;
- (id)filterAndGroupMessagesWithJavaUtilSet:(id)arg1 withJavaUtilMap:(id)arg2 withDYNSDataModelsBackgroundSyncData:(id)arg3;
- (id)processNotificationsWithJavaUtilList:(id)arg1 withJavaUtilMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

