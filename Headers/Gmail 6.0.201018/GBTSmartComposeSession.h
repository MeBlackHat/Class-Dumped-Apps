//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XPTTrace;
@protocol JBTAssistedWritingSuggestionFetcher, JBTConversationMessageDraft, XPTTraceSampler;

@interface GBTSmartComposeSession : NSObject
{
    _Bool _newDraft;
    _Bool _sessionStarted;
    unsigned int _inverseSamplingProbability;
    id <JBTConversationMessageDraft> _draft;
    NSString *_previousMessageBody;
    id <JBTAssistedWritingSuggestionFetcher> _suggestionFetcher;
    XPTTrace *_trace;
    id <XPTTraceSampler> _traceSampler;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <XPTTraceSampler> traceSampler; // @synthesize traceSampler=_traceSampler;
@property(retain, nonatomic) XPTTrace *trace; // @synthesize trace=_trace;
@property(retain, nonatomic) id <JBTAssistedWritingSuggestionFetcher> suggestionFetcher; // @synthesize suggestionFetcher=_suggestionFetcher;
@property(copy, nonatomic) NSString *previousMessageBody; // @synthesize previousMessageBody=_previousMessageBody;
@property(nonatomic) _Bool sessionStarted; // @synthesize sessionStarted=_sessionStarted;
@property(nonatomic) _Bool newDraft; // @synthesize newDraft=_newDraft;
@property(nonatomic) unsigned int inverseSamplingProbability; // @synthesize inverseSamplingProbability=_inverseSamplingProbability;
@property(retain, nonatomic) id <JBTConversationMessageDraft> draft; // @synthesize draft=_draft;
- (id)RFC2822FormattedListForRecipientList:(id)arg1;
- (id)JBTSmartcomposeDismissEvent_TypeForJSONIntegerValue:(long long)arg1;
- (void)logSuggestionEventWithImpressionHint:(id)arg1;
- (void)logSuggestionEventWithDismissHint:(id)arg1 dismissEventType:(id)arg2;
- (void)logSuggestionEventWithClickHint:(id)arg1;
- (void)logSuggestionEventsForJSONRequest:(id)arg1;
- (id)loadSuggestionsForJSONRequest:(id)arg1;
- (_Bool)endSessionWithReason:(unsigned long long)arg1;
- (void)startSession;
- (id)init;
- (id)initWithConversationMessageDraft:(id)arg1 newDraft:(_Bool)arg2 previousMessageBody:(id)arg3 traceSampler:(id)arg4 inverseSamplingProbability:(unsigned int)arg5;
- (id)initWithConversationMessageDraft:(id)arg1 newDraft:(_Bool)arg2 previousMessageBody:(id)arg3;

@end

