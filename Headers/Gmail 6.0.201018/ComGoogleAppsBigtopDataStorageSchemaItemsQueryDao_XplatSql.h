//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataStorageSchemaItemsQueryDao-Protocol.h"

@class ComGoogleAppsXplatStorageDbAbstractDatabase, NSString;

@interface ComGoogleAppsBigtopDataStorageSchemaItemsQueryDao_XplatSql : NSObject <ComGoogleAppsBigtopDataStorageSchemaItemsQueryDao>
{
    ComGoogleAppsXplatStorageDbAbstractDatabase *database_;
}

+ (void)initialize;
- (void)dealloc;
- (id)selectPagedClusterExpansionItemsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withLong:(long long)arg2 withNSString:(id)arg3 withInt:(int)arg4;
- (id)selectOrphanItemsRankBoundedWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)selectOrphanItemsExcludingRankWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (id)selectGenericOrphanItemsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withInt:(int)arg2;
- (id)selectClusterVisibilityEntriesWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withNSString:(id)arg2;
- (id)selectClusterRowIdByServerPermIdWithNSString:(id)arg1;
- (id)selectClusterExpansionItemsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (id)countNonClusterBackfillItemSyncReasonsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withJBTSSyncReasonType:(id)arg2;
- (id)countClusterBackfillItemSyncReasonsWithComGoogleAppsBigtopDataItemsItemsProto_ViewType:(id)arg1 withNSString:(id)arg2 withJBTSSyncReasonType:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

