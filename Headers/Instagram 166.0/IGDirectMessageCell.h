//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>
#import <FBSharedFramework/IGDirectContentAnchoringFrameable-Protocol.h>
#import <FBSharedFramework/IGDirectMessageBubbleContainerViewDelegate-Protocol.h>
#import <FBSharedFramework/IGDirectMessageReactionsViewDelegate-Protocol.h>
#import <FBSharedFramework/IGDirectPreviewImageProviding-Protocol.h>
#import <FBSharedFramework/IGDirectReactionsViewSupporting-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, IGCoreTextView, IGDirectAvatarView, IGDirectMessageBubbleContainerView, IGDirectMessageBubbleView, IGDirectMessageCellLayoutSpec, IGDirectMessageReactionsBorderMaskView, IGDirectMessageReactionsView, IGTapButton, NSString, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol IGDirectMessageCellDelegate, IGDirectMessageViewModelProtocol;

@interface IGDirectMessageCell : UICollectionViewCell <IGDirectMessageBubbleContainerViewDelegate, IGDirectMessageReactionsViewDelegate, IGCoreTextLinkHandler, UIGestureRecognizerDelegate, IGDirectContentAnchoringFrameable, IGDirectReactionsViewSupporting, IGDirectPreviewImageProviding>
{
    UIView *_replyIndicatorView;
    UIImageView *_replyImageView;
    CAShapeLayer *_replyIndicatorProgressRing;
    UIView *_forwardContainerView;
    UIView *_forwardShortcutView;
    IGTapButton *_forwardShortcutIcon;
    IGCoreTextView *_footerView;
    UILongPressGestureRecognizer *_avatarLongPressGesture;
    UITapGestureRecognizer *_footerViewTapGesture;
    _Bool _panHasExceededSwipeToReplyThreshold;
    double _messageBubbleXOffset;
    _Bool _shouldAddFooterViewToAccessibilityElement;
    _Bool _didLayoutFooterView;
    UIView *_maskedMessageContentContainerView;
    _Bool _isDisplaying;
    id <IGDirectMessageCellDelegate> _delegate;
    IGDirectMessageBubbleContainerView *_messageContentContainerView;
    IGDirectMessageBubbleView *_messageContentView;
    IGDirectMessageReactionsView *_reactionsView;
    IGDirectMessageCellLayoutSpec *_layoutSpec;
    id <IGDirectMessageViewModelProtocol> _viewModel;
    IGDirectAvatarView *_avatarView;
    UIView *_sidebarContainerView;
    UILabel *_timestampLabel;
    UIImageView *_actionStatusIconImageView;
    UIView *_sendingIndicatorView;
    UITapGestureRecognizer *_tapGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    IGDirectMessageReactionsBorderMaskView *_reactionsBorderMaskView;
}

