//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _TtC13AirbnbLogging26BugsnagBouncer_Caterpillar : NSObject
{
    // Error parsing type: , name: storage
    // Error parsing type: , name: lock
    // Error parsing type: , name: bugsnagLogCache
    // Error parsing type: , name: synchronizationQueue
    // Error parsing type: , name: previousLogSnapshots
    // Error parsing type: , name: logsFromBeforeCrash
}

- (void).cxx_destruct;
- (void)objc_deleteMessages;
- (void)objc_attachMessage:(id)arg1 shouldSnapshot:(_Bool)arg2;
- (void)objc_retrieveLogsFromBeforeCrash;
- (id)objc_appLogsForNextUnhandledReport;
- (id)objc_appLogsForNextHandledReport;
- (void)objc_publishEnqueuedLogsAndStopEnqueuing;
- (void)objc_enqueueOrSendLogWithLogClosure:(CDUnknownBlockType)arg1;
- (id)objc_allTreatments;
- (id)objc_allExperiments;
- (void)objc_addExperimentIfCacheMiss:(id)arg1;
- (void)objc_clearBreadcrumbs;
- (_Bool)objc_addBreadcrumbIfCacheMiss:(id)arg1;
- (void)objc_setUpIfNecessaryWithSetUpClosure:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool objc_shouldEnqueueLogs;
@property(nonatomic, copy) NSString *objc_appMode;
@property(nonatomic, copy) NSString *objc_userEmail;
@property(nonatomic) _Bool obj_shouldUploadDeliveredExperimentsV2Metadata;
@property(nonatomic) _Bool objc_throttlingEnabled;
@property(nonatomic, readonly) _Bool objc_isSetUp;
- (id)init;

@end

