//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGChallengeStickerTextEditingViewDelegate-Protocol.h>
#import <FBSharedFramework/IGConstrainedSizeStickerViewType-Protocol.h>
#import <FBSharedFramework/IGSpecialBurnedInContentStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStickerViewType-Protocol.h>
#import <FBSharedFramework/IGStoryTextEntryTextViewDelegate-Protocol.h>

@class CALayer, IGChallengeStickerAttributionView, IGChallengeStickerTextEditingView, IGGradientView, IGStoryRichTextEntryTextView, IGTextView, IGUser, IGUserSession, NSString, UILabel;
@protocol IGChallengeStickerViewDelegate;

@interface IGChallengeStickerView : UIView <IGStoryTextEntryTextViewDelegate, IGChallengeStickerTextEditingViewDelegate, IGStickerViewType, IGConstrainedSizeStickerViewType, IGSpecialBurnedInContentStickerViewType>
{
    IGChallengeStickerTextEditingView *_nameView;
    UIView *_nameBackgroundView;
    IGTextView *_internalTextView;
    IGGradientView *_gradientView;
    _Bool _hasInputAccessoryView;
    UILabel *_nominateFriendsPromptLabel;
    _Bool _hasEditableName;
    struct {
        unsigned long long presentationMode;
        unsigned long long nuxState;
    } _stickerState;
    struct CGPoint _precapturePosition;
    struct CGAffineTransform _precaptureTransform;
    IGChallengeStickerAttributionView *_attributionView;
    CALayer *_attributionSeparatorLineLayer;
    IGUserSession *_userSession;
    _Bool _isPartneredAccount;
    id <IGChallengeStickerViewDelegate> _delegate;
    IGUser *_nominatingUser;
    unsigned long long _nominationsColorScheme;
    IGStoryRichTextEntryTextView *_nominationsTextView;
    UIView *_nominatorAndChallengeNameContainerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *nominatorAndChallengeNameContainerView; // @synthesize nominatorAndChallengeNameContainerView=_nominatorAndChallengeNameContainerView;
@property(readonly, nonatomic) IGStoryRichTextEntryTextView *nominationsTextView; // @synthesize nominationsTextView=_nominationsTextView;
@property(nonatomic) unsigned long long nominationsColorScheme; // @synthesize nominationsColorScheme=_nominationsColorScheme;
@property(readonly, nonatomic) _Bool isPartneredAccount; // @synthesize isPartneredAccount=_isPartneredAccount;
@property(copy, nonatomic) IGUser *nominatingUser; // @synthesize nominatingUser=_nominatingUser;
@property(nonatomic) __weak id <IGChallengeStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_nominationsView;
- (_Bool)_isDefaultNominationsText;
- (void)_cycleToNextNameViewStyles:(id)arg1;
- (void)removeEmphasisFromNominationsTextView;
- (void)invertColorsForNominationsTextView;
- (void)applyEmphasisToNominationsTextView;
- (_Bool)hasChangedNominationsText;
- (void)beginEditingNominations;
- (void)updateNominationsTextWithSelectedUser:(id)arg1 shouldInsertMentionSymbol:(_Bool)arg2;
- (void)resetToDefaultNominationsText;
- (void)configureWithViewModel:(id)arg1;
- (void)textEntryTextViewDidEndEditing:(id)arg1;
- (void)textEntryTextViewDidChangeSelection:(id)arg1;
- (_Bool)textEntryTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textEntryTextViewDidChange:(id)arg1;
- (_Bool)textEntryTextViewShouldBeginEditing:(id)arg1;
- (void)challengeStickerTextEditingViewDidTapNext:(id)arg1;
- (void)challengeStickerWillEndEditingTextEditingView:(id)arg1;
- (void)challengeStickerWillBeginEditingTextEditingView:(id)arg1;
- (void)challengeStickerTextEditingView:(id)arg1 didChangeText:(id)arg2;
- (void)updateContentForBurnIn:(_Bool)arg1;
- (double)maximumScale;
- (double)minimumScale;
- (_Bool)constrainStickerWithBoundingBox;
- (void)updateStickerCompleteness:(_Bool)arg1;
- (void)_updateNominationsLabels;
- (void)_updateViewStateAnimated:(_Bool)arg1;
- (void)willDismissPostCaptureExperience;
- (void)willPresentCameraCreationExperienceWithNUXVisible:(_Bool)arg1;
- (void)willPresentPostCaptureExperience;
- (void)willDismissCreationMode;
- (void)willPresentCreationMode;
- (void)didStartVideoRecording;
- (id)nameView;
@property(readonly, nonatomic) NSString *tagName;
- (id)challengeName;
- (void)setChallengeNameWithoutChallengeSuffix:(id)arg1;
@property(nonatomic) long long nameViewStyle;
@property(retain, nonatomic) UIView *inputAccessoryView;
- (_Bool)stickerPinningDisabled;
- (id)stickerView;
- (id)loggingId;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithName:(id)arg1 nominatingUser:(id)arg2 hasEditableName:(_Bool)arg3 isPartneredAccount:(_Bool)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

