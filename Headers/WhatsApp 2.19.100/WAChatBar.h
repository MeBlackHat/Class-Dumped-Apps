//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WADraggableInputView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "WAGimmickPickerViewDelegate-Protocol.h"
#import "WAInputTextViewDelegate-Protocol.h"
#import "WAInterruptedPttRecordingViewDelegate-Protocol.h"
#import "WAReplyContextViewDelegate-Protocol.h"
#import "WAWebPageFromTextLoaderDelegate-Protocol.h"
#import "WAWebURLPreviewViewDelegate-Protocol.h"

@class NSString, NSTimer, NSURL, UIBarButtonItem, UIButton, UIImageView, UILabel, UINotificationFeedbackGenerator, UISearchBar, UISelectionFeedbackGenerator, UITapGestureRecognizer, UIToolbar, UIView, UIWindow, WAAnimatedCancelLabel, WAAnimatedPttLockView, WAChatBarInputTextView, WAChatJID, WAChatSearchPickerView, WAGimmickPickerView, WAInputBarRoundButton, WAInputTextView, WAInterruptedPttRecording, WAInterruptedPttRecordingView, WALinkLabel, WAMessageQuotedItem, WAReplyContextView, WARichText, WAWebPageFromTextLoader, WAWebPageMediaDownloader, WAWebPageMetadata, WAWebURLPreviewView;
@protocol WAChatBarDelegate;

@interface WAChatBar : WADraggableInputView <WAGimmickPickerViewDelegate, WAWebURLPreviewViewDelegate, WAWebPageFromTextLoaderDelegate, WAInterruptedPttRecordingViewDelegate, WAReplyContextViewDelegate, UISearchBarDelegate, WAInputTextViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_inputBoxView;
    UIView *_inputBackgroundView;
    UIButton *_pttButton;
    WAWebURLPreviewView *_webURLPreview;
    WAInputBarRoundButton *_sendButton;
    UIView *_textInputContainerView;
    UIView *_gimmickSearchContainerView;
    UIView *_chatSearchContainerView;
    UIView *_interruptedPttRecordingContainerView;
    UIButton *_gimmickButton;
    UISearchBar *_gimmickSearchBar;
    UIWindow *_window;
    UISelectionFeedbackGenerator *_hapticFeedbackGenerator;
    WAWebPageFromTextLoader *_webPageLoader;
    WAWebPageMediaDownloader *_mediaDownloader;
    WAWebPageMediaDownloader *_mediaAutoDownloader;
    NSURL *_pastedURL;
    double _singleLineHeight;
    double _leadingInset;
    double _trailingInsetWithSendButton;
    double _trailingInsetWithPTTCameraButtons;
    double _pttLockViewHeight;
    UILabel *_pttRecordingProgressLabel;
    WAAnimatedCancelLabel *_pttSlideToCancelLabel;
    UIView *_pttSlideToCancelLabelMaskView;
    UIImageView *_pttMic;
    UIImageView *_pttMicInactive;
    UIImageView *_pttBucket;
    UIImageView *_pttBucketLid;
    UIView *_pttLockCoverView;
    struct CGPoint _pttButtonOriginalTouchPoint;
    _Bool _pttRecordingIsActive;
    _Bool _pttSlidingIsTracked;
    UIButton *_pttCancelButton;
    UIView *_pttSlideUpToLockMaskView;
    WAAnimatedPttLockView *_pttSlideUpToLockView;
    _Bool _interruptedPttRecordingViewIsActive;
    UIButton *_pttTrashCanButton;
    UIView *_interruptedPttRecordingInputBackgroundView;
    WAInterruptedPttRecordingView *_interruptedPttRecordingView;
    UINotificationFeedbackGenerator *_feedbackGenerator;
    UIToolbar *_chatSearchToolbar;
    UIBarButtonItem *_chatSearchUpButtonItem;
    UIBarButtonItem *_chatSearchDownButtonItem;
    UILabel *_chatSearchResultsLabel;
    UIBarButtonItem *_chatSearchLabelItem;
    UIBarButtonItem *_chatSearchChooseDateIcon;
    WAChatSearchPickerView *_chooseDatePickerView;
    WAGimmickPickerView *_gimmickPicker;
    _Bool _memojiIsCurrentlyEncoding;
    NSTimer *_memojiProgressTimer;
    float _memojiProgressElapsedTime;
    struct CGSize _textViewSize;
    UIView *_topBorderView;
    WAReplyContextView *_replyContextView;
    double _minimumViewHeight;
    double _textView2LineHeight;
    double _textView5LineHeight;
    WALinkLabel *_readOnlyFooterViewLabel;
    UIView *_readOnlyFooterView;
    _Bool _readonlyFooterIsForAnnouncementGroup;
    UITapGestureRecognizer *_textViewTapToKeyboardGesture;
    WAChatBarInputTextView *_textView;
    _Bool _pttLockViewActive;
    _Bool _pttRecordingIsLocked;
    _Bool _showDismissButtonForQuotedMessages;
    _Bool _resumeTextModeAfterDiscardingRecording;
    _Bool _sendButtonHidden;
    WAChatJID *_chatJID;
    unsigned long long _mode;
    unsigned long long _textMessageInputMode;
    WAInterruptedPttRecording *_interruptedPttRecording;
    UIButton *_attachMediaButton;
    UIButton *_cameraButton;
}

