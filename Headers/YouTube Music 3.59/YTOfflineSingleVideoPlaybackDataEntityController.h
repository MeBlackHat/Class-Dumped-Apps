//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTOfflineEntityController-Protocol.h"

@class GIMMe, GPCPromise, NSString, YTIOfflineOrchestrationAction, YTIPlaybackDataEntityActionMetadata;

@interface YTOfflineSingleVideoPlaybackDataEntityController : NSObject <YTOfflineEntityController>
{
    GPCPromise *_executingActionPromise;
    YTIOfflineOrchestrationAction *_executingAction;
    NSString *_executingActionVideoID;
    YTIPlaybackDataEntityActionMetadata *_executingActionPlaybackDataActionMetadata;
    GIMMe *_gimme;
}

+ (long long)entityType;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)resolveActionWithResult:(id)arg1;
- (void)unsuccessfullyResolveActionWithRetryable:(_Bool)arg1;
- (void)successfullyResolveActionWithAdditionalActions:(id)arg1;
- (void)successfullyResolveAction;
- (void)storePlayerResponse:(id)arg1;
- (void)fetchAndStorePlayerResponse;
- (void)refreshEntity;
- (void)updateEntity;
- (void)deleteEntity;
- (void)addEntity;
- (void)executeAction;
- (id)handleAction:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

