//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (RedditCore)
+ (id)canonicalPathComponentsFromPermalink:(id)arg1;
+ (id)redditAccountsURLWithPath:(id)arg1;
+ (id)redditGraphQLURL;
+ (id)REDAccountsEndpoint;
+ (id)REDLiveStreamingEndpoint;
+ (id)REDSendbirdEndpoint;
+ (id)REDMetaEndpoint;
+ (id)REDGatewayEndpoint;
+ (id)REDBaseEndpoint;
@property(readonly, nonatomic) _Bool isValidStructuredStylesImageURL;
@property(readonly, nonatomic) NSString *red_emailVerificationCode;
@property(readonly, nonatomic) NSString *red_linkedLiveStreamId;
@property(readonly, nonatomic) NSString *red_linkedLiveStreamSubredditName;
@property(readonly, nonatomic) NSString *red_linkedSubredditWikiPathName;
@property(readonly, nonatomic) NSString *red_linkedSitewideWikiPathName;
@property(readonly, nonatomic) NSString *red_linkedPostId;
@property(readonly, nonatomic) NSString *red_linkedCommentId;
@property(readonly, nonatomic) NSString *subredditNameURLComponent;
@property(readonly, nonatomic) NSString *postIDURLComponentFromCommentDeeplink;
@property(readonly, nonatomic) NSString *postIDURLComponentFromPostDeeplink;
@property(readonly, nonatomic) NSString *userNameURLComponent;
@property(readonly, nonatomic) NSString *analyticsCanonicalEndpoint;
@property(readonly, nonatomic) unsigned long long deepLinkType;
@property(readonly, nonatomic) _Bool red_isMailToURL;
@property(readonly, nonatomic) _Bool red_isShareableChatURL;
@property(readonly, nonatomic) _Bool red_isDirectChatURL;
@property(readonly, nonatomic) _Bool red_isSubredditSubscriptionURL;
@property(readonly, nonatomic) _Bool red_isSubredditChatURL;
@property(readonly, nonatomic) _Bool red_isChatURL;
- (id)urlWithComponentsForDeepLink;
@property(readonly, nonatomic) NSArray *caseSensitiveNormalizedPathComponents;
@property(readonly, nonatomic) NSArray *normalizedPathComponents;
- (id)normalizedPathComponentsWithTransform:(CDUnknownBlockType)arg1;
- (id)sendbirdChannelPrefixString:(id)arg1;
@property(readonly, nonatomic) NSString *channelURLComponent;
- (_Bool)red_isOnboardingURL;
@property(readonly, nonatomic) _Bool red_isLiveStreamingURL;
@property(readonly, nonatomic) _Bool red_isRedditVideoURL;
@property(readonly, nonatomic) _Bool red_isRedditPremiumURL;
@property(readonly, nonatomic) _Bool red_isRedditCoinsURL;
@property(readonly, nonatomic) _Bool red_isAppStoreURL;
@property(readonly, nonatomic) _Bool red_isYouTubeURL;
@property(readonly, nonatomic) _Bool red_isFrontPageURL;
@property(readonly, nonatomic) _Bool red_isExternalURL;
@property(readonly, nonatomic) _Bool red_isRedditURL;
@property(readonly, nonatomic) _Bool red_hasHTTPScheme;
@end

