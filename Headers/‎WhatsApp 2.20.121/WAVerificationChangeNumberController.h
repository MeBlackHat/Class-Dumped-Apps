//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAVerificationBaseController.h"

#import "WAChangeConfirmationControllerDelegate-Protocol.h"
#import "WAChangeNumberInputControllerDelegate-Protocol.h"
#import "WANetworkChangedControllerDelegate-Protocol.h"
#import "WAPassInputViewControllerDelegate-Protocol.h"
#import "WATwoFactorRegistrationViewControllerDelegate-Protocol.h"

@class NSString;

@interface WAVerificationChangeNumberController : WAVerificationBaseController <WAChangeConfirmationControllerDelegate, WANetworkChangedControllerDelegate, WAChangeNumberInputControllerDelegate, WATwoFactorRegistrationViewControllerDelegate, WAPassInputViewControllerDelegate>
{
    unsigned long long _mode;
}

@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)passInputViewController:(id)arg1 didFailTwoFacWithSession:(id)arg2 response:(id)arg3 acceptedVerificationCode:(id)arg4;
- (void)passInputViewControllerDidCancel:(id)arg1;
- (void)registrationViewControllerVerificationDidCancel:(id)arg1;
- (void)registrationViewControllerVerificationDidFail:(id)arg1;
- (void)changeNumberInputControllerDidCancel:(id)arg1;
- (void)changeNumberInputControllerDidEnterPhone:(id)arg1 session:(id)arg2;
- (void)changeNumberInputControllerDidFinish:(id)arg1 session:(id)arg2 userJID:(id)arg3 notificationContacts:(id)arg4;
- (void)registrationController:(id)arg1 didFailTwoFacWithSession:(id)arg2 response:(id)arg3;
- (void)registrationController:(id)arg1 didCompleteRegistrationWithJID:(id)arg2 session:(id)arg3;
- (void)networkChangedController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)changeConfirmationControllerDidCancel:(id)arg1;
- (void)changeConfirmationControllerDidFinish:(id)arg1;
- (void)finishVerificationWithSession:(id)arg1;
- (void)presentTwoFactorCodeViewControllerWithSession:(id)arg1 response:(id)arg2 smsVerificationCodeUsed:(id)arg3;
- (id)initWithMode:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

