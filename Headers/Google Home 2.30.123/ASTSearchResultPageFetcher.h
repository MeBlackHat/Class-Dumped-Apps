//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASTAPIShowSearchResultsPageArgs, ASTAndGateExecutor, ASTLogService, GTMSessionFetcher, NSData, NSString, PinholeParams, TtsServiceRequest;
@protocol ASTAuthProvider;

@interface ASTSearchResultPageFetcher : NSObject
{
    unsigned int _prefetchSequence;
    NSString *_queryString;
    TtsServiceRequest *_ttsRequest;
    id <ASTAuthProvider> _authProvider;
    ASTAPIShowSearchResultsPageArgs *_srpArgs;
    ASTAndGateExecutor *_andGateExecutor;
    GTMSessionFetcher *_fetcher;
    GTMSessionFetcher *_Gen204Fetcher;
    PinholeParams *_pinholeParams;
    ASTLogService *_logService;
    NSString *_eventID;
}

+ (id)ttsRequestFromDeferredTextToSpeechAudio:(id)arg1;
+ (id)queryItemsFromPinholeParams:(id)arg1 queryString:(id)arg2;
+ (id)requestForQueryString:(id)arg1 pinholeParams:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(nonatomic) unsigned int prefetchSequence; // @synthesize prefetchSequence=_prefetchSequence;
@property(retain, nonatomic) ASTLogService *logService; // @synthesize logService=_logService;
@property(retain, nonatomic) PinholeParams *pinholeParams; // @synthesize pinholeParams=_pinholeParams;
@property(retain, nonatomic) GTMSessionFetcher *Gen204Fetcher; // @synthesize Gen204Fetcher=_Gen204Fetcher;
@property(retain, nonatomic) GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) ASTAndGateExecutor *andGateExecutor; // @synthesize andGateExecutor=_andGateExecutor;
@property(retain, nonatomic) ASTAPIShowSearchResultsPageArgs *srpArgs; // @synthesize srpArgs=_srpArgs;
@property(nonatomic) __weak id <ASTAuthProvider> authProvider; // @synthesize authProvider=_authProvider;
@property(readonly, nonatomic) TtsServiceRequest *ttsRequest; // @synthesize ttsRequest=_ttsRequest;
@property(readonly, copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (void)parseSRPBody:(id)arg1;
- (void)markPrefetchResultAsFinal;
- (void)didReceiveSRPBody:(id)arg1 headers:(id)arg2 queryString:(id)arg3;
- (id)requestFromPinholeParams:(id)arg1;
- (id)authorizer;
@property(readonly, nonatomic) NSData *data;
- (void)showSearchResultPageWhenReadyWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSearchResultPageForQueryString:(id)arg1 pinholeParams:(id)arg2;
- (id)initWithAuthProvider:(id)arg1 logService:(id)arg2;

@end

