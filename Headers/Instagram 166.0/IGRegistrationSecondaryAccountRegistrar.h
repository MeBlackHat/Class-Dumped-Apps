//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGAuthHeaderStore, IGAuthenticator, IGRegistrationAccountLinkingSignUpContext, IGRegistrationIntentCollectionContext, IGRegistrationLogger, IGUser, NSString;
@protocol IGAPIClient, IGRegistrationCoordinatorProtocol;

@interface IGRegistrationSecondaryAccountRegistrar : NSObject
{
    IGUser *_actorAccount;
    IGAuthHeaderStore *_authHeaderStore;
    IGAuthenticator *_authenticator;
    id <IGAPIClient> _networker;
    NSString *_tosVersion;
    NSString *_newAccountUsername;
    IGRegistrationIntentCollectionContext *_intentCollectionContext;
    IGRegistrationAccountLinkingSignUpContext *_signUpContext;
    NSString *_stepName;
    IGRegistrationLogger *_logger;
    id <IGRegistrationCoordinatorProtocol> _coordinator;
}

+ (id)signUpContextForContext:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGRegistrationCoordinatorProtocol> coordinator; // @synthesize coordinator=_coordinator;
- (id)_signUpFormForUnLinkedMainAccountWithPassword:(id)arg1;
- (id)_signUpFormForLinkedMainAccount;
- (id)_signUpFormForEmail:(id)arg1 password:(id)arg2 forceSignUpCode:(id)arg3;
- (id)_signUpFormForPhoneNumber:(id)arg1 smsVerificationCode:(id)arg2 isSMSConsent:(_Bool)arg3 password:(id)arg4;
- (void)_tryToRegisterAccountWithLoggedInSignUpForm:(id)arg1 accountPK:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showLoginErrorAlertDialogView;
- (void)_showLoginOrCreateDialogWithSignUpResult:(id)arg1 canLoginInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_loginWithUsername:(id)arg1 password:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showErrorDialogWithDescriptionText:(id)arg1 entryPoint:(id)arg2;
- (void)_handleError:(id)arg1 error:(id)arg2;
- (void)_retryToRegisterAccountWithLastSignUpResult:(id)arg1 username:(id)arg2 shouldForceCreate:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_loggingExtras;
- (void)_logRegistrationAttempt;
- (void)_logRegistrationSuccessWithSignupResult:(id)arg1;
- (void)_accountCreatedWithSignupResult:(id)arg1 isMultipleUsersOnDevice:(_Bool)arg2;
- (void)_handleSuccess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryToRegisterAccountWithEmail:(id)arg1 password:(id)arg2 forceSignUpCode:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)tryToRegisterAccountWithPhoneNumber:(id)arg1 smsVerificationCode:(id)arg2 isSMSConsent:(_Bool)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)tryToRegisterAccountWithPassword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)tryToRegisterAccountWithMainAccountPK:(id)arg1 regStep:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithActorAccount:(id)arg1 authHeaderStore:(id)arg2 authenticator:(id)arg3 networker:(id)arg4 tosVersion:(id)arg5 newAccountUsername:(id)arg6 intentCollectionContext:(id)arg7 signUpContext:(id)arg8 stepName:(id)arg9 logger:(id)arg10;
- (id)initWithContext:(id)arg1 stepName:(id)arg2;

@end

