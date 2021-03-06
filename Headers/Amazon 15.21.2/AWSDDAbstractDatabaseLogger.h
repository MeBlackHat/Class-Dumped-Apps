//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSDDAbstractLogger.h"

@class NSObject;
@protocol OS_dispatch_source;

@interface AWSDDAbstractDatabaseLogger : AWSDDAbstractLogger
{
    unsigned long long _saveThreshold;
    double _saveInterval;
    double _maxAge;
    double _deleteInterval;
    _Bool _deleteOnEverySave;
    _Bool _saveTimerSuspended;
    unsigned long long _unsavedCount;
    unsigned long long _unsavedTime;
    NSObject<OS_dispatch_source> *_saveTimer;
    unsigned long long _lastDeleteTime;
    NSObject<OS_dispatch_source> *_deleteTimer;
}

- (void).cxx_destruct;
- (void)flush;
- (void)logMessage:(id)arg1;
- (void)willRemoveLogger;
- (void)didAddLogger;
- (void)deleteOldLogEntries;
- (void)savePendingLogEntries;
@property _Bool deleteOnEverySave;
@property double deleteInterval;
@property double maxAge;
@property double saveInterval;
@property unsigned long long saveThreshold;
- (void)createAndStartDeleteTimer;
- (void)updateDeleteTimer;
- (void)destroyDeleteTimer;
- (void)createSuspendedSaveTimer;
- (void)updateAndResumeSaveTimer;
- (void)destroySaveTimer;
- (void)performDelete;
- (void)performSaveAndSuspendSaveTimer;
- (void)db_saveAndDelete;
- (void)db_delete;
- (void)db_save;
- (_Bool)db_log:(id)arg1;
- (void)dealloc;
- (id)init;

@end

