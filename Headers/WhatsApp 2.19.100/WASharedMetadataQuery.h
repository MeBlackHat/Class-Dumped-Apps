//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMetadataQuery, WACloudBackupManager_Documents;

@interface WASharedMetadataQuery : NSObject
{
    _Bool _finishedGathering;
    NSMetadataQuery *_internalQuery;
    WACloudBackupManager_Documents *_manager;
    unsigned long long _queryRetainCount;
    CDUnknownBlockType _creator;
}

@property(copy, nonatomic) CDUnknownBlockType creator; // @synthesize creator=_creator;
@property(nonatomic) unsigned long long queryRetainCount; // @synthesize queryRetainCount=_queryRetainCount;
@property(nonatomic) __weak WACloudBackupManager_Documents *manager; // @synthesize manager=_manager;
@property(nonatomic, getter=isFinishedGathering) _Bool finishedGathering; // @synthesize finishedGathering=_finishedGathering;
- (void).cxx_destruct;
- (void)jidDidChange:(id)arg1;
- (void)cloudAccountChanged:(id)arg1;
- (void)queryReady:(id)arg1;
- (void)queryUpdated:(id)arg1;
- (void)postUpdatedNotification;
- (void)restartQuery;
- (void)stopQuery;
- (void)startQuery;
- (void)startInternalQuery;
@property(retain, nonatomic) NSMetadataQuery *internalQuery; // @synthesize internalQuery=_internalQuery;
- (void)dealloc;
- (id)initWithManager:(id)arg1 queryCreator:(CDUnknownBlockType)arg2;
- (id)init;

@end

