//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGTVSeriesCreationLoggingContext-Protocol.h>

@class IGUserSession, NSString;

@interface IGTVCreationAnalyticsSession : NSObject <IGTVSeriesCreationLoggingContext>
{
    IGUserSession *_userSession;
    NSString *_liveBroadcastID;
    _Bool _loggedUpsellImpression;
    _Bool _loggedComposerStart;
    NSString *_composerSessionId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *composerSessionId; // @synthesize composerSessionId=_composerSessionId;
- (id)_eventWithName:(id)arg1;
- (void)logComposerSaveDraft;
- (void)logRevshareToggleTooltipDisplayed;
- (void)logRevshareToggleSwitchedTo:(long long)arg1;
- (void)logComposerLibrarySelected;
- (void)_logComposerCaptureError:(long long)arg1;
- (void)logComposerCaptureAction:(long long)arg1;
- (void)logAddToSeries:(long long)arg1;
- (void)logEditProfile:(id)arg1;
- (void)logEditPreview:(id)arg1;
- (void)logComposerEndWithAction:(long long)arg1;
- (void)logTagBusinessPartnerLearnMoreLinkTapped;
- (void)logRemoveBusinessPartnerFromPartnerSearchScreen;
- (void)logTagBusinessPartner;
- (void)logAdvanceSettingsTapped;
- (void)logPostVideoWithDidEnableFeedPreview:(_Bool)arg1 sharedToFacebookDefaultStatus:(_Bool)arg2 sharedToFacebook:(_Bool)arg3 assetSize:(struct CGSize)arg4 uploadedVideoSize:(struct CGSize)arg5 brandedContentUpsellLoggingExtras:(id)arg6;
- (void)logEditMetadataPageStarted;
- (void)logEditCoverFinishedWithAction:(long long)arg1;
- (void)logDismissVideo;
- (void)logInvalidStoryMediaAssetSelected:(id)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
- (void)logInvalidAVAssetSelected:(id)arg1 duration:(double)arg2 minimumDuration:(double)arg3 maximumDuration:(double)arg4;
- (void)logInvalidPHAssetSelected:(id)arg1 minimumDuration:(double)arg2 maximumDuration:(double)arg3;
- (void)logPHAssetSelected:(id)arg1 action:(id)arg2;
- (void)logComposerStartIfNeededFromAction:(long long)arg1;
- (void)logUpsellCompletionWithAction:(long long)arg1;
- (void)logUpsellImpression;
- (id)initWithUserSession:(id)arg1 liveBroadcastID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

