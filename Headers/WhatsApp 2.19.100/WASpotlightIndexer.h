//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInvocation, NSPredicate, NSString, WASpotlightManager, WAStorage, WATask;

@interface WASpotlightIndexer : NSObject
{
    WAStorage *_storage;
    WATask *_taskIndex;
    NSInvocation *_keyInvocation;
    unsigned long long _itemsPerRequest;
    NSPredicate *_resetPredicate;
    WASpotlightManager *_manager;
    NSString *_domainPrefix;
    Class _entityClass;
}

@property(readonly, nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
@property(readonly, copy, nonatomic) NSString *domainPrefix; // @synthesize domainPrefix=_domainPrefix;
- (void).cxx_destruct;
- (id)internalFetchItemsWithBaseRequest:(id)arg1 context:(id)arg2;
- (_Bool)internalIndexSomeItemsUsingContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalResetItemsMatchingPredicate:(id)arg1 context:(id)arg2;
- (id)internalFetchObjectIDsForItemIdentifiers:(id)arg1 context:(id)arg2;
- (void)internalResetSearchableItems:(id)arg1 context:(id)arg2;
- (_Bool)internalRunTaskWithCompletion:(CDUnknownBlockType)arg1;
- (id)internalChatPresenterForItemIdentifier:(id)arg1;
- (id)searchableItemForIndexableItem:(id)arg1 usingItemIdentifier:(id)arg2;
- (void)reindexSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeItemsWithItemIdentifiers:(id)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (void)setNeedsIndexing;
- (_Bool)contextContainsUnindexedItems:(id)arg1;
- (id)uniqueIdentifierForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexableItem:(id)arg1;
@property(readonly, nonatomic) __weak WASpotlightManager *manager; // @synthesize manager=_manager;
- (void)assignManager:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)dealloc;
- (id)initWithUniqueDomain:(id)arg1 storage:(id)arg2 entityType:(Class)arg3 keySelector:(SEL)arg4 countPerRequest:(unsigned long long)arg5 resetPredicate:(id)arg6;

@end

