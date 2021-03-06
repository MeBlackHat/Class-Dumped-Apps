//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGKeyboardObserverShowDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITextViewDelegate-Protocol.h>

@class IGAppealViewControllerConfiguration, IGGroupedTableViewHeaderView, IGKeyboardObserver, NSString, UITextView;
@protocol IGAppealManager, IGAppealViewControllerDelegate;

@interface IGAppealViewController : IGViewController <IGKeyboardObserverShowDelegate, UITextViewDelegate>
{
    IGAppealViewControllerConfiguration *_configuration;
    IGGroupedTableViewHeaderView *_headerView;
    UITextView *_textView;
    IGKeyboardObserver *_keyboardObserver;
    id <IGAppealManager> _appealManager;
    id <IGAppealViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)keyboardObserverKeyboardDidShow:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)_appealFailureHandlerWithError:(id)arg1;
- (void)_appealSuccessHandler;
- (void)viewDidLayoutSubviews;
- (void)_sendAppeal;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithConfiguration:(id)arg1 analyticsModule:(id)arg2 appealManager:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

