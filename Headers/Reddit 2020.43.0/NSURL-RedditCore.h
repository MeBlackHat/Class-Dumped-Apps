//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (RedditCore)
+ (id)redditOAuthURLWithPath:(id)arg1;
+ (id)redditAccountsURLWithPath:(id)arg1;
+ (id)redditOAuthURL;
+ (id)redditGraphQLURL;
+ (id)REDAccountsEndpoint;
+ (id)REDLiveStreamingEndpoint;
+ (id)REDSendbirdEndpoint;
+ (id)REDMetaEndpoint;
+ (id)REDGatewayEndpoint;
+ (id)REDBaseEndpoint;
@property(readonly, nonatomic) _Bool isValidStructuredStylesImageURL;
@property(readonly, nonatomic) NSString *red_linkedLiveStreamId;
@property(readonly, nonatomic) NSString *red_linkedLiveStreamSubredditName;
@property(readonly, nonatomic) NSString *red_subredditNameForPostSubmission;
@property(readonly, nonatomic) _Bool red_isSubmitURL;
@property(readonly, nonatomic) NSString *analyticsCanonicalEndpoint;
@property(readonly, nonatomic) _Bool red_isMailToURL;
@property(readonly, nonatomic) _Bool red_isSubredditSubscriptionURL;
@property(readonly, nonatomic) NSURL *urlWithComponentsForDeepLink;
@property(readonly, nonatomic) NSArray *caseSensitiveNormalizedPathComponents;
@property(readonly, nonatomic) NSArray *normalizedPathComponents;
- (id)normalizedPathComponentsWithTransform:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool red_isOnboardingURL;
@property(readonly, nonatomic) _Bool red_isLiveStreamingGoLiveURL;
@property(readonly, nonatomic) _Bool red_isLiveStreamingURL;
@property(readonly, nonatomic) _Bool red_isRedditVideoURL;
@property(readonly, nonatomic) _Bool red_isRedditPremiumURL;
@property(readonly, nonatomic) _Bool red_isRedditLabelSubredditURL;
@property(readonly, nonatomic) _Bool red_isRedditCoinsURL;
@property(readonly, nonatomic) _Bool red_isExternalURL;
@property(readonly, nonatomic) _Bool red_isAppStoreURL;
@property(readonly, nonatomic) _Bool red_isYouTubeURL;
@property(readonly, nonatomic) _Bool red_isFrontPageURL;
@property(readonly, nonatomic) _Bool red_isRedditURL;
@property(readonly, nonatomic) _Bool red_hasHTTPScheme;
@end

