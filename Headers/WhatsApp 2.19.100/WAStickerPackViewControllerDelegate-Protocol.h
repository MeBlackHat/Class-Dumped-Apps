//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, WAStickerPackViewController;
@protocol WAStickerPackInfoProviding;

@protocol WAStickerPackViewControllerDelegate <NSObject>
- (void)stickerPackViewController:(WAStickerPackViewController *)arg1 didTapDownloadButtonForStickerPack:(id <WAStickerPackInfoProviding>)arg2;
- (void)stickerPackViewController:(WAStickerPackViewController *)arg1 didFailToDownloadStickerPackWithError:(NSError *)arg2;
@end

