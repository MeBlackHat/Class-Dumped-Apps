//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCommonLoggingEasOperationDataProto_EasOperationData_ItemDownSyncPerformanceData, ComGoogleCommonLoggingEasOperationDataProto_EasOperationData_ItemStatusCount, ComGoogleCommonLoggingGmailEnums_EasOperationConclusion, ComGoogleCommonLoggingGmailEnums_EasOperationResult, ComGoogleCommonLoggingGmailEnums_EasOperationType, ComGoogleCommonLoggingGmailEnums_EasVersion;
@protocol JavaUtilList;

@protocol ComGoogleCommonLoggingEasOperationDataProto_EasOperationDataOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getIsUsingOauth;
- (_Bool)hasIsUsingOauth;
- (ComGoogleCommonLoggingEasOperationDataProto_EasOperationData_ItemDownSyncPerformanceData *)getItemDownSyncPerformanceData;
- (_Bool)hasItemDownSyncPerformanceData;
- (int)getInverseSamplingProbability;
- (_Bool)hasInverseSamplingProbability;
- (ComGoogleCommonLoggingEasOperationDataProto_EasOperationData_ItemStatusCount *)getItemStatusCountWithInt:(int)arg1;
- (id <JavaUtilList>)getItemStatusCountList;
- (int)getItemStatusCountCount;
- (int)getGlobalStatus;
- (_Bool)hasGlobalStatus;
- (int)getHttpStatus;
- (_Bool)hasHttpStatus;
- (ComGoogleCommonLoggingGmailEnums_EasVersion *)getEasVersion;
- (_Bool)hasEasVersion;
- (ComGoogleCommonLoggingGmailEnums_EasOperationResult *)getOperationResult;
- (_Bool)hasOperationResult;
- (ComGoogleCommonLoggingGmailEnums_EasOperationConclusion *)getConclusion;
- (_Bool)hasConclusion;
- (ComGoogleCommonLoggingGmailEnums_EasOperationType *)getType;
- (_Bool)hasType;
@end

