//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AIAuthenticationDelegate-Protocol.h"
#import "AIMobileAdsWebRequestDelegate-Protocol.h"

@class AIAccessToken, AIMobileAdsConfiguration, AIMobileAdsDebugProperties, AIMobileAdsIdentifiers, AIMobileAdsJsonUtil, AIMobileAdsMAPHelper, AIMobileAdsThreadRunner, AIMobileAdsTimestamp, AIMobileAdsWebRequestFactory, NSString;
@protocol AIMobileAdsUserIdentifierDelegate;

@interface AIMobileAdsUserIdentifier : NSObject <AIMobileAdsWebRequestDelegate, AIAuthenticationDelegate>
{
    id <AIMobileAdsUserIdentifierDelegate> _delegate;
    AIMobileAdsConfiguration *_configuration;
    AIMobileAdsDebugProperties *_debugProperties;
    long long _identifyUserStatus;
    AIAccessToken *_accessToken;
    AIMobileAdsWebRequestFactory *_webRequestFactory;
    AIMobileAdsJsonUtil *_jsonUtil;
    AIMobileAdsIdentifiers *_identifiers;
    AIMobileAdsMAPHelper *_mapHelper;
    AIMobileAdsTimestamp *_timestamp;
    AIMobileAdsThreadRunner *_threadRunner;
}

@property(retain, nonatomic) AIMobileAdsThreadRunner *threadRunner; // @synthesize threadRunner=_threadRunner;
@property(retain, nonatomic) AIMobileAdsTimestamp *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) AIMobileAdsMAPHelper *mapHelper; // @synthesize mapHelper=_mapHelper;
@property(retain, nonatomic) AIMobileAdsIdentifiers *identifiers; // @synthesize identifiers=_identifiers;
@property(retain, nonatomic) AIMobileAdsJsonUtil *jsonUtil; // @synthesize jsonUtil=_jsonUtil;
@property(retain, nonatomic) AIMobileAdsWebRequestFactory *webRequestFactory; // @synthesize webRequestFactory=_webRequestFactory;
@property(retain, nonatomic) AIAccessToken *accessToken; // @synthesize accessToken=_accessToken;
@property long long identifyUserStatus; // @synthesize identifyUserStatus=_identifyUserStatus;
@property(nonatomic) __weak AIMobileAdsDebugProperties *debugProperties; // @synthesize debugProperties=_debugProperties;
@property(nonatomic) __weak AIMobileAdsConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) id <AIMobileAdsUserIdentifierDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFailAccessTokenRetrievalWithError:(id)arg1;
- (void)didRetrieveAccessToken:(id)arg1;
- (void)errorReceived:(id)arg1 withStatusCode:(long long)arg2;
- (void)handleResponse:(id)arg1;
- (void)responseReceived:(id)arg1;
- (void)identifyUserFailed:(id)arg1;
- (void)identifyUserSucceeded;
- (void)interpretError:(id)arg1;
- (void)updateIdentifyUserTime;
- (id)getParameters;
- (_Bool)getShouldUseSecure;
- (id)getIdentifyUserHost;
- (void)makeIdentifyUserCall;
- (void)startUserIdentify;
- (void)startUserIdentityThread;
- (_Bool)shouldIdentifyUserBasedOnLastAttemptTimeWithCurrentTime:(double)arg1;
- (_Bool)shouldIdentifyUserBasedOnLastIdentifyUserTimeWithCurrentTime:(double)arg1 withInterval:(double)arg2;
- (_Bool)shouldIdentifyUser;
- (void)identifyUserWithAccessToken:(id)arg1;
- (id)initWithConfiguration:(id)arg1 withDebugProperties:(id)arg2 withWebRequestFactory:(id)arg3 withJsonUtil:(id)arg4 withIdentifiers:(id)arg5 withMAPHelper:(id)arg6 withTimestamp:(id)arg7 withThreadRunner:(id)arg8;
- (id)initWithConfiguration:(id)arg1 withDebugProperties:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

