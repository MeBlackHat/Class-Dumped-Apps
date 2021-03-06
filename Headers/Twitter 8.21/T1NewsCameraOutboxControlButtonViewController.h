//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <T1Twitter/T1TweetOutboxCompositionItemsSourceDelegate-Protocol.h>
#import <T1Twitter/TFNCircularCountProgressDataSource-Protocol.h>

@class NSString, T1NewsCameraControlButton, T1TweetOutboxCompositionItemsSource, TFNCircularCountProgressView, TFNTwitterAccount;
@protocol T1NewsCameraOutboxControlButtonViewControllerDelegate;

@interface T1NewsCameraOutboxControlButtonViewController : UIViewController <T1TweetOutboxCompositionItemsSourceDelegate, TFNCircularCountProgressDataSource>
{
    id <T1NewsCameraOutboxControlButtonViewControllerDelegate> _delegate;
    TFNTwitterAccount *_account;
    unsigned long long _buttonState;
    T1TweetOutboxCompositionItemsSource *_itemsSource;
    T1NewsCameraControlButton *_button;
    TFNCircularCountProgressView *_progressView;
    double _progress;
}

- (void).cxx_destruct;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) TFNCircularCountProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) T1NewsCameraControlButton *button; // @synthesize button=_button;
@property(retain, nonatomic) T1TweetOutboxCompositionItemsSource *itemsSource; // @synthesize itemsSource=_itemsSource;
@property(nonatomic) unsigned long long buttonState; // @synthesize buttonState=_buttonState;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
@property(nonatomic) __weak id <T1NewsCameraOutboxControlButtonViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_t1_main_updateProgress;
- (void)tweetOutboxCompositionDataSource:(id)arg1 didChangeProgress:(double)arg2;
- (void)_t1_main_updateButtonState;
- (void)tweetOutboxCompositionDataSource:(id)arg1 didChangeState:(unsigned long long)arg2;
- (long long)remainingCountForWarningDisplayInProgressView:(id)arg1;
- (long long)remainingCountForProgressView:(id)arg1;
- (long long)currentCountForProgressView:(id)arg1;
- (void)_t1_action_buttonDidTouchUpInside:(id)arg1;
- (void)_t1_loadProgressViewWithConstraints:(id)arg1;
- (void)_t1_loadButtonWithConstraints:(id)arg1;
- (void)viewDidLoad;
- (void)_t1_main_updateForButtonState;
- (void)_t1_main_updateProgressView;
- (void)_t1_main_updateItemsSource;
- (void)endSession;
- (void)beginSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

