//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AccountViewController, LPAccount;

@protocol AccountViewControllerDelegate <NSObject>
- (void)accountViewController:(AccountViewController *)arg1 editAccount:(LPAccount *)arg2;
- (void)accountViewController:(AccountViewController *)arg1 launchAccount:(LPAccount *)arg2;

@optional
- (void)accountViewController:(AccountViewController *)arg1 copyPassword:(LPAccount *)arg2;
- (void)accountViewController:(AccountViewController *)arg1 copyUsername:(LPAccount *)arg2;
@end

