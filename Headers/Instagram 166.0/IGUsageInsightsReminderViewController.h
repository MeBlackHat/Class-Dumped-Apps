//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGUsageInsightsDeleteReminderViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUsageInsightsSetReminderViewDelegate-Protocol.h>

@class IGUsageInsightsLogger, IGUserSession, NSString, UIImpactFeedbackGenerator, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGUsageInsightsReminderViewController : IGViewController <IGUsageInsightsSetReminderViewDelegate, IGUsageInsightsDeleteReminderViewDelegate>
{
    IGUserSession *_userSession;
    IGUsageInsightsLogger *_logger;
    UIView *_visibleReminderView;
    UIView *_backgroundView;
    _Bool _appearingTransitionCompleted;
    UITapGestureRecognizer *_tapToDismissGesture;
    UISwipeGestureRecognizer *_swipeToDismissGesture;
    UIImpactFeedbackGenerator *_impactGenerator;
}

- (void).cxx_destruct;
- (void)_dismissSelf;
- (void)_backgroundDismissAction:(id)arg1;
- (void)reminderViewDidEdit:(id)arg1;
- (void)reminderViewDidCancel:(id)arg1;
- (void)reminderView:(id)arg1 didSubmitWithNumHours:(unsigned long long)arg2 numMinutes:(unsigned long long)arg3;
- (long long)preferredTabBarBehavior;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

