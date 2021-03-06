//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGCodeConfirmationViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCoreTextLinkHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGTextFieldDelegate-Protocol.h>

@class IGCodeConfirmationView, IGCodeConfirmationViewModel, IGNUXLayoutSpec, IGUserSession, NSString;
@protocol IGChangeEmailCodeConfirmationViewControllerDelegate;

@interface IGChangeEmailCodeConfirmationViewController : IGViewController <IGCoreTextLinkHandler, IGCodeConfirmationViewDelegate, IGTextFieldDelegate>
{
    IGNUXLayoutSpec *_layoutSpec;
    IGCodeConfirmationView *_codeConfirmationView;
    IGCodeConfirmationViewModel *_codeConfirmationViewModel;
    NSString *_email;
    IGUserSession *_userSession;
    long long _source;
    id <IGChangeEmailCodeConfirmationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGChangeEmailCodeConfirmationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setIsLoading:(_Bool)arg1;
- (void)_showResentAlert;
- (void)_resendCode;
- (void)_configureWithViewModel:(id)arg1;
- (id)_subTitleStyledText;
- (id)_layoutSpec;
- (void)textFieldDidChange:(id)arg1;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)codeConfirmationViewDidTapNextButtonWithCode:(id)arg1 shouldConvert:(_Bool)arg2;
- (void)codeConfirmationViewDidTapBackButton;
- (_Bool)prefersNavigationBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEmail:(id)arg1 userSession:(id)arg2 fromSource:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

