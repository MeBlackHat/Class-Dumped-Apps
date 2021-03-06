//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/FCDRPCAPIKeyAuthorizer-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface FCDRPCAPIKeyAuthorizer : NSObject <FCDRPCAPIKeyAuthorizer>
{
    NSString *_apiKey;
    NSObject<OS_dispatch_queue> *_authorizerQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authorizerQueue; // @synthesize authorizerQueue=_authorizerQueue;
- (void).cxx_destruct;
- (void)authorizeRPCRequest:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithAPIKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

