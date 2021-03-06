//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEAwemeModel, AWEAwemePlayInteractionPresenter, NSDictionary, NSLock, NSString;

@interface AWEAwemePlayInteractionInteractor : NSObject <AWEUserMessage>
{
    _Bool _hasEnterFullScreen;
    _Bool _isLiveBlocked;
    _Bool _followFromCurrentPage;
    AWEAwemePlayInteractionPresenter *_presenter;
    NSString *_referString;
    NSString *_pageTypeString;
    NSString *_enterFrom;
    unsigned long long _feedType;
    NSString *_adEventName;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    AWEAwemeModel *_originModel;
    NSDictionary *_logExtraDict;
    long long _shareSceneType;
    long long _fromPageType;
    NSLock *_diggLock;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool followFromCurrentPage; // @synthesize followFromCurrentPage=_followFromCurrentPage;
@property(nonatomic) _Bool isLiveBlocked; // @synthesize isLiveBlocked=_isLiveBlocked;
@property(retain, nonatomic) NSLock *diggLock; // @synthesize diggLock=_diggLock;
@property(nonatomic) long long fromPageType; // @synthesize fromPageType=_fromPageType;
@property(nonatomic) long long shareSceneType; // @synthesize shareSceneType=_shareSceneType;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(retain, nonatomic) AWEAwemeModel *originModel; // @synthesize originModel=_originModel;
@property(retain, nonatomic) AWEAwemeModel *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasEnterFullScreen; // @synthesize hasEnterFullScreen=_hasEnterFullScreen;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSString *pageTypeString; // @synthesize pageTypeString=_pageTypeString;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) __weak AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
- (void)checkIfShouldShowShareAnimationWhenDigg;
- (void)checkIfShouldShowShareAnimationWithPlayTimes:(long long)arg1;
- (void)downloadFromLongPress;
- (void)addProcessIdcToParams:(id)arg1 url:(id)arg2;
- (void)handleAdsOnAuthorLabelClicked;
- (void)trackOnMusicButtonClickedEvent;
- (id)moreButtonIconString;
- (_Bool)checkCanShowShareOrMorePanel;
- (void)FIRAnalyticsLogLikeClickEvent;
- (void)p_canEnterLiveRoom:(CDUnknownBlockType)arg1;
- (id)shareWhatsAppManager;
- (void)trackRelationRecommend:(id)arg1;
- (void)trackLiveShow;
- (void)trackerAvatarLiveStateChange;
- (void)onTopStatusChangeNotification:(id)arg1;
- (void)onSyncLiveUserNotification:(id)arg1;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)onLiveBlockAudienceNotication:(id)arg1;
- (_Bool)isActive;
- (void)onCommentTotalCountNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentDeleteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentAddNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onFollowStatusChanged:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)cancelDislikeVideo;
- (void)dislikeVideoFromUnfollowAcq;
- (void)dislikeVideoFromLongPress;
- (void)toggleFavoriteFromLongPress;
- (void)reportFromLongPress;
- (void)checkIfShouldShowWhatsAppShareAnimationWithPlayTimes:(long long)arg1;
- (_Bool)showShareAnimationIfNeedWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)handleVideo:(id)arg1 accept:(_Bool)arg2;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdOperationViewClicked:(id)arg1;
- (id)getTagIdForHashtag:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1 contentSource:(id)arg2;
- (void)onVastButtonTapped:(id)arg1;
- (void)onI18NMovieButtonTapped:(id)arg1;
- (void)onStickerLabelClicked:(id)arg1;
- (void)onMvLabelClicked:(id)arg1;
- (void)onGoodsLinkLabelClicked:(id)arg1;
- (void)p_onCommenAnchorClicked:(id)arg1 type:(long long)arg2;
- (void)onTripAdvisorClicked:(id)arg1;
- (void)onYelpClicked:(id)arg1;
- (void)onWikipediaLabelClicked:(id)arg1;
- (void)onOpenPlatformAnchorClicked:(id)arg1;
- (void)onChallengeLabelClicked:(id)arg1;
- (void)onMusicInfoLabelClicked:(id)arg1 trackerDict:(id)arg2;
- (void)onMusicButtonClicked:(id)arg1 trackerDict:(id)arg2;
- (id)makeExtraLogInfoForSharing;
- (void)didShowShareView:(id)arg1;
- (void)showMorePanel;
- (void)showIMSharePanel;
- (void)showSharePanel;
- (CDUnknownBlockType)shareConfigurationHandler;
- (void)onMoreButtonTapped:(id)arg1;
- (void)onShareButtonTapped:(id)arg1;
- (void)trackClickMoreButton;
- (void)trackClickShareButton;
- (void)p_trackAdsOnCommentClick;
- (void)onCommentButtonClicked:(id)arg1;
- (void)onLikeButtonClicked:(id)arg1;
- (_Bool)_canFollow;
- (void)onUnInterestBtnClicked:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onFollowViewClicked:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)enterLiveRoom:(CDUnknownBlockType)arg1;
- (void)canEnterLiveRoom:(CDUnknownBlockType)arg1;
- (void)onAttractionViewShowed;
- (void)onUserAvatarViewClicked:(id)arg1 enterLiveRoomBlock:(CDUnknownBlockType)arg2;
- (void)onUserAvatarViewClicked:(id)arg1 contentSource:(id)arg2 enterLiveRoomBlock:(CDUnknownBlockType)arg3;
- (id)p_playOrder;
- (id)p_playbackTimeInMS;
- (void)addClickSearchResultVideoTrackForParams:(id)arg1;
- (_Bool)p_isUnfollowFamiliar;
- (_Bool)p_isRepostAweme;
- (_Bool)p_isLongItem;
- (void)p_trackFollowEventWithMethod:(id)arg1;
- (void)trackFollowEvent;
- (void)trackLikeEventType:(long long)arg1 enterMethod:(id)arg2 triggerLogin:(_Bool)arg3 diggStatusUnchange:(_Bool)arg4;
- (void)trackLikeEventType:(long long)arg1 enterMethod:(id)arg2 triggerLogin:(_Bool)arg3;
- (void)trackLikeEventType:(long long)arg1 enterMethod:(id)arg2;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6 inFollowFeed:(_Bool)arg7;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6 inFollowFeed:(_Bool)arg7 ignoreUnlogin:(_Bool)arg8 animationBlock:(CDUnknownBlockType)arg9;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

