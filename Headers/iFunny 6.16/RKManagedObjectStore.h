//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator;
@protocol RKManagedObjectCaching;

@interface RKManagedObjectStore : NSObject
{
    NSManagedObjectModel *_managedObjectModel;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    id <RKManagedObjectCaching> _managedObjectCache;
    NSManagedObjectContext *_persistentStoreManagedObjectContext;
    NSManagedObjectContext *_mainQueueManagedObjectContext;
}

+ (_Bool)migratePersistentStoreOfType:(id)arg1 atURL:(id)arg2 toModelAtURL:(id)arg3 error:(id *)arg4 configuringModelsWithBlock:(CDUnknownBlockType)arg5;
+ (void)setDefaultStore:(id)arg1;
+ (id)defaultStore;
- (void).cxx_destruct;
@property(retain, nonatomic) NSManagedObjectContext *mainQueueManagedObjectContext; // @synthesize mainQueueManagedObjectContext=_mainQueueManagedObjectContext;
@property(retain, nonatomic) NSManagedObjectContext *persistentStoreManagedObjectContext; // @synthesize persistentStoreManagedObjectContext=_persistentStoreManagedObjectContext;
@property(retain, nonatomic) id <RKManagedObjectCaching> managedObjectCache; // @synthesize managedObjectCache=_managedObjectCache;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (_Bool)resetPersistentStores:(id *)arg1;
- (void)recreateManagedObjectContexts;
- (void)createManagedObjectContexts;
- (id)newChildManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (id)newChildManagedObjectContextWithConcurrencyType:(unsigned long long)arg1 tracksChanges:(_Bool)arg2;
- (_Bool)copySeedDatabaseIfNecessaryFromPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)addSQLitePersistentStoreAtPath:(id)arg1 fromSeedDatabaseAtPath:(id)arg2 withConfiguration:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (id)addInMemoryPersistentStore:(id *)arg1;
- (void)createPersistentStoreCoordinator;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)init;
- (id)initWithManagedObjectModel:(id)arg1;

@end

