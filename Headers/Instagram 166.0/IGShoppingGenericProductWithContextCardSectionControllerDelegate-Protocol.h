//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGShoppingGenericProductWithContextCardSectionController, NSString;
@protocol IGGenericProductItem, IGShoppingProductViewModel;

@protocol IGShoppingGenericProductWithContextCardSectionControllerDelegate <NSObject>
- (void)genericProductWithContextCardSectionController:(IGShoppingGenericProductWithContextCardSectionController *)arg1 didTapDismissForGenericProductItem:(id <IGGenericProductItem>)arg2;
- (_Bool)genericProductWithContextCardSectionController:(IGShoppingGenericProductWithContextCardSectionController *)arg1 containsLastSavedGenericProductItem:(id <IGGenericProductItem>)arg2;
- (void)genericProductWithContextCardSectionController:(IGShoppingGenericProductWithContextCardSectionController *)arg1 willNavigateToPDPForGenericViewModel:(id <IGShoppingProductViewModel>)arg2;
- (void)genericProductWithContextCardSectionController:(IGShoppingGenericProductWithContextCardSectionController *)arg1 didUpdateGenericProductItem:(id <IGGenericProductItem>)arg2 withUpdatedSaveStatus:(_Bool)arg3 displayedMediaId:(NSString *)arg4;
@end

