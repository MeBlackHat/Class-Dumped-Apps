//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleCommonBaseFunction-Protocol.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewType, ComGoogleAppsBigtopDataItemsItemsSlicesProtos_ItemSummary, ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData, ComGoogleAppsBigtopSyncClientImplItemlistsItemListElementProducer, ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableSet, NSString;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplItemlistsItemListElementProducer_$Lambda$24 : NSObject <ComGoogleCommonBaseFunction>
{
    ComGoogleAppsBigtopSyncClientImplItemlistsItemListElementProducer *this$0_;
    id <JBTId> val$itemId_;
    ComGoogleAppsBigtopServicesGmailCommonComponentSummaryItemData *val$summaryItemData_;
    ComGoogleCommonCollectImmutableSet *val$messageServerPermIdsToExpand_;
    ComGoogleAppsBigtopDataItemsItemsProto_ViewType *val$viewType_;
    ComGoogleCommonBaseOptional *val$customSnippet_;
    ComGoogleAppsBigtopDataItemsItemsSlicesProtos_ItemSummary *val$itemSummary_;
}

- (void)dealloc;
- (id)andThenWithJavaUtilFunctionFunction:(id)arg1;
- (id)composeWithJavaUtilFunctionFunction:(id)arg1;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

