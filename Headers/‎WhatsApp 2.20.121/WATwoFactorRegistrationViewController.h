//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WATwoFactorCodeBaseViewController.h"

#import "WARegistrationViewController-Protocol.h"

@class NSString, UIImageView, UILabel, UIProgressView, UIView, WARegistrationSession, WATwoFactorWipeToken, WAWeakTimer;
@protocol WATwoFactorRegistrationViewControllerDelegate;

@interface WATwoFactorRegistrationViewController : WATwoFactorCodeBaseViewController <WARegistrationViewController>
{
    WARegistrationSession *_session;
    WATwoFactorWipeToken *_wipeToken;
    int _codeInputBlockState;
    WAWeakTimer *_codeInputBlockProgressUpdateTimer;
    WAWeakTimer *_emailCodeExistCheckTimer;
    double _emailCodeExistCheckMinPoll;
    NSString *_smsVerificationCodeUsed;
    id <WATwoFactorRegistrationViewControllerDelegate> _delegate;
    UIView *_viewUIBlocked;
    UILabel *_labelUIBlocked;
    UIProgressView *_progressViewBlock;
    UIImageView *_lockIcon;
}

+ (id)localizedRoughTimeStringForInterval:(double)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *lockIcon; // @synthesize lockIcon=_lockIcon;
@property(retain, nonatomic) UIProgressView *progressViewBlock; // @synthesize progressViewBlock=_progressViewBlock;
@property(retain, nonatomic) UILabel *labelUIBlocked; // @synthesize labelUIBlocked=_labelUIBlocked;
@property(retain, nonatomic) UIView *viewUIBlocked; // @synthesize viewUIBlocked=_viewUIBlocked;
@property(nonatomic) __weak id <WATwoFactorRegistrationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *smsVerificationCodeUsed; // @synthesize smsVerificationCodeUsed=_smsVerificationCodeUsed;
- (void)disableRegistrationDelegate;
- (void)createAndStartEmailExistCheckPollTimer;
- (void)sameDeviceCompletionForSession:(id)arg1 withRespionse:(id)arg2 loginJID:(id)arg3 error:(id)arg4;
- (void)pollForEmailResetIfNecessary;
- (void)handleLeftNavigationButtonTapped;
- (void)handleCodeEntered:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (void)presentForgotPasscodeActionSheet;
- (void)confirmRestAccount;
- (void)presentSupportEmailComposerWithReason:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactSupportAlertWithTitle:(id)arg1 message:(id)arg2 reason:(id)arg3 session:(id)arg4;
- (void)presentGenericAlertWithTitle:(id)arg1 message:(id)arg2 recoverable:(_Bool)arg3;
- (void)handleStandardRegistrationResponses:(id)arg1 session:(id)arg2 loginJID:(id)arg3;
- (void)handleWipeRequest;
- (void)handleWipeResponse:(id)arg1 loginJID:(id)arg2 error:(id)arg3;
- (void)handleRecoveryEmailRequest;
- (void)handleRecoveryEmailResponse:(id)arg1 loginJID:(id)arg2 error:(id)arg3;
- (void)handleCodeCheckRequest:(id)arg1;
- (void)handleCodeCheckResponseForCode:(id)arg1 withResponse:(id)arg2 loginJID:(id)arg3 error:(id)arg4;
- (void)updateCodeInputBlockProgress;
- (void)startCodeInputBlockProgressUpdateTimer;
- (void)setCodeInputBlockState:(int)arg1;
- (void)validateCodeInputBlockState;
- (void)wa_fontSizeDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initSession:(id)arg1 wipeToken:(id)arg2 changeNumberMode:(_Bool)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

