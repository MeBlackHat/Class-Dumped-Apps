//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveTwoLevelBufferedQueueDelegate-Protocol.h>

@class IGLiveCommentModel, IGLiveCommentViewUpdater, IGLiveTwoLevelBufferedQueue, NSString;

@interface IGLiveRequestToJoinCommentsUpdater : NSObject <IGLiveTwoLevelBufferedQueueDelegate>
{
    _Bool _requestToJoinCommentsEnabled;
    IGLiveTwoLevelBufferedQueue *_bufferedQueue;
    IGLiveCommentViewUpdater *_commentViewUpdater;
    IGLiveCommentModel *_requestToJoinComment;
}

+ (void)_batchUpdates:(id)arg1 callback:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool requestToJoinCommentsEnabled; // @synthesize requestToJoinCommentsEnabled=_requestToJoinCommentsEnabled;
@property(retain, nonatomic) IGLiveCommentModel *requestToJoinComment; // @synthesize requestToJoinComment=_requestToJoinComment;
@property(retain, nonatomic) IGLiveCommentViewUpdater *commentViewUpdater; // @synthesize commentViewUpdater=_commentViewUpdater;
@property(retain, nonatomic) IGLiveTwoLevelBufferedQueue *bufferedQueue; // @synthesize bufferedQueue=_bufferedQueue;
- (void).cxx_destruct;
- (_Bool)shouldUpdate;
- (_Bool)shouldFlushWithBuffer:(id)arg1;
- (void)bufferedQueueDidFlush:(id)arg1;
- (void)bufferedQueueDidUpdate:(id)arg1;
- (void)updateWithNewCount:(long long)arg1 users:(id)arg2 totalCount:(long long)arg3;
- (id)initWithCommentViewUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

