//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSHTTPURLResponse, NSString, WAMMSHeaderTaskPlaintext, WAMMSMediaHeaderPlaintextOperationMetrics, WAMMSMediaHeaderPlaintextRequest, WAMMSTaskSession, WamEventMediaDownload2;
@protocol OS_dispatch_queue, WAMMSMediaHeaderPlaintextOperationDelegate;

@interface WAMMSMediaHeaderPlaintextOperation : NSObject
{
    WAMMSTaskSession *_session;
    NSObject<OS_dispatch_queue> *_queue;
    id <WAMMSMediaHeaderPlaintextOperationDelegate> _delegate;
    NSString *_loggingIdentifier;
    unsigned long long _currentPhase;
    WAMMSHeaderTaskPlaintext *_currentTask;
    unsigned long long _currentRetryCount;
    NSError *_error;
    NSHTTPURLResponse *_response;
    _Bool _isTerminalError;
    WAMMSMediaHeaderPlaintextOperationMetrics *_metrics;
    WamEventMediaDownload2 *_downloadEvent;
    WAMMSMediaHeaderPlaintextRequest *_request;
}

+ (id)downloadEventWithRequest:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) WAMMSMediaHeaderPlaintextRequest *request; // @synthesize request=_request;
- (unsigned long long)currentRetryCount;
- (id)downloadEvent;
- (id)metrics;
- (void)setAndRunCompletionPhaseWithError:(id)arg1 terminal:(_Bool)arg2;
- (void)performCompletionPhase;
- (void)performHeaderRequestPhase;
- (void)runPhase;
- (void)cancel;
- (void)resume;
- (id)initWithRequest:(id)arg1 mmsSession:(id)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)fieldstatCompletionPhaseWithError:(id)arg1;
- (void)fieldstatDownloadingPhaseSuccessWithMetrics:(id)arg1 response:(id)arg2;
- (void)fieldstatDownloadingPhaseFailureWithMetrics:(id)arg1 response:(id)arg2 error:(id)arg3 downloadEventResult:(long long)arg4;
- (id)createDownloadingPhaseRetryEventWithMetrics:(id)arg1 response:(id)arg2 error:(id)arg3 downloadEventResult:(long long)arg4;

@end

