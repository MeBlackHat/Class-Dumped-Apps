//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailContactsSummary, ComGoogleAppsBigtopServicesGmailInteractionMetadata, ComGoogleAppsBigtopServicesGmailSmartreplySuggestions, NSString;

@protocol ComGoogleAppsBigtopDataItemsItemsSlicesProtos_ThreadSummaryOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (int)getAttachmentsCount;
- (_Bool)hasAttachmentsCount;
- (NSString *)getLegacyThreadStorageIdHex;
- (_Bool)hasLegacyThreadStorageIdHex;
- (long long)getLegacyThreadStorageId;
- (_Bool)hasLegacyThreadStorageId;
- (_Bool)getWalletAttachmentAttached;
- (_Bool)hasWalletAttachmentAttached;
- (ComGoogleAppsBigtopServicesGmailContactsSummary *)getSendersSummaryForChatsView;
- (_Bool)hasSendersSummaryForChatsView;
- (ComGoogleAppsBigtopServicesGmailContactsSummary *)getSendersSummaryForSentView;
- (_Bool)hasSendersSummaryForSentView;
- (float)getHighlightsScore;
- (_Bool)hasHighlightsScore;
- (NSString *)getParentServerPermId;
- (_Bool)hasParentServerPermId;
- (ComGoogleAppsBigtopServicesGmailSmartreplySuggestions *)getThreadlistSmartreplySuggestions;
- (_Bool)hasThreadlistSmartreplySuggestions;
- (ComGoogleAppsBigtopServicesGmailInteractionMetadata *)getInteractionMetadata;
- (_Bool)hasInteractionMetadata;
- (long long)getTopicEndTimeMs;
- (_Bool)hasTopicEndTimeMs;
- (long long)getArchivedTimeMs;
- (_Bool)hasArchivedTimeMs;
- (long long)getReceivedTimeMs;
- (_Bool)hasReceivedTimeMs;
- (NSString *)getSnippet;
- (_Bool)hasSnippet;
- (NSString *)getSubject;
- (_Bool)hasSubject;
- (NSString *)getId;
- (_Bool)hasId;
@end

