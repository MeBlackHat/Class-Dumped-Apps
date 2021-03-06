//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AMIPrimeService-Protocol.h"

@class NSString, NSURL, NSURLSession;

@interface AMIPrimeServiceHTTPImpl : NSObject <AMIPrimeService>
{
    NSURLSession *_session;
    NSURL *_endpoint;
    NSString *_requestPath;
    NSString *_requestQuery;
}

@property(readonly, nonatomic) NSString *requestQuery; // @synthesize requestQuery=_requestQuery;
@property(readonly, nonatomic) NSString *requestPath; // @synthesize requestPath=_requestPath;
@property(readonly, nonatomic) NSURL *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)dispatchAsyncOnMainQueue:(CDUnknownBlockType)arg1;
- (id)parseFacetStatusFromJSON:(id)arg1;
- (id)buildRequestWithAccessToken:(id)arg1;
- (id)callBenefitFacetStatusSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2 accessToken:(id)arg3;
- (id)getBenefitFacetStatusSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithEndpoint:(id)arg1 session:(id)arg2 requestPath:(id)arg3 requestQuery:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

