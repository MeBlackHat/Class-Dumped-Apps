//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGEmojiModel, IGStoryQuickReactionsView, NSIndexPath, UILongPressGestureRecognizer;

@protocol IGStoryQuickReactionsViewDelegate <NSObject>
- (void)quickReactionsViewDidTapSeeMoreButton:(IGStoryQuickReactionsView *)arg1;
- (void)quickReactionsView:(IGStoryQuickReactionsView *)arg1 didLongPressOnEmoji:(IGEmojiModel *)arg2 atIndexPath:(NSIndexPath *)arg3 withLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg4;
- (void)quickReactionsView:(IGStoryQuickReactionsView *)arg1 didTapEmoji:(IGEmojiModel *)arg2;
@end

