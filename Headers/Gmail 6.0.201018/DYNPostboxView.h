//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DYNBlockingViewContainer-Protocol.h"
#import "DYNChipDelegate-Protocol.h"
#import "DYNComposer-Protocol.h"
#import "DYNPastableTextViewDelegate-Protocol.h"
#import "DYNPostboxHistoryStateToggleDelegate-Protocol.h"
#import "DYNPostboxSlashCommandSuggestionsViewDelegate-Protocol.h"
#import "DYNPostboxUserSuggestionsViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class DYNAutocompleteUIUtil, DYNAvatarView, DYNLabel, DYNOffTheRecordState, DYNPastableTextView, DYNPostboxBlockedView, DYNPostboxContent, DYNPostboxHistoryStateToggleView, DYNPostboxSlashCommandSuggestionsView, DYNPostboxUserSuggestionsView, GSCImageUrlOptions, MDCActivityIndicator, MDCCard, NSArray, NSDictionary, NSLayoutConstraint, NSString, UIButton, UIScrollView, UIStackView, UITextField;
@protocol DYNColorSchemeService, DYNExperimentsService, DYNGroupId, DYNPostboxBlockedViewDelegate, DYNPostboxDelegate, DYNSharedLayerService, DYNTimerEventLoggingService, DYNTopicId, GILInteractionService, GIPAccountID;

