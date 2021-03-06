//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGDirectRealtimeMessageDispatcherWithTimeout;
@protocol IGAPIClient, IGNetworkingConnectionManagerProtocol, IGRealtimeStatusQuerying;

@interface IGDirectMutationNetworker : NSObject
{
    id <IGRealtimeStatusQuerying> _realtimeStatusQuerier;
    id <IGNetworkingConnectionManagerProtocol> _networkConnectionManager;
    id <IGAPIClient> _networker;
    IGDirectRealtimeMessageDispatcherWithTimeout *_realtimeDispatcher;
    CDUnknownBlockType _realtimeTimeoutProvider;
}

- (void).cxx_destruct;
- (void)_httpSendRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_realtimeSendPayload:(id)arg1 mutationId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)performNetworkRequestWithDataProvider:(id)arg1 mutationId:(id)arg2 previousAttemptRoute:(unsigned long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRealtimeStatusQuerier:(id)arg1 networkConnectionManager:(id)arg2 realtimeDispatcher:(id)arg3 networker:(id)arg4 realtimeTimeoutProvider:(CDUnknownBlockType)arg5;

@end

