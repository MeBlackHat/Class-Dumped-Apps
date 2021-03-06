//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, NSString;
@protocol JBTClassicGmailInboxSection, JBTClusterConfig, JBTItemList, JBTSearchParameters, JBTSearchParameters_Builder, JBTSearchV2SearchItemList, JBTStructuredQuery_Builder, JBTStructuredQuery_DateWithin_Builder, JBTStructuredQuery_DateWithin_DateComponents_Builder, JBTStructuredQuery_SearchSubset_Builder, JBTStructuredQuery_SizeComparison_Builder;

@protocol JBTItemLists <JavaObject>
- (id <JBTStructuredQuery_DateWithin_DateComponents_Builder>)newDateComponentsBuilder;
- (id <JBTStructuredQuery_DateWithin_Builder>)newDateWithinBuilder;
- (id <JBTStructuredQuery_SearchSubset_Builder>)newSearchSubsetBuilder;
- (id <JBTStructuredQuery_SizeComparison_Builder>)newSizeComparisonBuilder;
- (id <JBTStructuredQuery_Builder>)newStructuredQueryBuilder;
- (id <JBTSearchParameters_Builder>)newSearchParametersBuilder;
- (id <JBTSearchV2SearchItemList>)getSearchItemListFromServerPermIdWithNSString:(NSString *)arg1;
- (id <JBTSearchV2SearchItemList>)getSearchWithJBTSearchParameters:(id <JBTSearchParameters>)arg1;
- (id <JBTItemList>)getWorkflowAssistItemList;
- (id <JBTItemList>)getRankedInboxWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyPurchasesUnreadWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyTravelUnreadWithInt:(int)arg1;
- (id <JBTItemList>)getPagedPurchasesWithInt:(int)arg1 withInt:(int)arg2 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg3;
- (id <JBTItemList>)getPagedTravelWithClusterConfigWithInt:(int)arg1 withInt:(int)arg2 withComGoogleCommonBaseOptional:(ComGoogleCommonBaseOptional *)arg3;
- (id <JBTItemList>)getPagedTravelWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getTravelWithInt:(int)arg1;
- (id <JBTItemList>)getPagedClusterItemsWithJBTClusterConfig:(id <JBTClusterConfig>)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <JBTItemList>)getClusterItemsWithJBTClusterConfig:(id <JBTClusterConfig>)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getTemplateRepliesWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyUnreadUnclusteredInboxWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyUnreadItemsForCustomClusterWithJBTClusterConfig:(id <JBTClusterConfig>)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getLocalOnlyUnreadInboxForSectionWithJBTClassicGmailInboxSection:(id <JBTClassicGmailInboxSection>)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getSegmentedPriorityInboxSectionWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getPagedInboxForSectionWithJBTClassicGmailInboxSection:(id <JBTClassicGmailInboxSection>)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id <JBTItemList>)getLocalOnlyAllMailUnreadWithInt:(int)arg1;
- (id <JBTItemList>)getPagedAllMailWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getAllMailWithInt:(int)arg1;
- (id <JBTItemList>)getChatsWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getPagedStarredWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getLocalOnlyStarredUnreadWithInt:(int)arg1;
- (id <JBTItemList>)getStarredWithInt:(int)arg1;
- (id <JBTItemList>)getPagedImportantWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getLocalOnlyImportantUnreadWithInt:(int)arg1;
- (id <JBTItemList>)getImportantWithInt:(int)arg1;
- (id <JBTItemList>)getPagedTrashWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getTrashWithInt:(int)arg1;
- (id <JBTItemList>)getPagedSpamWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getSpamWithInt:(int)arg1;
- (id <JBTItemList>)getSendingNotSyncedWithInt:(int)arg1;
- (id <JBTItemList>)getPagedScheduledWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getPagedSentWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getSentWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyOutboxWithInt:(int)arg1;
- (id <JBTItemList>)getPagedDraftsWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getDraftsWithInt:(int)arg1;
- (id <JBTItemList>)getPagedDoneWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getUpcomingNotificationsWithInt:(int)arg1;
- (id <JBTItemList>)getPagedUpcomingWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getUpcomingWithInt:(int)arg1;
- (id <JBTItemList>)getPagedMutedWithInt:(int)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getUnreadForExchangeWithInt:(int)arg1;
- (id <JBTItemList>)getUnreadForImapWithInt:(int)arg1;
- (id <JBTItemList>)getInboxForImapWithInt:(int)arg1;
- (id <JBTItemList>)getInboxForTestWithInt:(int)arg1;
@end

