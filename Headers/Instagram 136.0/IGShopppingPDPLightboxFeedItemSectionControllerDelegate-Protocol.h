//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGShoppingPDPLightboxFeedItemSectionController, IGShoppingPDPLightboxFeedItemViewModel, NSString;

@protocol IGShopppingPDPLightboxFeedItemSectionControllerDelegate <NSObject>
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didBecomeVisibleWithViewModel:(IGShoppingPDPLightboxFeedItemViewModel *)arg2 isSubimpression:(_Bool)arg3;
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didTapViewMediaWithMediaId:(NSString *)arg2;
- (void)lightboxFeedItemSectionController:(IGShoppingPDPLightboxFeedItemSectionController *)arg1 didTapUsernameAttributionOnMediaWithMediaId:(NSString *)arg2;
@end