@interface DYNPostboxView : UIView <DYNChipDelegate, DYNPostboxHistoryStateToggleDelegate, DYNPostboxUserSuggestionsViewDelegate, DYNPostboxSlashCommandSuggestionsViewDelegate, DYNPastableTextViewDelegate, UITextViewDelegate, UIGestureRecognizerDelegate, DYNComposer, DYNBlockingViewContainer>
{
    NSString *_placeholderText;
    id <DYNPostboxDelegate> _delegate;
    id <GIPAccountID> _accountID;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNExperimentsService> _experimentsService;
    id <DYNTimerEventLoggingService> _timerEventLoggingService;
    id <DYNGroupId> _groupID;
    id <DYNTopicId> _topicID;
    NSString *_groupName;
    DYNOffTheRecordState *_offTheRecordState;
    _Bool _isAttachFromDriveAvailable;
    DYNAutocompleteUIUtil *_autocompleteUtil;
    DYNPostboxBlockedView *_blockedView;
    UIView *_topBorder;
    DYNLabel *_historyStateLabel;
    DYNPostboxHistoryStateToggleView *_historyStateToggleView;
    GSCImageUrlOptions *_avatarImageUrlOptions;
    DYNAvatarView *_avatarView;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UIStackView *_contentStackView;
    DYNPastableTextView *_textView;
    NSArray *_textViewAnnotations;
    NSDictionary *_typingAttributes;
    NSLayoutConstraint *_textViewHeightConstraint;
    NSLayoutConstraint *_scrollViewMaxHeightConstraint;
    NSLayoutConstraint *_topBorderTopConstraint;
    NSLayoutConstraint *_textViewFullScreenHeightConstraint;
    NSLayoutConstraint *_topBorderFullScreenTopConstraint;
    NSLayoutConstraint *_postboxHeightConstraint;
    NSLayoutConstraint *_avatarViewWidthConstraint;
    NSLayoutConstraint *_avatarViewHeightConstraint;
    NSLayoutConstraint *_contentViewLeadingConstraint;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    UIView *_chipContainerView;
    UIView *_chipView;
    DYNLabel *_placeholderLabel;
    UIView *_bottomBorder;
    NSLayoutConstraint *_bottomBorderBottomConstraint;
    UIStackView *_actionButtonsStackView;
    UIButton *_historyStateToggleButton;
    UIButton *_formatButton;
    UIButton *_atMentionButton;
    DYNPostboxUserSuggestionsView *_userSuggestionsView;
    NSArray *_userSuggestionsViewConstraints;
    NSLayoutConstraint *_userSuggestionsViewBottomConstraint;
    NSLayoutConstraint *_userSuggestionsViewHeightConstraint;
    DYNPostboxSlashCommandSuggestionsView *_slashCommandSuggestionsView;
    NSArray *_slashCommandSuggestionsViewConstraints;
    NSLayoutConstraint *_slashCommandSuggestionsViewBottomConstraint;
    NSLayoutConstraint *_slashCommandSuggestionsViewHeightConstraint;
    UIButton *_photoAlbumButton;
    UIButton *_cameraButton;
    UIButton *_driveButton;
    UIButton *_videoCallButton;
    UIButton *_calendarEventButton;
    int _sendButtonState;
    UIButton *_sendButton;
    NSLayoutConstraint *_sendButtonLeadingConstraint;
    MDCActivityIndicator *_activityIndicator;
    DYNPostboxContent *_postboxContent;
    NSArray *_accessibilityElements;
    id <GILInteractionService> _interactionLogger;
    id <DYNColorSchemeService> _colorSchemeService;
    _Bool _usePostRoomChipView;
    UITextField *_titleView;
    UIButton *_closeStyleToolbarButton;
    NSArray *_defaultButtons;
    MDCCard *_colorPickerView;
    _Bool _canDisplaySlashCommandSuggestions;
    _Bool _fullScreenComposing;
    id <DYNPostboxBlockedViewDelegate> _blockedViewDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fullScreenComposing; // @synthesize fullScreenComposing=_fullScreenComposing;
@property(nonatomic) _Bool canDisplaySlashCommandSuggestions; // @synthesize canDisplaySlashCommandSuggestions=_canDisplaySlashCommandSuggestions;
@property(nonatomic) __weak id <DYNPostboxBlockedViewDelegate> blockedViewDelegate; // @synthesize blockedViewDelegate=_blockedViewDelegate;
@property(retain, nonatomic) DYNOffTheRecordState *offTheRecordState; // @synthesize offTheRecordState=_offTheRecordState;
- (void)showFormatButtons;
- (void)showMessageTooLongAlert;
- (_Bool)isMessageTooLong;
- (void)logPostboxReadyIfNeeded;
- (_Bool)isLandscape;
- (void)updateScrollViewMaxHeight;
- (void)setIsAttachFromDriveAvailable;
- (double)bottomBorderPaddingBottom;
- (void)updateBottomBorderVisibility;
- (void)markCurrentChipAnnotationAsShouldNotRender;
- (id)currentlyBeingEditedWordInTextView:(id)arg1;
- (void)updateSlashCommandSuggestionsViewVisibility;
- (void)updateScrollViewBottomConstraint;
- (void)updateSendButtonConstraint;
- (_Bool)shouldAlignTextAndActionButtonsOnSingleLine;
- (_Bool)shouldActionButtonsWrap;
- (_Bool)isTextAndActionButtonOnSingleLineSupported;
- (double)widthOfText:(id)arg1;
- (void)updateBottomBorderConstraint;
- (void)updateTextViewHeight;
- (void)updateUserSuggestionsLayoutIfVisible;
- (void)updateUserSuggestionsViewVisibility;
- (void)setTextViewText:(id)arg1;
- (double)maxAutocompleteSuggestionsViewHeightWithPadding:(double)arg1;
- (double)autocompleteSuggestionsBottomPadding;
- (void)setSlashCommandSuggestionsViewHidden:(_Bool)arg1;
- (void)setUserSuggestionsViewHidden:(_Bool)arg1;
- (struct CGSize)iconSize;
- (void)updateTextViewAccessibilityHint;
- (id)placeholderText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureHistoryStateButtonWithOffTheRecordState:(id)arg1;
- (void)configureHistoryStateLabelWithOffTheRecordState:(id)arg1;
- (void)setAvatarUrl:(id)arg1;
- (void)updateAvatarURLWithUser:(id)arg1;
- (void)fetchAvatar;
- (void)updatePlaceholderVisibility;
- (void)updatePlaceholderLabelTextAndTextViewAccessibilityLabel;
- (void)updateSendButtonState;
- (void)updatePostboxChip;
- (void)setUpTapGesture;
- (void)fullScreenComposingConstraintsEnabled:(_Bool)arg1;
- (void)setUpConstraints;
- (id)suggestionsViewVisualElement_:(int)arg1;
- (void)setUpSubviews;
- (void)keyboardHeightChanged:(double)arg1;
- (void)updateAccessibilityElements;
- (id)accessibilityElements;
- (id)accessibilityElementsForTrackingInputAccessoryView;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didTapView;
- (void)closeStyleToolbarButtons;
- (void)didTapSendButton:(id)arg1;
- (void)didTapCalendarEventButton:(id)arg1;
- (void)didTapVideoCallButton:(id)arg1;
- (void)didTapDriveButton:(id)arg1;
- (void)didTapCameraButton:(id)arg1;
- (void)didTapPhotoAlbumButton:(id)arg1;
- (void)didTapAtMentionButton:(id)arg1;
- (void)didTapHistoryStateButton:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textView:(id)arg1 didPasteImage:(id)arg2 imageData:(id)arg3 utType:(id)arg4 fileName:(id)arg5;
- (void)textViewFormatButtonsRequired:(id)arg1;
- (void)textView:(id)arg1 colorPickerToggled:(_Bool)arg2;
- (void)textView:(id)arg1 didPickColor:(id)arg2;
- (_Bool)textViewFormatButtonsAllowed:(id)arg1;
- (void)commitCompose;
- (void)addSoftReturn;
- (void)setSmartReplyCustomAccessibilityActions:(id)arg1;
- (void)dismissPopups;
- (void)composerWillClose;
- (_Bool)hasPendingContent;
- (void)slashCommandSuggestionsView:(id)arg1 didSelectSlashCommand:(id)arg2 fromBot:(id)arg3 isGroupSlashCommand:(_Bool)arg4;
- (void)slashCommandSuggestionsViewDidReloadContent:(id)arg1;
- (void)userSuggestionsView:(id)arg1 didSelectUser:(id)arg2 isGroupUser:(_Bool)arg3;
- (void)userSuggestionsViewDidReloadContent:(id)arg1;
- (void)postboxHistoryStateDidChange:(_Bool)arg1;
- (void)didTapChip:(id)arg1;
- (void)didTapDeleteButton;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (int)caretOffset;
@property(readonly, nonatomic) struct CGSize blockingViewSize;
- (void)hideOverlaidViews;
- (void)setUploadingAttachmentButtonsEnabled:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)addAndConstrainBlockedView:(id)arg1;
- (void)installBlockedView:(id)arg1 withType:(int)arg2;
- (void)setBlockedViewButtonsEnabled:(_Bool)arg1;
- (void)setBlockedViewType:(int)arg1 user:(id)arg2 group:(id)arg3;
- (void)setBlockedViewType:(int)arg1 groupBase:(id)arg2 group:(id)arg3;
- (void)setTopicID:(id)arg1;
- (void)setGroup:(id)arg1 name:(id)arg2;
- (void)setSuggestedSlashCommands:(id)arg1;
- (void)setSuggestedUsers:(id)arg1;
- (void)setFilteredUsers:(id)arg1;
- (void)reloadSendButton;
- (void)moveTextViewCursorToEnd;
- (void)setPostboxContent:(id)arg1;
- (id)postboxContent;
- (id)initWithDelegate:(id)arg1 blockedViewDelegate:(id)arg2 groupID:(id)arg3 topicID:(id)arg4 groupName:(id)arg5 usePostRoomChipView:(_Bool)arg6 accountID:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

