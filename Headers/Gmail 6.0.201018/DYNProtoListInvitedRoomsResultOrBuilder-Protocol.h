//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType, ComGoogleAppsDynamiteV1SharedGroupDetails, DYNProtoGroupGuestAccessSettings, DYNProtoGroupId, DYNProtoGroupSupportLevel, DYNProtoOrganizationInfo, NSString;

@protocol DYNProtoListInvitedRoomsResultOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsDynamiteV1SharedGroupDetails *)getGroupDetails;
- (_Bool)hasGroupDetails;
- (DYNProtoGroupSupportLevel *)getGroupSupportLevel;
- (_Bool)hasGroupSupportLevel;
- (ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType *)getAttributeCheckerGroupType;
- (_Bool)hasAttributeCheckerGroupType;
- (DYNProtoGroupGuestAccessSettings *)getGroupGuestAccessSettings;
- (_Bool)hasGroupGuestAccessSettings;
- (DYNProtoOrganizationInfo *)getOrganizationInfo;
- (_Bool)hasOrganizationInfo;
- (long long)getLastMessageTimestamp;
- (_Bool)hasLastMessageTimestamp;
- (long long)getInvitedTimestamp;
- (_Bool)hasInvitedTimestamp;
- (int)getNumJoinedMembers;
- (_Bool)hasNumJoinedMembers;
- (DYNProtoGroupId *)getGroupId;
- (_Bool)hasGroupId;
- (NSString *)getGroupName;
- (_Bool)hasGroupName;
@end

