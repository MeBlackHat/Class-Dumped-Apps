//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGFeedPreviewHandler, IGHashtagModel, IGMedia, NSArray, NSDictionary, NSIndexPath;

@protocol IGFeedPreviewHandlerDelegate <NSObject>
- (NSArray *)previewHandler:(IGFeedPreviewHandler *)arg1 previewActionsForMedia:(IGMedia *)arg2 defaultActionProvider:(NSArray * (^)(void))arg3;
- (IGHashtagModel *)hashtagModelForPreviewHandler:(IGFeedPreviewHandler *)arg1;
- (NSDictionary *)previewHandler:(IGFeedPreviewHandler *)arg1 loggingExtrasForMedia:(IGMedia *)arg2 atIndexPath:(NSIndexPath *)arg3;
@end

