//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsDynamiteV1SharedUtilRelationshipExternalUserDecider;

@interface DYNSDataModelsConvertersUserConverter : NSObject
{
    ComGoogleAppsDynamiteV1SharedUtilRelationshipExternalUserDecider *externalUserDecider_;
}

- (void)dealloc;
- (id)getUserIdsFromListBlockedUsersResponseWithDYNProtoListBlockedUsersResponse:(id)arg1;
- (id)getInvitedMemberIdsFromListMembersResponseWithDYNProtoListMembersResponse:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getMemberIdsFromListMembersResponseWithDYNProtoListMembersResponse:(id)arg1 withJavaUtilOptional:(id)arg2;
- (id)getUserIdsFromListMembersResponseWithDYNProtoListMembersResponse:(id)arg1;
- (id)getFilteredMembersFromListMembersResponseWithDYNProtoListMembersResponse:(id)arg1;
- (id)convertWithDYNProtoUser:(id)arg1 withJavaUtilOptional:(id)arg2 withLong:(long long)arg3;
- (id)convertWithDYNProtoUser:(id)arg1 withLong:(long long)arg2;

@end