+ (_Bool)needsToPassTouchEvents;
+ (_Bool)needsContainerStyling;
+ (_Bool)needsReactionsView;
+ (_Bool)needsLongPressGesture;
+ (_Bool)needsDoubleTapGesture;
+ (_Bool)needsSingleTapGesture;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectMessageReactionsBorderMaskView *reactionsBorderMaskView; // @synthesize reactionsBorderMaskView=_reactionsBorderMaskView;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(readonly, nonatomic) UIView *sendingIndicatorView; // @synthesize sendingIndicatorView=_sendingIndicatorView;
@property(readonly, nonatomic) UIImageView *actionStatusIconImageView; // @synthesize actionStatusIconImageView=_actionStatusIconImageView;
@property(readonly, nonatomic) UILabel *timestampLabel; // @synthesize timestampLabel=_timestampLabel;
@property(readonly, nonatomic) UIView *sidebarContainerView; // @synthesize sidebarContainerView=_sidebarContainerView;
@property(readonly, nonatomic) IGDirectAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) id <IGDirectMessageViewModelProtocol> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isDisplaying; // @synthesize isDisplaying=_isDisplaying;
@property(retain, nonatomic) IGDirectMessageCellLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property(readonly, nonatomic) IGDirectMessageReactionsView *reactionsView; // @synthesize reactionsView=_reactionsView;
@property(readonly, nonatomic) IGDirectMessageBubbleView *messageContentView; // @synthesize messageContentView=_messageContentView;
@property(readonly, nonatomic) IGDirectMessageBubbleContainerView *messageContentContainerView; // @synthesize messageContentContainerView=_messageContentContainerView;
@property(nonatomic) __weak id <IGDirectMessageCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_updateReplyIndicatorBorderPathForProgress:(double)arg1;
- (void)_updateReplyIndicatorForProgress:(double)arg1;
- (double)_swipeOffset;
- (double)_transitionDistance;
- (_Bool)_isSwipeLeftToRight;
- (void)messageBubbleContainerView:(id)arg1 didEndPanWithTranslation:(double)arg2;
- (void)messageBubbleContainerView:(id)arg1 didChangePanWithTranslation:(double)arg2;
- (void)messageBubbleContainerViewDidBeginPan:(id)arg1;
- (void)messageBubbleContainerViewDidStopScaleAnimation:(id)arg1;
- (void)messageBubbleContainerViewWillStartScaleAnimation:(id)arg1;
- (_Bool)messageBubbleContainerViewShouldStartScaleAnimation:(id)arg1;
- (void)directMessageReactionsViewWasLongPressed:(id)arg1 gestureRecognizer:(id)arg2;
- (void)directMessageReactionsViewWasTapped:(id)arg1;
- (void)_didLongPressAvatar:(id)arg1;
- (void)_didTapAvatar:(id)arg1;
- (void)_didReceiveLongPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldHandleTouch:(id)arg1 gestureRecognizer:(id)arg2;
- (void)didSingleTap;
- (double)_reactionsOriginXForUnitSize:(struct CGSize)arg1 leftMargin:(double)arg2;
- (_Bool)_isFooterTextQuickPromotion;
- (void)_layoutReactionsViewWithLayoutSpec:(id)arg1;
- (void)_layoutFooterViewWithPadding:(struct UIEdgeInsets)arg1 height:(double)arg2 reactionLayoutSpec:(id)arg3;
- (void)_layoutFooterView;
- (void)_layoutForwardShortcutView;
- (void)_layoutReplyIndicatorView;
- (void)_layoutMessageContentView;
- (void)_layoutAvatarView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)_sidebarImageForViewModel:(id)arg1;
- (void)_configureSidebarForViewModel:(id)arg1;
- (void)_configureSendingIndicatorForViewModel:(id)arg1;
- (id)previewImage;
- (double)minVerticalOffsetForReactionsUnit;
- (struct CGRect)contentAnchoringFrame;
- (id)staticGradientView;
- (void)layoutGradientIfNecessaryInScrollView:(id)arg1;
- (void)reloadSidebar;
- (void)didDoubleTap;
- (void)setAvatarHidden:(_Bool)arg1;
- (double)reactionsOriginXOffsetForIncomingMessage;
- (double)reactionsOriginXOffsetForOutgoingMessage;
- (double)avatarOriginYOffset;
- (void)updatePanAmountWithPercentPanned:(double)arg1;
- (struct CGSize)messageContentSize;
- (void)animateFloatingReactions:(id)arg1;
- (void)_configureForwardShortcutWithNeedsUserInterfaceStyleUpdate:(_Bool)arg1;
- (void)_setUpForwardShortcut;
- (void)_configureSwipeToReply:(_Bool)arg1;
- (void)configureAccessibility;
- (void)_configureMessageContentViewWithViewModel:(id)arg1;
- (void)_configureReactionViewWithViewModel:(id)arg1 reactionsViewLayoutSpec:(id)arg2;
- (void)_configureFooterViewWithViewModel:(id)arg1;
- (void)_configureAvatarViewWithViewModel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_styleContainer;
- (void)_styleContainerIfNecessary;
- (void)configureWithViewModel:(id)arg1;
- (void)_didTapForwardShortcut;
- (void)_setupReplyIndicatorIfNeeded;
- (void)_setupSidebarContainerView;
- (void)_setupFooterView;
- (void)_setupReactionsView;
- (void)_setupLongPressGesture;
- (void)_addFooterTextGestureRecognizerWithSingleTapHandler:(CDUnknownBlockType)arg1 doubleTapHandler:(CDUnknownBlockType)arg2;
- (void)_setupCombinedTapGestures;
- (void)_setupAvatarLongPressGesture;
- (void)_setupAvatarTapGesture;
- (void)_setupAvatarView;
- (void)_setupMessageContentView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

