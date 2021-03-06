//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDLTasksDatabase.h"

@class ComGoogleAppsXplatSqlSqlDatabase, TDLGlobalMetadataDao;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, TDLOperationsDao, TDLRoomDao, TDLTaskDao, TDLTaskListDao, TDLTaskRecurrenceDao, TDLTestingDao, TDLUserActionsDao, TDLUserDao;

@interface TDLTasksDatabase_XplatSql : TDLTasksDatabase
{
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> setupFuture_;
    int version__;
    id <TDLOperationsDao> operationsDao_;
    TDLGlobalMetadataDao *globalMetadataDao_;
    id <TDLRoomDao> roomDao_;
    id <TDLTaskDao> taskDao_;
    id <TDLTaskRecurrenceDao> taskRecurrenceDao_;
    id <TDLTaskListDao> taskListDao_;
    id <TDLUserDao> userDao_;
    id <TDLUserActionsDao> userActionsDao_;
    id <TDLTestingDao> testingDao_;
}

- (void)dealloc;
- (id)testingDao;
- (id)userActionsDao;
- (id)userDao;
- (id)taskListDao;
- (id)taskRecurrenceDao;
- (id)taskDao;
- (id)roomDao;
- (id)globalMetadataDao;
- (id)operationsDao;
- (id)getDataMigrationForTestWithInt:(int)arg1;
- (id)getTransactionUserDataWithComGoogleAppsXplatStorageDbTransactionScope:(id)arg1 withId:(id)arg2 withComGoogleCommonBaseSupplier:(id)arg3;
- (id)close;
- (id)hibernate;
- (long long)getTransactionStartTimeMillisWithId:(id)arg1;
- (id)abortTransactionImplWithId:(id)arg1;
- (id)commitTransactionImplWithId:(id)arg1;
- (id)createTransactionImplWithComGoogleAppsXplatStorageDbTransactionScope:(id)arg1 withNSString:(id)arg2;
- (int)getVersion;

@end

