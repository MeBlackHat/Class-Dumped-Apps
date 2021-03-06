//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@class IGLiveBroadcasterUserPayPinnedInfoViewModel, IGLiveFundraiserViewModel, IGLiveShoppingPinnedProductViewModel, IGLiveViewerUserPayPinnedInfoViewModel;

@interface IGLiveTappablePinnedViewModel : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    IGLiveFundraiserViewModel *_fundraiser_fundraiserViewModel;
    IGLiveViewerUserPayPinnedInfoViewModel *_userPayViewer_userPayViewerPinnedInfo;
    IGLiveBroadcasterUserPayPinnedInfoViewModel *_userPayBroadcaster_userPayBroadcasterPinnedInfo;
    IGLiveShoppingPinnedProductViewModel *_shoppingPinnedProduct_viewModel;
}

+ (id)userPayViewerWithUserPayViewerPinnedInfo:(id)arg1;
+ (id)userPayBroadcasterWithUserPayBroadcasterPinnedInfo:(id)arg1;
+ (id)shoppingPinnedProductWithViewModel:(id)arg1;
+ (id)fundraiserWithFundraiserViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchFundraiser:(CDUnknownBlockType)arg1 userPayViewer:(CDUnknownBlockType)arg2 userPayBroadcaster:(CDUnknownBlockType)arg3 shoppingPinnedProduct:(CDUnknownBlockType)arg4;
- (_Bool)matchBooleanFundraiser:(CDUnknownBlockType)arg1 userPayViewer:(CDUnknownBlockType)arg2 userPayBroadcaster:(CDUnknownBlockType)arg3 shoppingPinnedProduct:(CDUnknownBlockType)arg4;

@end

