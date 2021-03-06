//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TIKTOKProfileHeaderView.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class AWEProfileHeaderActionController, AWEUserNameLabel, MASConstraint, NSString, UIView;
@protocol AWEMTLiveFeedViewProtocol;

@interface TIKTOKCentralProfileHeaderView : TIKTOKProfileHeaderView <UIViewControllerTransitioningDelegate>
{
    _Bool _isRecommendViewShow;
    _Bool _isFirstTimeViewDidLoad;
    _Bool _isLogSent;
    _Bool _avatarLoadFailed;
    AWEProfileHeaderActionController *_actionController;
    AWEUserNameLabel *_verifyUserNameLabel;
    MASConstraint *_bioContainerViewTopConstraintToIntroLabel;
    MASConstraint *_bioContainerViewHeight;
    MASConstraint *_recommendViewTopConstraintToExtraView;
    MASConstraint *_recommendViewBottomConstraintToContainerView;
    MASConstraint *_introLabelTopConstraintToRecommendView;
    MASConstraint *_introLabelTopConstraintToContainerView;
    MASConstraint *_introLabelHeightEmptyConstraint;
    MASConstraint *_introLabelHeightConstConstraint;
    UIView<AWEMTLiveFeedViewProtocol> *_liveStaticTag;
    UIView *_bioContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bioContainerView; // @synthesize bioContainerView=_bioContainerView;
@property(retain, nonatomic) UIView<AWEMTLiveFeedViewProtocol> *liveStaticTag; // @synthesize liveStaticTag=_liveStaticTag;
@property(retain, nonatomic) MASConstraint *introLabelHeightConstConstraint; // @synthesize introLabelHeightConstConstraint=_introLabelHeightConstConstraint;
@property(retain, nonatomic) MASConstraint *introLabelHeightEmptyConstraint; // @synthesize introLabelHeightEmptyConstraint=_introLabelHeightEmptyConstraint;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToContainerView; // @synthesize introLabelTopConstraintToContainerView=_introLabelTopConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToRecommendView; // @synthesize introLabelTopConstraintToRecommendView=_introLabelTopConstraintToRecommendView;
@property(retain, nonatomic) MASConstraint *recommendViewBottomConstraintToContainerView; // @synthesize recommendViewBottomConstraintToContainerView=_recommendViewBottomConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *recommendViewTopConstraintToExtraView; // @synthesize recommendViewTopConstraintToExtraView=_recommendViewTopConstraintToExtraView;
@property(retain, nonatomic) MASConstraint *bioContainerViewHeight; // @synthesize bioContainerViewHeight=_bioContainerViewHeight;
@property(retain, nonatomic) MASConstraint *bioContainerViewTopConstraintToIntroLabel; // @synthesize bioContainerViewTopConstraintToIntroLabel=_bioContainerViewTopConstraintToIntroLabel;
@property(nonatomic) _Bool avatarLoadFailed; // @synthesize avatarLoadFailed=_avatarLoadFailed;
@property(nonatomic) _Bool isLogSent; // @synthesize isLogSent=_isLogSent;
- (void)setVerifyUserNameLabel:(id)arg1;
- (void)setIsFirstTimeViewDidLoad:(_Bool)arg1;
- (_Bool)isFirstTimeViewDidLoad;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (_Bool)isRecommendViewShow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)showOrHideRecommendView:(_Bool)arg1;
- (void)setIsRecommendViewShow:(_Bool)arg1;
- (void)hideRecommendViewAfterUnfollow;
- (void)showRecommendViewAfterFollow;
- (void)recommendBtnClicked;
- (void)updateFansLabel;
- (void)constructTranspondProfileCoverArray;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (id)verifyUserNameLabel;
- (void)viewDidShow;
- (void)jumpToMutualTab;
- (void)updateSocialLinkView;
- (void)sendMailBtnClicked;
- (void)sendEmail;
- (void)openBioUrl;
- (void)handleTapOnContent:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)p_openMapWithAddress:(id)arg1;
- (void)p_openPhoneWithNumber:(id)arg1;
- (void)p_openEmailAppWithAddress:(id)arg1;
- (id)p_makeBioLocationFlatItem;
- (id)p_makeBioPhoneFlatItem;
- (id)p_makeBioEmailFlatItem;
- (id)p_makeContactsItem;
- (id)p_makePreferredContactItem;
- (id)p_makeDownloadItem;
- (void)requestAPPStore:(id)arg1;
- (void)p_updateBusinessAccountAreaView;
- (void)showCommerceLink:(_Bool)arg1;
- (void)p_updateSocialStatisticsButtons;
- (void)p_updateSignature:(id)arg1;
- (void)p_constructIntroString;
- (void)updateSignature;
- (void)trackEventForBioLinkWithEventName:(id)arg1 linkType:(id)arg2;
- (void)updateMutualConnectionView;
- (void)updateBioLinkUI;
- (void)updateBioMailUI;
- (_Bool)canShowLink;
- (_Bool)canShowMail;
- (void)updateBioView;
- (void)p_updateUI;
- (void)p_setupUI;
- (void)dealloc;
- (void)liveViewPlay;
- (double)headerViewHeight;
- (void)configWithUser:(id)arg1 isLogSent:(_Bool)arg2;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