+ (void)windowDidBecomeHidden:(id)arg1;
+ (void)windowDidBecomeVisible:(id)arg1;
+ (void)windowDidResignKey:(id)arg1;
+ (void)windowDidBecomeKey:(id)arg1;
+ (void)initialize;
+ (void)setGimmickInputMode:(unsigned long long)arg1;
+ (unsigned long long)gimmickInputMode;
@property(retain, nonatomic) WAGimmickPickerView *gimmickPicker; // @synthesize gimmickPicker=_gimmickPicker;
@property(nonatomic, getter=isSendButtonHidden) _Bool sendButtonHidden; // @synthesize sendButtonHidden=_sendButtonHidden;
@property(readonly, nonatomic) UIButton *cameraButton; // @synthesize cameraButton=_cameraButton;
@property(readonly, nonatomic) UIButton *attachMediaButton; // @synthesize attachMediaButton=_attachMediaButton;
@property(readonly, nonatomic) UIButton *pttButton; // @synthesize pttButton=_pttButton;
@property(nonatomic) _Bool resumeTextModeAfterDiscardingRecording; // @synthesize resumeTextModeAfterDiscardingRecording=_resumeTextModeAfterDiscardingRecording;
@property(nonatomic) _Bool showDismissButtonForQuotedMessages; // @synthesize showDismissButtonForQuotedMessages=_showDismissButtonForQuotedMessages;
@property(nonatomic, getter=isPTTRecordingLocked) _Bool pttRecordingIsLocked; // @synthesize pttRecordingIsLocked=_pttRecordingIsLocked;
@property(nonatomic, getter=isPTTLockViewActive) _Bool pttLockViewActive; // @synthesize pttLockViewActive=_pttLockViewActive;
@property(retain, nonatomic) WAInterruptedPttRecording *interruptedPttRecording; // @synthesize interruptedPttRecording=_interruptedPttRecording;
@property(nonatomic) unsigned long long textMessageInputMode; // @synthesize textMessageInputMode=_textMessageInputMode;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
- (void).cxx_destruct;
- (void)handleTapToKeyboardGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(readonly, nonatomic, getter=isTextViewFirstResponder) _Bool textViewFirstResponder;
- (void)setKeyboardInputView:(id)arg1;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)updateReadOnlyFooterView;
- (long long)maxAvailableCharactersForInputTextView:(id)arg1;
- (_Bool)inputTextView:(id)arg1 canMentionUser:(id)arg2;
- (void)inputTextViewDidStopEditingMention:(id)arg1;
- (void)inputTextView:(id)arg1 didEditMentionInRange:(struct _NSRange)arg2;
- (_Bool)inputTextViewShouldTrackMentions:(id)arg1;
- (id)textInputContextIdentifierForInputTextView:(id)arg1;
- (_Bool)inputTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)setImage:(id)arg1 caption:(id)arg2 editable:(_Bool)arg3;
- (void)inputTextViewDidChange:(id)arg1;
- (_Bool)inputTextViewShouldEndEditing:(id)arg1;
- (void)inputTextViewDidEndEditing:(id)arg1;
- (void)inputTextViewDidBeginEditing:(id)arg1;
- (_Bool)inputTextViewShouldBeginEditing:(id)arg1;
- (void)inputTextViewDictationDidEnd:(id)arg1;
- (void)inputTextView:(id)arg1 didPasteURL:(id)arg2;
- (void)inputTextViewDidPasteGIF:(id)arg1;
- (void)inputTextViewDidPasteImage:(id)arg1;
- (void)inputTextView:(id)arg1 needsHeightChangedTo:(double)arg2;
- (double)inputTextViewMaximumHeight:(id)arg1;
@property(retain, nonatomic) WAMessageQuotedItem *quotedItem;
- (void)setChatDefaults;
- (void)replyContextViewDidDismiss:(id)arg1;
- (void)loadReplyContextView;
- (void)loadReplyContextAndWebURLPreviewViewsIfNeeded;
- (void)loadReplyContextViewInMode:(unsigned long long)arg1;
- (void)acceptAutoCorrection;
- (void)didSendMessage;
- (void)cameraButtonTapped:(id)arg1;
- (void)attachMediaButtonTapped:(id)arg1;
- (void)send;
- (void)applicationDidReceiveCommandReturnEvent:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)themeDidChange:(id)arg1;
- (void)fontSizeDidChange:(id)arg1;
- (void)insertMention:(id)arg1 range:(struct _NSRange)arg2 jid:(id)arg3;
- (void)didCancelGIF;
- (void)didSendGIFForURL:(id)arg1;
- (void)becomeActiveIfNecessaryWithMode:(long long)arg1 fromVC:(id)arg2;
@property(readonly, nonatomic) _Bool isTextViewFirstResponderForNextResponder;
@property(readonly, nonatomic) long long activeMode;
@property(readonly, nonatomic) WAInputTextView *textView;
- (void)hideKeyboard;
- (void)hideKeyboardWithoutChangingInputMode;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
@property(copy, nonatomic) WARichText *richText;
- (void)updateLayoutOnTextChange;
- (void)updateVisibleStateOfButtons;
- (void)recalculateSingleLineHeight;
- (double)maximumTextViewHeightForLayoutWidth:(double)arg1;
- (double)textInputPreferredHeightForLayoutWidth:(double)arg1;
- (double)readonlyFooterPreferredHeightForLayoutWidth:(double)arg1;
- (double)preferredHeightForLayoutWidth:(double)arg1;
@property(readonly, nonatomic) struct CGRect containerViewLayoutBoundsWithoutBorderView;
- (void)layoutTextInputContainerView;
- (void)layoutReadonlyFooterView;
- (void)layoutReplyContextViewIfNeeded;
- (void)layoutSubviews;
- (void)updateVisibleStateOfTextInputModeViews;
- (void)updateRoundedCorners;
- (id)inputViewResponderToBecomeFirstResponder;
- (id)inputViewResponders;
- (_Bool)accessibilityElementsHidden;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2;
- (double)chatSearchContainerViewPreferredHeightForLayoutWidth:(double)arg1;
- (void)layoutChatSearchContainerView;
@property(copy, nonatomic) NSString *chatSearchResultsLabelAccessibilityValue;
@property(copy, nonatomic) NSString *searchResultsLabelText;
@property(nonatomic, getter=isChatSearchDownButtonEnabled) _Bool chatSearchDownButtonEnabled;
@property(nonatomic, getter=isChatSearchUpButtonEnabled) _Bool chatSearchUpButtonEnabled;
- (void)handlePickerDateChanged:(id)arg1;
- (void)showChooseDatePicker:(id)arg1;
@property(readonly, nonatomic) UIView *chatSearchContainerView;
- (void)gimmickPickerView:(id)arg1 didRequestPresentActionSheet:(id)arg2;
- (void)gimmickPickerViewDidRequestOpenStickerStore:(id)arg1;
- (void)gimmickPickerViewDidBeginGIFSearch:(id)arg1 preloadedGIFs:(id)arg2;
- (void)gimmickPickerViewDidBeginStickerSearch:(id)arg1;
- (void)gimmickPickerView:(id)arg1 didSelectGIFMediaItem:(id)arg2 withGIFThumbnailImageView:(id)arg3;
- (void)gimmickPickerView:(id)arg1 didSelectManagedSticker:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gimmickInputModeDidChange:(id)arg1;
- (void)createGimmickPickerIfNeeded;
- (id)gimmickPickerView;
- (void)showStickerStarredCategory;
- (void)showStickerPack:(id)arg1;
- (void)updateGimmickInputModeToStickers;
- (void)updateGimmickInputModeToKeyboard;
- (void)updateGimmickButtonImage;
- (void)toggleKeyboardAndGimmickPicker:(id)arg1;
- (void)willHideKeyboardWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)willShowKeyboardWithAnimationDuration:(double)arg1 animationCurve:(long long)arg2 beginFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)setDefaultGIFCategory;
- (double)gimmickSearchContainerViewPreferredHeightForLayoutWidth:(double)arg1;
- (void)layoutGimmickSearchContainerView;
@property(readonly, nonatomic) UIView *gimmickSearchContainerView;
- (void)createGimmickPicker;
- (void)setUpGimmickInterface;
- (void)webPageFromTextLoaderDidUpdateMetadata:(id)arg1;
- (void)webPageFromTextLoaderDidUpdateMatchedText:(id)arg1;
- (_Bool)isAllowAutodownloadMediaWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
- (void)autodownloadMediaIfPossibleWithMetadata:(id)arg1 mediaSize:(unsigned long long)arg2;
- (void)showDownloadMediaOptionWithMediaSize:(unsigned long long)arg1;
- (void)hideDownloadMediaOption;
- (void)updateMetadataWithImage:(id)arg1;
- (void)setWebPreviewDownloading:(_Bool)arg1;
- (void)updateMediaDownloadWithProgress:(float)arg1;
- (void)updatePreviewImageIfPossibleUsingDownloadedMediaFileURL:(id)arg1 mimeType:(id)arg2;
- (void)handleDownloadedMediaFileURL:(id)arg1;
- (void)webURLPreviewViewDidEditMedia:(id)arg1;
- (void)webURLPreviewViewDidCancelMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidRequestMediaDownload:(id)arg1;
- (void)webURLPreviewViewDidDismiss:(id)arg1;
@property(retain, nonatomic) WAWebPageMetadata *webPageMetadata;
- (void)loadWebURLPreviewView;
- (void)interruptedPTTRecordingViewDidStartPlaying:(id)arg1;
- (void)dismissInterruptedPTTRecordingWithDidSend:(_Bool)arg1;
- (void)dismissInterruptedPTTRecording;
- (void)clearInterruptedPTTRecording;
- (void)clearInterruptedPTTRecordingWithDidSend:(_Bool)arg1;
- (_Bool)hasInterruptedPTTRecording;
- (void)pauseInterruptedPTTRecordingPlaybackIfNeeded;
- (_Bool)createInterruptedPTTRecordingWithFilePath:(id)arg1 andDuration:(double)arg2;
- (void)sendInterruptedPTTRecording;
- (void)layoutInterruptedPTTRecordingContainerView;
@property(readonly, nonatomic) UIView *interruptedPttRecordingContainerView;
- (void)pttLockCancelled;
- (void)sendPTTLockedRecording;
- (void)showPTTLock;
- (void)animatePttControlsOutWithDiscardAnimation:(_Bool)arg1;
- (void)setRecordingMicActive:(_Bool)arg1;
- (void)animatePttControlsIn:(id)arg1;
- (void)pttButtonTrackSliding:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonReleasedImpl:(id)arg1 withEvent:(id)arg2 triggeredByControlEvent:(unsigned long long)arg3;
- (void)pttButtonCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonOutsideReleased:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonInsideReleased:(id)arg1 withEvent:(id)arg2;
- (void)pttButtonPressed:(id)arg1 withEvent:(id)arg2;
- (void)layoutPTTViews;
- (void)loadPTTLockViewIfNeeded;
- (void)loadSupplementaryPTTViewsIfNeeded;
- (void)setUpPTTButton;
- (void)interruptPTTRecording;
- (void)cancelPTTRecording;
- (void)setPTTRecordingTime:(double)arg1;
- (_Bool)isValidMemojiImage:(id)arg1;
- (void)sendSticker:(id)arg1;
- (id)saveSticker:(id)arg1 withMemojiImageHash:(id)arg2;
- (void)saveAndSendSticker:(id)arg1 withMemojiImageHash:(id)arg2;
- (void)advanceProgress;
- (void)stopLoadingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startLoading;
- (void)handleMemojiImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAChatBarDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

