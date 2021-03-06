//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1OnboardingSubtaskController.h>

#import <T1Twitter/T1OnboardingChoiceSelectionViewControllerDelegate-Protocol.h>

@class NSString, TFSTwitterOnboardingChoiceSelectionSubtask, TFSTwitterOnboardingChoiceSelectionSubtaskState;
@protocol T1OnboardingSubtaskControllerDelegate;

@interface T1OnboardingChoiceSelectionSubtaskController : T1OnboardingSubtaskController <T1OnboardingChoiceSelectionViewControllerDelegate>
{
    TFSTwitterOnboardingChoiceSelectionSubtask *_subtask;
    id <T1OnboardingSubtaskControllerDelegate> _delegate;
    TFSTwitterOnboardingChoiceSelectionSubtaskState *_state;
}

+ (id)supportedSubtaskClasses;
- (void).cxx_destruct;
- (void)choiceSelectionViewController:(id)arg1 didTapActiveTextRange:(id)arg2 inRect:(struct CGRect)arg3;
- (id)choiceSelectionViewController:(id)arg1 expandedRichText:(id)arg2;
- (_Bool)choiceSelectionViewController:(id)arg1 shouldEnableNextButtonForSelectedChoices:(id)arg2;
- (id)choiceSelectionViewController:(id)arg1 nextLabelForSelectedChoices:(id)arg2;
- (void)choiceSelectionViewControllerDidTapSkip:(id)arg1;
- (void)choiceSelectionViewController:(id)arg1 didTapNextWithChoices:(id)arg2;
- (void)startWithNavigationContext:(id)arg1 navigationLink:(id)arg2;
- (id)initWithSubtask:(id)arg1 flowToken:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

