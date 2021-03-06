//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGStoryViewerTapTarget, NSDictionary, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;

@protocol IGStoryLandscapeAdsViewDelegate <NSObject>
- (void)storyLandscapeAdsViewDidCloseInternalTool;
- (void)storyLandscapeAdsViewDidOpenInternalTool;
- (void)storyLandscapeAdsViewDidLaidOutWithFeedItemPK:(NSString *)arg1 layoutExtra:(NSDictionary *)arg2;
- (void)storyLandscapeAdsViewDidLongPressInCaptionTextView:(UILongPressGestureRecognizer *)arg1;
- (_Bool)storyLandscapeAdsViewTryRemoveTappableOverlayWithSuccess;
- (void)storyLandscapeAdsViewDidTapOnTappableOverlay:(IGStoryViewerTapTarget *)arg1 atPoint:(struct CGPoint)arg2;
- (void)storyLandscapeAdsViewDidTapInCaptionTextViewWithGestureRecognizer:(UITapGestureRecognizer *)arg1;
- (void)storyLandscapeAdsViewDidExpandCaption:(NSDictionary *)arg1;
- (void)storyLandscapeAdsViewDidCollapseCaption:(NSDictionary *)arg1;
@end

