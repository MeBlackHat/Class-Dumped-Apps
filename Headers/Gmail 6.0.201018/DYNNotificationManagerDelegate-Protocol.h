//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;
@protocol GIPGaiaAccountID;

@protocol DYNNotificationManagerDelegate
@property(readonly, nonatomic) id <GIPGaiaAccountID> foregroundAccountID;
- (_Bool)hasActiveAccounts;
- (void)runBlockAfterForegroundAccountChange:(void (^)(void))arg1 forAccountId:(NSString *)arg2;
- (void)runBlockAfterSignIn:(void (^)(void))arg1;
@end

