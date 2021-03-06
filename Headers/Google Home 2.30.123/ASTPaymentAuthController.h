//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOTextFieldValidator-Protocol.h"

@class ASTPaymentAuthDialogContentView, ASTReauthService, NSString;
@protocol SSOIdentity;

@interface ASTPaymentAuthController : NSObject <GOOTextFieldValidator>
{
    id <SSOIdentity> _userIdentity;
    _Bool _invalidPassword;
    _Bool _fingerprintCheckboxHidden;
    ASTPaymentAuthDialogContentView *_dialogContentView;
    ASTReauthService *_reauthService;
}

+ (id)touchIDMessageWithTitle:(id)arg1 header:(id)arg2 subHeader:(id)arg3;
+ (id)attributedStringFromHTML:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ASTReauthService *reauthService; // @synthesize reauthService=_reauthService;
@property(retain, nonatomic) ASTPaymentAuthDialogContentView *dialogContentView; // @synthesize dialogContentView=_dialogContentView;
- (void)hideFingerprintCheckbox;
- (void)didTapFingerprintCheckbox;
- (void)didTapPasswordRecoveryButton;
- (void)showPasswordDialogWithTitle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)authenticateByFingerprintWithDescription:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)validateEventsForTextField:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (void)authorizePurchaseWithTitle:(id)arg1 header:(id)arg2 subHeader:(id)arg3 HTMLlegalText:(id)arg4 useTouchID:(_Bool)arg5 enableFingerprintCheckbox:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithUserIdentity:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

