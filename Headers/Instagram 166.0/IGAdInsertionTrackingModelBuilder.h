//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IGAdInsertionTrackingModelBuilder : NSObject
{
    long long _itemType;
    NSString *_itemId;
    NSString *_sponsoredId;
    long long _currentState;
    long long _insertionIndex;
    long long _priorityIndex;
    NSString *_adPodId;
    NSDictionary *_mediaSeenStates;
    _Bool _wasCachedInPool;
    _Bool _isPrefetch;
}

+ (id)adInsertionTrackingModelFromExistingAdInsertionTrackingModel:(id)arg1;
+ (id)adInsertionTrackingModel;
- (void).cxx_destruct;
- (id)withIsPrefetch:(_Bool)arg1;
- (id)withWasCachedInPool:(_Bool)arg1;
- (id)withMediaSeenStates:(id)arg1;
- (id)withAdPodId:(id)arg1;
- (id)withPriorityIndex:(long long)arg1;
- (id)withInsertionIndex:(long long)arg1;
- (id)withCurrentState:(long long)arg1;
- (id)withSponsoredId:(id)arg1;
- (id)withItemId:(id)arg1;
- (id)withItemType:(long long)arg1;
- (id)build;

@end

