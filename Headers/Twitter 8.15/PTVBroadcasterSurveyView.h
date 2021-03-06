//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PeriscopeSDK/PTVStarSelectionViewDelegate-Protocol.h>
#import <PeriscopeSDK/UIGestureRecognizerDelegate-Protocol.h>
#import <PeriscopeSDK/UITextViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PTVBroadcasterSurvey, PTVRoundedButton, PTVScrollingStackView, PTVStarSelectionView, PTVSurveyPillCollectionView, PTVTextView, UIImageView, UILabel, UITapGestureRecognizer, UITextView;
@protocol PTVBroadcasterSurveyViewDelegate;

@interface PTVBroadcasterSurveyView : UIView <PTVStarSelectionViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_starScreen;
    UIView *_followupScreen;
    UIView *_thanksScreen;
    UILabel *_starLabel;
    UIView *_starView;
    PTVRoundedButton *_skipButton;
    UITextView *_helpTextView;
    PTVStarSelectionView *_starSelector;
    PTVScrollingStackView *_stackScrollView;
    UILabel *_smallStarLabel;
    PTVStarSelectionView *_smallStarSelector;
    UILabel *_pleaseExplainLabel;
    UILabel *_pleaseExplainOptionalLabel;
    PTVSurveyPillCollectionView *_reasonCollectionView;
    PTVTextView *_pleaseExplainTextView;
    UILabel *_pleaseExplainCharacterCountLabel;
    PTVRoundedButton *_submitButton;
    UIImageView *_checkmarkImageView;
    UILabel *_thanksLabel;
    unsigned long long _activeScreen;
    UIView *_activeScreenView;
    UITapGestureRecognizer *_tapToDismissKeyboardRecognizer;
    UITapGestureRecognizer *_tapHelpTextRecognizer;
    NSLayoutConstraint *_submitKeyboardConstraint;
    NSLayoutConstraint *_submitBottomConstraint;
    NSLayoutConstraint *_followupScreenKeyboardFillerConstraint;
    id <PTVBroadcasterSurveyViewDelegate> _delegate;
    PTVBroadcasterSurvey *_survey;
}

+ (id)AttributedHelpTextFromDelimitedString:(id)arg1;
+ (id)TextLinkAttributes;
+ (id)TextAttributes;
@property(readonly, nonatomic) PTVBroadcasterSurvey *survey; // @synthesize survey=_survey;
@property(nonatomic) __weak id <PTVBroadcasterSurveyViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PTVRoundedButton *submitButton; // @synthesize submitButton=_submitButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateConstraintsForKeyboardWillHide;
- (void)keyboardWillHide:(id)arg1;
- (void)updateConstraintsAndLayoutForKeyboardWillShowWithSize:(struct CGSize)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)starSelectionDidChange:(id)arg1;
- (void)_initThanksScreen;
- (void)_initFollowupScreen;
- (void)_initStarScreen;
- (void)_addScreenToHierarchy:(id)arg1;
- (void)_crossfade:(id)arg1 to:(id)arg2;
- (void)_crossfade:(id)arg1 to:(id)arg2 animated:(_Bool)arg3;
- (void)_transitionToFollowupScreenIfNeededAnimated:(_Bool)arg1;
- (void)_tappedHelpText:(id)arg1;
- (void)_tappedBackground:(id)arg1;
- (void)_submitPressed:(id)arg1;
- (void)_starScreenSkipPressed:(id)arg1;
- (id)explanation;
- (unsigned long long)starRating;
- (void)setStarRating:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithSurvey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

