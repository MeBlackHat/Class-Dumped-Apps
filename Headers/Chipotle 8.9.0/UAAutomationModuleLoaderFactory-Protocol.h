//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/NSObject-Protocol.h>

@class UAAnalytics, UAChannel, UAPreferenceDataStore, UARuntimeConfig;
@protocol UAModuleLoader, UARemoteDataProvider, UATagGroupsHistory;

@protocol UAAutomationModuleLoaderFactory <NSObject>
+ (id <UAModuleLoader>)inAppModuleLoaderWithDataStore:(UAPreferenceDataStore *)arg1 config:(UARuntimeConfig *)arg2 channel:(UAChannel *)arg3 analytics:(UAAnalytics *)arg4 remoteDataProvider:(id <UARemoteDataProvider>)arg5 tagGroupsHistory:(id <UATagGroupsHistory>)arg6;
@end

