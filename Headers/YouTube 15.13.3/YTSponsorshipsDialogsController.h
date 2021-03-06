//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTActivityWaitTimeoutDelegate-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTStoreKitTransactionObserver-Protocol.h"

@class GIMMe, GOOAlertView, NSMutableArray, NSString, UIView, UIViewController, YTActivityWaitViewController, YTICommand, YTThumbnailController;
@protocol YTResponder, YTSponsorshipsDialogViewProtocol;

@interface YTSponsorshipsDialogsController : NSObject <YTResponder, YTStoreKitTransactionObserver, YTActivityWaitTimeoutDelegate, YTFormattedStringLabelDelegate>
{
    GOOAlertView *_dialog;
    UIView<YTSponsorshipsDialogViewProtocol> *_dialogView;
    YTActivityWaitViewController *_waitViewController;
    UIViewController *_currentSponsorshipsOfferController;
    _Bool _isCurrentSponsorshipsOfferContainerEngagementPanel;
    YTThumbnailController *_thumbnailContoller;
    NSMutableArray *_thumbnailControllers;
    YTICommand *_callToActionCommand;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)transaction:(id)arg1 statusDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)transaction:(id)arg1 statusWillChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)hideSpinner;
- (void)showSpinner;
- (void)dismissDialogFromCommand:(id)arg1;
- (void)handleServiceErrorMessageArray:(id)arg1;
- (void)loadThumbnailsForView:(id)arg1;
- (void)didTapDismissButton;
- (void)didTapCallToActionButton;
- (void)presentPostTransactionDialogWithRenderer:(id)arg1 firstResponder:(id)arg2;
- (void)presentOffersDialogWithRenderer:(id)arg1 firstResponder:(id)arg2;
- (void)presentPostCancelDialogWithRenderer:(id)arg1;
- (void)didTapCancelButton;
- (void)didTapGetOffersButton;
- (void)setupDialogWithView:(id)arg1 callToActionButton:(id)arg2 callToActionAction:(SEL)arg3;
- (void)didTimeout;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)reloadWatchBrowse;
- (void)presentConfirmCancelDialogWithRenderer:(id)arg1 firstResponder:(id)arg2;
- (void)presentGetOffersDialogWithGetOffersEndpoint:(id)arg1 clickTrackingParams:(id)arg2 firstResponder:(id)arg3;
- (void)handleIAPEndpoint:(id)arg1;
- (void)presentViewController:(id)arg1;
- (id)sponsorshipsEngagementPanelWithCommand:(id)arg1 firstResponder:(id)arg2;
- (void)presentSponsorshipsDialogWithCommand:(id)arg1 firstResponder:(id)arg2;
- (void)setParentResponderIfNotSelf:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

