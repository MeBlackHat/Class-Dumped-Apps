//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGNetworkSourceDelegate-Protocol.h>

@class IGNetworkSource, IGUserSession, NSArray, NSString;
@protocol IGLiveSuggestionBroadcastDataSourceDelegate;

@interface IGLiveSuggestionBroadcastDataSource : NSObject <IGNetworkSourceDelegate>
{
    IGUserSession *_userSession;
    IGNetworkSource *_networkSource;
    NSString *_apiPath;
    _Bool _isLoading;
    NSArray *_liveBroadcasts;
    NSArray *_liveNowV2Broadcasts;
    NSArray *_postLiveBroadcasts;
    id <IGLiveSuggestionBroadcastDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak id <IGLiveSuggestionBroadcastDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *postLiveBroadcasts; // @synthesize postLiveBroadcasts=_postLiveBroadcasts;
@property(readonly, copy, nonatomic) NSArray *liveNowV2Broadcasts; // @synthesize liveNowV2Broadcasts=_liveNowV2Broadcasts;
@property(readonly, copy, nonatomic) NSArray *liveBroadcasts; // @synthesize liveBroadcasts=_liveBroadcasts;
- (void)networkSource:(id)arg1 didFailWithError:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (void)networkSource:(id)arg1 didFetchObject:(id)arg2 httpResponse:(id)arg3 isPrefetch:(_Bool)arg4;
- (id)networkSource:(id)arg1 requestWithMaxID:(id)arg2 isPrefetch:(_Bool)arg3;
- (void)fetch;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

