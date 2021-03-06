//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchKit/NSObject-Protocol.h>

@class NSArray, NSNumber, TKSocialPresenceSettings, TWTwitchSocialAdapter, _TtC9TwitchKit15TKFriendRequest;

@protocol TWTwitchSocialAdapterDelegate <NSObject>
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToSetBlockStatus:(_Bool)arg2 ofUser:(NSNumber *)arg3 forUser:(NSNumber *)arg4 error:(long long)arg5;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 setBlockStatus:(_Bool)arg2 ofUser:(NSNumber *)arg3 forUser:(NSNumber *)arg4;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToMarkAllFriendRequestsAsReadForUser:(NSNumber *)arg2 error:(long long)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 markedAllFriendRequestsAsReadForUser:(NSNumber *)arg2;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 unreadFriendRequestCountChanged:(unsigned long long)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToRetrieveUnreadFriendRequestCountForUser:(NSNumber *)arg2 error:(long long)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 retrievedUnreadFriendRequestCount:(unsigned long long)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 retrievedFriendRequests:(NSArray *)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 receivedRealtimeFriendRequest:(_TtC9TwitchKit15TKFriendRequest *)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToSetPresenceSharingSettings:(TKSocialPresenceSettings *)arg2 forUser:(NSNumber *)arg3 error:(long long)arg4;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 finishedSettingPresenceSharingSettings:(TKSocialPresenceSettings *)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToRetrievePresenceSharingSettingsForUser:(NSNumber *)arg2 error:(long long)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 updatedPresenceSharingSettings:(TKSocialPresenceSettings *)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 retrievedPresenceSharingSettings:(TKSocialPresenceSettings *)arg2 forUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 friendRequestRemovedForUser:(NSNumber *)arg2 otherUser:(NSNumber *)arg3 reason:(unsigned long long)arg4;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToRetrieveFriendshipOfFriend:(NSNumber *)arg2 status:(unsigned long long)arg3 forUser:(NSNumber *)arg4 error:(long long)arg5;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 retrievedFriendshipOfFriend:(NSNumber *)arg2 status:(unsigned long long)arg3 forUser:(NSNumber *)arg4;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToUpdateFriendshipOfFriend:(NSNumber *)arg2 action:(unsigned long long)arg3 result:(unsigned long long)arg4 forUser:(NSNumber *)arg5 error:(long long)arg6;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 updatedFriendshipOfFriend:(NSNumber *)arg2 action:(unsigned long long)arg3 result:(unsigned long long)arg4 forUser:(NSNumber *)arg5;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 addedFriends:(NSArray *)arg2 removedFriends:(NSArray *)arg3 fromFriendsListforUser:(NSNumber *)arg4;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 updatedInfoForFriends:(NSArray *)arg2 ofUser:(NSNumber *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 failedToRetrieveFriendsListForUser:(NSNumber *)arg2 error:(long long)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 retrievedFriendsListForUser:(NSNumber *)arg2 friends:(NSArray *)arg3;
- (void)socialAdapter:(TWTwitchSocialAdapter *)arg1 statusDidChange:(unsigned long long)arg2;
@end

