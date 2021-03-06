//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController, ComGoogleAppsXplatStorageDbTransactionPromiseFactory;
@protocol ComGoogleAppsBigtopDataStorageSchemaFilterDao;

@interface ComGoogleAppsBigtopDataItemsStorageControllersFiltersTableController : NSObject
{
    id <ComGoogleAppsBigtopDataStorageSchemaFilterDao> dao_;
    ComGoogleAppsBigtopDataItemsStorageControllersClustersTableController *clustersTableController_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

- (void)dealloc;
- (id)deleteByServerPermIdsWithJavaUtilList:(id)arg1;
- (id)deleteByServerPermIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)updateExistingFilterWithComGoogleAppsBigtopDataStorageSchemaFilterEntry:(id)arg1;
- (id)insertOrUpdateFilterWithComGoogleAppsBigtopDataStorageSchemaFilterEntry:(id)arg1;
- (id)insertOrUpdateFilterWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataStorageSchemaFilterEntry:(id)arg2;
- (id)insertNewFiltersWithJavaUtilList:(id)arg1;
- (id)insertNewFiltersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)getFiltersForClusterWithNSString:(id)arg1;
- (id)getFiltersByIdsWithJavaUtilCollection:(id)arg1;
- (id)getFiltersByIdsWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)getFilterByIdWithNSString:(id)arg1;
- (id)getFilterByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withNSString:(id)arg2;
- (id)getFilters;

@end

