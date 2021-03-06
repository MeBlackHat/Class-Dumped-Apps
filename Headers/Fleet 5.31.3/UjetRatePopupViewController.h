//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBaseTextInputPopupViewController.h>

#import <UJET/UITextViewDelegate-Protocol.h>
#import <UJET/UjetEDStarRatingProtocol-Protocol.h>

@class NSMutableDictionary, NSString, UILabel, UjetAgentImageView, UjetBasePopupContainerView, UjetCommunication, UjetEDStarRating;

@interface UjetRatePopupViewController : UjetBaseTextInputPopupViewController <UjetEDStarRatingProtocol, UITextViewDelegate>
{
    NSMutableDictionary *_initialConstraints;
    UjetCommunication *_communication;
    UjetEDStarRating *_defaultRateView;
    UILabel *_agentNameLabel;
    UjetBasePopupContainerView *_feedbackView;
    UjetAgentImageView *_feedbackAgentImageView;
    UILabel *_feedbackTitleLabel;
    UILabel *_feedbackScoreLabel;
    UjetEDStarRating *_feedbackRateView;
}

@property(nonatomic) __weak UjetEDStarRating *feedbackRateView; // @synthesize feedbackRateView=_feedbackRateView;
@property(nonatomic) __weak UILabel *feedbackScoreLabel; // @synthesize feedbackScoreLabel=_feedbackScoreLabel;
@property(nonatomic) __weak UILabel *feedbackTitleLabel; // @synthesize feedbackTitleLabel=_feedbackTitleLabel;
@property(nonatomic) __weak UjetAgentImageView *feedbackAgentImageView; // @synthesize feedbackAgentImageView=_feedbackAgentImageView;
@property(nonatomic) __weak UjetBasePopupContainerView *feedbackView; // @synthesize feedbackView=_feedbackView;
@property(nonatomic) __weak UILabel *agentNameLabel; // @synthesize agentNameLabel=_agentNameLabel;
@property(nonatomic) __weak UjetEDStarRating *defaultRateView; // @synthesize defaultRateView=_defaultRateView;
@property(retain, nonatomic) UjetCommunication *communication; // @synthesize communication=_communication;
- (void).cxx_destruct;
- (void)saveInitialConstraints;
- (void)layoutFeedbackRatingView;
- (double)marginSize;
- (double)ratingSize;
- (double)scaleFactor;
- (id)tintImage:(id)arg1 color:(id)arg2;
- (void)configureStingCopies;
- (void)starsSelectionChanged:(id)arg1 rating:(float)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)submit;
- (void)configureRateView:(id)arg1;
- (void)configureAgentImageView:(id)arg1 imageView:(id)arg2;
- (void)configureFeedbackView;
- (void)updateHighlightImageForRatingView:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)getAgent:(CDUnknownBlockType)arg1;
- (void)configureAgent;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

