//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class DYNProtoSyncResponse_EntityUpdates, DYNProtoSyncResponse_MutationResult;
@protocol JavaUtilList;

@protocol DYNProtoSyncResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoSyncResponse_EntityUpdates *)getEntitiesUpdatesWithInt:(int)arg1;
- (id <JavaUtilList>)getEntitiesUpdatesList;
- (int)getEntitiesUpdatesCount;
- (DYNProtoSyncResponse_MutationResult *)getMutationResultsWithInt:(int)arg1;
- (id <JavaUtilList>)getMutationResultsList;
- (int)getMutationResultsCount;
@end

