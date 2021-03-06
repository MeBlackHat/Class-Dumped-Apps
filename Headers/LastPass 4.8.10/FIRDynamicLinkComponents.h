//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRDynamicLinkAndroidParameters, FIRDynamicLinkComponentsOptions, FIRDynamicLinkGoogleAnalyticsParameters, FIRDynamicLinkIOSParameters, FIRDynamicLinkItunesConnectAnalyticsParameters, FIRDynamicLinkNavigationInfoParameters, FIRDynamicLinkOtherPlatformParameters, FIRDynamicLinkSocialMetaTagParameters, NSString, NSURL;

@interface FIRDynamicLinkComponents : NSObject
{
    FIRDynamicLinkGoogleAnalyticsParameters *_analyticsParameters;
    FIRDynamicLinkSocialMetaTagParameters *_socialMetaTagParameters;
    FIRDynamicLinkIOSParameters *_iOSParameters;
    FIRDynamicLinkItunesConnectAnalyticsParameters *_iTunesConnectParameters;
    FIRDynamicLinkAndroidParameters *_androidParameters;
    FIRDynamicLinkNavigationInfoParameters *_navigationInfoParameters;
    FIRDynamicLinkOtherPlatformParameters *_otherPlatformParameters;
    FIRDynamicLinkComponentsOptions *_options;
    NSURL *_link;
    NSString *_domain;
}

+ (id)shorteningRequestForLongURL:(id)arg1 options:(id)arg2;
+ (void)sendHTTPRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)shortenURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)componentsWithLink:(id)arg1 domainURIPrefix:(id)arg2;
+ (id)componentsWithLink:(id)arg1 domain:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSURL *link; // @synthesize link=_link;
@property(retain, nonatomic) FIRDynamicLinkComponentsOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) FIRDynamicLinkOtherPlatformParameters *otherPlatformParameters; // @synthesize otherPlatformParameters=_otherPlatformParameters;
@property(retain, nonatomic) FIRDynamicLinkNavigationInfoParameters *navigationInfoParameters; // @synthesize navigationInfoParameters=_navigationInfoParameters;
@property(retain, nonatomic) FIRDynamicLinkAndroidParameters *androidParameters; // @synthesize androidParameters=_androidParameters;
@property(retain, nonatomic) FIRDynamicLinkItunesConnectAnalyticsParameters *iTunesConnectParameters; // @synthesize iTunesConnectParameters=_iTunesConnectParameters;
@property(retain, nonatomic) FIRDynamicLinkIOSParameters *iOSParameters; // @synthesize iOSParameters=_iOSParameters;
@property(retain, nonatomic) FIRDynamicLinkSocialMetaTagParameters *socialMetaTagParameters; // @synthesize socialMetaTagParameters=_socialMetaTagParameters;
@property(retain, nonatomic) FIRDynamicLinkGoogleAnalyticsParameters *analyticsParameters; // @synthesize analyticsParameters=_analyticsParameters;
@property(readonly, nonatomic) NSURL *url;
- (void)shortenWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithLink:(id)arg1 domainURIPrefix:(id)arg2;
- (id)initWithLink:(id)arg1 domain:(id)arg2;

@end

