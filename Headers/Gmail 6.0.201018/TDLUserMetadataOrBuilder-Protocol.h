//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleProtobufTimestamp, NSString, TDLUserMetadata_OngoingRemindersImportState, TDLUserMetadata_RemindersImportState, TDLVersionInfo;

@protocol TDLUserMetadataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getTimePromoBannerDismissed;
- (_Bool)hasTimePromoBannerDismissed;
- (TDLUserMetadata_OngoingRemindersImportState *)getOngoingRemindersImportState;
- (_Bool)hasOngoingRemindersImportState;
- (TDLUserMetadata_RemindersImportState *)getRemindersImportState;
- (_Bool)hasRemindersImportState;
- (int)getUnusedInt32Field;
- (_Bool)hasUnusedInt32Field;
- (ComGoogleProtobufTimestamp *)getLastUsedTimestampWeb;
- (_Bool)hasLastUsedTimestampWeb;
- (ComGoogleProtobufTimestamp *)getLastUsedTimestampIos;
- (_Bool)hasLastUsedTimestampIos;
- (ComGoogleProtobufTimestamp *)getLastUsedTimestampAndroid;
- (_Bool)hasLastUsedTimestampAndroid;
- (_Bool)getCompanionWelcomeDismissed;
- (_Bool)hasCompanionWelcomeDismissed;
- (_Bool)getInitialSetupCompleted;
- (_Bool)hasInitialSetupCompleted;
- (_Bool)getMobilePromoBannerDismissed;
- (_Bool)hasMobilePromoBannerDismissed;
- (NSString *)getTaskListOrdering;
- (_Bool)hasTaskListOrdering;
- (NSString *)getLastUsedSortOrder;
- (_Bool)hasLastUsedSortOrder;
- (NSString *)getLastUsedTaskListId;
- (_Bool)hasLastUsedTaskListId;
- (TDLVersionInfo *)getVersionInfo;
- (_Bool)hasVersionInfo;
@end

