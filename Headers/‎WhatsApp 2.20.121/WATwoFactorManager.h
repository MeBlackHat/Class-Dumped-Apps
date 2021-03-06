//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults, WAKeychainWrapper, WATwoFactorFileValues, XMPPConnectionMain;
@protocol WAAccountJIDProviding, WATwoFactorManagerDependencyProvider;

@interface WATwoFactorManager : NSObject
{
    id <WAAccountJIDProviding> _accountProvider;
    id <WATwoFactorManagerDependencyProvider> _dependencyProvider;
    WAKeychainWrapper *_keychain;
    NSUserDefaults *_userDefaults;
    XMPPConnectionMain *_xmppConnection;
    NSString *_code;
    WATwoFactorFileValues *_values;
}

+ (id)defaultDependencyProvider;
- (void).cxx_destruct;
- (void)xmppConnectionStateDidChange:(id)arg1;
- (void)cleanupOldKeychainCodesInBackground;
- (void)internalSyncTwoFactorSettingsToServer;
- (void)saveCurrentValuesShouldNotify:(_Bool)arg1 userJID:(id)arg2;
- (void)saveCurrentValuesShouldNotify:(_Bool)arg1;
- (void)migrateCodeFromPlistIfNecessary:(_Bool)arg1;
- (_Bool)updateFileAndKeychainValueForMigration;
- (void)clearCodeAndFileValues;
- (void)checkTwoFactorStatusWithServer;
- (void)clearTwoFactorForAccountReset:(id)arg1;
- (void)resetTwoFactorAuthentication;
- (_Bool)verifyTwoFactorAuthenticationCode:(id)arg1;
- (void)removeTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setOrUpdateTwoFactorAuthenticationCode:(id)arg1 email:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setRegistrationTwoFactorAuthenticationCode:(id)arg1 withLoginJID:(id)arg2;
@property(readonly, nonatomic) _Bool needsVerification;
@property(readonly, nonatomic) _Bool isRecoveryEmailSet;
@property(readonly, nonatomic) _Bool is2FAEnabled;
- (id)initWithAccountProvider:(id)arg1 dependencyProvider:(id)arg2 keychain:(id)arg3 userDefaults:(id)arg4 xmppConnection:(id)arg5;

@end

