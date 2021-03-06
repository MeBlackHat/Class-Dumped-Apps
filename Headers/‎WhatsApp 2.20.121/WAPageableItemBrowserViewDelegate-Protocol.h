//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class UIViewController, WAMultiSendMediaItem, WAPageableItemBrowserView;

@protocol WAPageableItemBrowserViewDelegate <UIScrollViewDelegate>
- (_Bool)pageableItemBrowserViewCanSendFromEditingView:(WAPageableItemBrowserView *)arg1;
- (_Bool)pageableItemBrowserViewDidRequestEnterFilterMode:(WAPageableItemBrowserView *)arg1;
- (_Bool)pageableItemBrowserView:(WAPageableItemBrowserView *)arg1 canExportItemAsGIF:(WAMultiSendMediaItem *)arg2;
- (_Bool)canApplyFilterToCurrentItemInPageableItemBrowserView:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewDidChangeAccentColor:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserView:(WAPageableItemBrowserView *)arg1 didDeleteItemAtLocation:(struct CGPoint)arg2;
- (void)pageableItemBrowserView:(WAPageableItemBrowserView *)arg1 shouldEnterPendingDeletionState:(_Bool)arg2;
- (_Bool)pageableItemBrowserView:(WAPageableItemBrowserView *)arg1 shouldDeleteItemAtLocation:(struct CGPoint)arg2;
- (UIViewController *)pageableItemBrowserViewContainingViewController:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemViewDidRequestHeaderMode:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)pageableItemBrowserViewDidRequestSend:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewDidRequestEndCropping:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewDidScroll:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewDidEndFocusedTask:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewWillBeginFocusedTask:(WAPageableItemBrowserView *)arg1;
- (void)pageableItemBrowserViewCurrentIndexDidChange:(WAPageableItemBrowserView *)arg1;
- (long long)pageableItemCount:(WAPageableItemBrowserView *)arg1;
- (WAMultiSendMediaItem *)pageableItemBrowserView:(WAPageableItemBrowserView *)arg1 itemAtIndex:(long long)arg2;
@end

