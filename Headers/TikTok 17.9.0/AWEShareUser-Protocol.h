//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEUserModel, UIView, UIViewController;
@protocol AWEShareInviteFriendsExtension, AWESharePanel, AWEShareTask;

@protocol AWEShareUser <NSObject>
- (void)showPanelWithUser:(AWEUserModel *)arg1 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg2 onViewController:(UIViewController *)arg3;

@optional
- (id <AWEShareInviteFriendsExtension>)shareInviteFriendsExtensionUsingContext:(void (^)(AWEShareContext *))arg1 withConfigurationHandler:(void (^)(id <AWEShareConfiguration>))arg2;
- (id <AWEShareTask>)inviteFriendsBySharingToPlatform:(long long)arg1 usingContext:(void (^)(AWEShareContext *))arg2;
- (UIViewController<AWESharePanel> *)showPanelWithUser:(AWEUserModel *)arg1 avatarHeaderView:(UIView *)arg2 configurationHandler:(void (^)(id <AWEShareConfiguration>))arg3 onViewController:(UIViewController *)arg4;
@end

