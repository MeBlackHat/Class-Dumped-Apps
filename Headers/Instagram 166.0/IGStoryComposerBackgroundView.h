//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/CAAnimationDelegate-Protocol.h>

@class IGStoryEmojiReactionComposerNuxView, IGStoryEmojiReactionView, IGStoryEmojiReactionViewModel, IGStoryQuickReactionsView, IGStorySmartRepliesView, IGUserSession, NSArray, NSString, UILabel;
@protocol IGStoryEmojiReactionViewDelegate><IGStoryEmojiReactionComposerNuxViewDelegate, IGStoryFullscreenFooterContainerDelegate;

@interface IGStoryComposerBackgroundView : UIView <CAAnimationDelegate>
{
    IGUserSession *_userSession;
    UILabel *_groupStoriesTitle;
    UILabel *_groupStoriesDetails;
    UIView *_backgroundDimmingView;
    IGStoryEmojiReactionViewModel *_emojiReactionViewModel;
    id <IGStoryEmojiReactionViewDelegate><IGStoryEmojiReactionComposerNuxViewDelegate> _emojiReactionViewDelegate;
    _Bool _isSmartRepliesEnabled;
    IGStoryEmojiReactionComposerNuxView *_emojiReactionComposerNuxView;
    NSArray *_emojiReactionAnimationSnapshotViews;
    _Bool _isEmojiReactionEnabled;
    double _footerHeight;
    IGStoryQuickReactionsView *_quickReactionsView;
    IGStorySmartRepliesView *_smartRepliesView;
    IGStoryEmojiReactionView *_emojiReactionView;
    id <IGStoryFullscreenFooterContainerDelegate> _footerDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryFullscreenFooterContainerDelegate> footerDelegate; // @synthesize footerDelegate=_footerDelegate;
@property(readonly, nonatomic) _Bool isEmojiReactionEnabled; // @synthesize isEmojiReactionEnabled=_isEmojiReactionEnabled;
@property(readonly, nonatomic) IGStoryEmojiReactionView *emojiReactionView; // @synthesize emojiReactionView=_emojiReactionView;
@property(readonly, nonatomic) IGStorySmartRepliesView *smartRepliesView; // @synthesize smartRepliesView=_smartRepliesView;
@property(readonly, nonatomic) IGStoryQuickReactionsView *quickReactionsView; // @synthesize quickReactionsView=_quickReactionsView;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (_Bool)_shouldShowEmojiReactionComposerNUX;
- (id)_emojiReactionComposerNuxView;
- (_Bool)_shouldShowQuickReactionsViewTooltip;
- (void)_setGroupStoriesVisibility:(_Bool)arg1;
- (_Bool)isEmojiReactionsPresentingSkinTonePicker;
- (_Bool)isShowingDimmingView;
- (_Bool)isShowingEmojiReactions;
- (_Bool)isShowingSmartReplies;
- (void)showQuickReactionsViewTooltipIfNecessary;
- (void)setEmojiReactionsVisibility:(_Bool)arg1;
- (void)setReactionsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithStoryQuickReactionsViewModel:(id)arg1 smartRepliesViewModel:(id)arg2 emojiReactionViewModel:(id)arg3 emojiReactionDelegate:(id)arg4 groupStoriesInfoVisible:(_Bool)arg5;
- (void)setIsComposing:(_Bool)arg1 replyType:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

