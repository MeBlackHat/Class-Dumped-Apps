//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGURLRequest, NSArray, NSString;
@protocol IGFindFriendsHelperProtocol;

@protocol IGFindFriendsHelperDelegate <NSObject>
- (void)findFriendsHelper:(id <IGFindFriendsHelperProtocol>)arg1 didFailToAuthorizeWithMessage:(NSString *)arg2;
- (void)findFriendsHelper:(id <IGFindFriendsHelperProtocol>)arg1 didAuthorizeWithDataRequest:(IGURLRequest *)arg2;

@optional
- (void)findFriendsHelper:(id <IGFindFriendsHelperProtocol>)arg1 didAuthorizeWithContacts:(NSArray *)arg2;
@end

