//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class DYNProtoListFilesResponse, DYNSCommonGroupId, DYNSStorageApiFileMetadata, JavaUtilOptional;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@protocol DYNSStorageApiFileMetadataStorageController <JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateFileMetadataWithDYNSStorageApiFileMetadata:(DYNSStorageApiFileMetadata *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateLatestSystemElapsedRealTimeMillisWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withJavaUtilOptional:(JavaUtilOptional *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateListFilesResponseAndClearSyncTriggerIfUnchangedWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1 withDYNProtoListFilesResponse:(DYNProtoListFilesResponse *)arg2 withLong:(long long)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getFileMetadataWithDYNSCommonGroupId:(DYNSCommonGroupId *)arg1;
@end

