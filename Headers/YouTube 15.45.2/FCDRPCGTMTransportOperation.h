//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/FCDRPCTransportOperation-Protocol.h>

@class FCDRPCRequest, GTMSessionFetcher, GTMSessionFetcherService;

@interface FCDRPCGTMTransportOperation : NSObject <FCDRPCTransportOperation>
{
    _Bool _started;
    _Bool _cancelled;
    FCDRPCRequest *_request;
    GTMSessionFetcherService *_fetcherService;
    GTMSessionFetcher *_runningFetcher;
}

- (void).cxx_destruct;
@property(retain) GTMSessionFetcher *runningFetcher; // @synthesize runningFetcher=_runningFetcher;
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(readonly, nonatomic) FCDRPCRequest *request; // @synthesize request=_request;
- (void)encodingAndSetHeaders:(id)arg1 toRequest:(id)arg2;
- (id)urlRequestWithRPCContext:(id)arg1;
- (id)annotatedRPCStatusErrorForError:(id)arg1 responseHeaders:(id)arg2 responseData:(id)arg3;
- (id)annotatedTimeoutErrorForError:(id)arg1 rpcContext:(id)arg2 callStartDate:(id)arg3 responseDate:(id)arg4;
- (id)annotatedHTTPStatusErrorForError:(id)arg1;
- (void)cancelRequest;
- (void)respondToRequestWithError:(id)arg1;
- (void)cancel;
- (void)startWithContext:(id)arg1;
- (id)initWithRequest:(id)arg1 fetcherService:(id)arg2;

@end

