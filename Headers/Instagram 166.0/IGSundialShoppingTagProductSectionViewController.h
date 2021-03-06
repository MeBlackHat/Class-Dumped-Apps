//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGShoppingBrandSelectionViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingTaggingPermissionsHelperDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTaggingSearchViewControllerDelegate-Protocol.h>

@class IGShoppingTaggingPermissionsHelper, IGSundialDisclosureSection, IGSundialShoppingMetadata, IGUser, IGUserSession, NSString, UIView;
@protocol IGSundialShoppingTagProductSectionViewControllerDelegate;

@interface IGSundialShoppingTagProductSectionViewController : IGViewController <IGTaggingSearchViewControllerDelegate, IGShoppingBrandSelectionViewControllerDelegate, IGShoppingTaggingPermissionsHelperDelegate>
{
    IGUserSession *_userSession;
    IGSundialShoppingMetadata *_shoppingMetadata;
    IGSundialDisclosureSection *_tagProductView;
    IGShoppingTaggingPermissionsHelper *_shoppingTaggingPermissionsHelper;
    _Bool _enteredShoppingOnboardingFlow;
    NSString *_shoppingTaggingSessionId;
    NSString *_analyticsModule;
    id <IGSundialShoppingTagProductSectionViewControllerDelegate> _delegate;
    IGUser *_sponsorPartner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGUser *sponsorPartner; // @synthesize sponsorPartner=_sponsorPartner;
@property(readonly, nonatomic) UIView *tagProductView; // @synthesize tagProductView=_tagProductView;
@property(nonatomic) __weak id <IGSundialShoppingTagProductSectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_openShoppingTaggingFlow;
- (void)_startShoppingTaggingFlow;
- (void)_tagProductRowButtonTapped;
- (void)_maybeRequestProductTaggingPermissionsForSponsorPartner:(id)arg1;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateResponse:(id)arg2;
- (void)shoppingTaggingPermissionsHelper:(id)arg1 didUpdateTaggingPermissionsStatus:(long long)arg2;
- (void)shoppingBrandSelectionViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectFBUser:(id)arg2 IGUserResultShown:(id)arg3 searchingString:(id)arg4;
- (void)taggingSearchViewController:(id)arg1 didSelectProductCollection:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectProductItems:(id)arg2;
- (void)taggingSearchViewController:(id)arg1 didSelectUser:(id)arg2;
- (void)taggingSearchViewControllerDidCancel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 taggingSessionId:(id)arg2 shoppingMetadata:(id)arg3 sponsorPartner:(id)arg4 analyticsModule:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

