//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGListDiffable-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaDeletedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaHiddenListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySharePostListener-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayEditableDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayLoggingContextDataSource-Protocol.h>

@class IGObjectDiskStorage, IGStoryTrayDataSourceAnnouncer, IGSuggestedHighlightsDataSource, IGUserSession, NSArray, NSOrderedSet, NSString;

@interface IGHighlightsStoryTrayDataSource : NSObject <IGStorySharePostListener, IGMediaHiddenListener, IGMediaDeletedListener, IGStoryTrayDataSource, IGStoryTrayEditableDataSource, IGListDiffable, IGStoryTrayLoggingContextDataSource>
{
    NSString *_userPK;
    IGUserSession *_userSession;
    IGStoryTrayDataSourceAnnouncer *_announcer;
    NSArray *_reels;
    NSOrderedSet *_reelPKs;
    NSArray *_trayViewModelsForLoggingContext;
    _Bool _allowCaching;
    _Bool _suggestedHighlightsEnabled;
    _Bool _hasInitiatedFetch;
    IGObjectDiskStorage *_storageHighlightStoryTray;
    _Bool _isFetching;
    _Bool _showEmptyTray;
    IGSuggestedHighlightsDataSource *_suggestedHighlightsDataSource;
    long long _suggestedHighlightsUnseenCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long suggestedHighlightsUnseenCount; // @synthesize suggestedHighlightsUnseenCount=_suggestedHighlightsUnseenCount;
@property(readonly, nonatomic) IGSuggestedHighlightsDataSource *suggestedHighlightsDataSource; // @synthesize suggestedHighlightsDataSource=_suggestedHighlightsDataSource;
@property(readonly, nonatomic) _Bool showEmptyTray; // @synthesize showEmptyTray=_showEmptyTray;
@property(readonly, nonatomic) NSArray *reels; // @synthesize reels=_reels;
@property(readonly, nonatomic) _Bool isFetching; // @synthesize isFetching=_isFetching;
- (void)removeFeedItems:(id)arg1 fromReelPK:(id)arg2 entryPoint:(long long)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)addFeedItems:(id)arg1 toReelPK:(id)arg2 entryPoint:(long long)arg3 onComplete:(CDUnknownBlockType)arg4;
- (void)createNewReelWithFeedItems:(id)arg1 title:(id)arg2 coverMediaID:(id)arg3 cropRect:(struct CGRect)arg4 entryPoint:(long long)arg5 creationToken:(id)arg6 onComplete:(CDUnknownBlockType)arg7;
- (void)createNewReelWithFeedItems:(id)arg1 title:(id)arg2 coverMediaID:(id)arg3 cropRect:(struct CGRect)arg4 coverUploadID:(id)arg5 entryPoint:(long long)arg6 creationToken:(id)arg7 suggestedReelID:(id)arg8 onComplete:(CDUnknownBlockType)arg9;
- (void)storyItemPosted:(id)arg1 videoFileURL:(id)arg2 shareTypeInt:(long long)arg3 mediaData:(id)arg4 postShareId:(id)arg5 reelOwner:(id)arg6;
- (void)mediaHiddenFeedItem:(id)arg1 sourceModule:(id)arg2 storyReelPK:(id)arg3;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)_removeFeedItemFromReels:(id)arg1;
- (void)_deserializeCache;
- (void)_serializeResponse:(id)arg1;
- (void)_updateWithReels:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)storyTrayViewModelsForLoggingContext;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
- (id)allItemsForTray;
@property(readonly, nonatomic) _Bool trayShouldScrollToEndOnDismiss;
- (void)removeReelWithPK:(id)arg1;
- (void)clearSuggestedHighlights;
- (void)updateTray:(id)arg1;
- (void)updateExistingReel:(id)arg1 moveToFront:(_Bool)arg2;
- (void)updateWithNewReel:(id)arg1;
@property(readonly, nonatomic) _Bool isEmpty;
- (_Bool)tryFetchInitial;
- (void)fetch;
- (id)initWithUserPK:(id)arg1 userSession:(id)arg2 allowCaching:(_Bool)arg3 diskManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

