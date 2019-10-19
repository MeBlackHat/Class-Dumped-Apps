//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAActionManager.h"

#import "WAUpgradeCallback-Protocol.h"

@class NSMutableArray, NSString, WABackupInformation, WABackupKeyManager, WAChatStorage, WACloudBackupManager, WACloudStatus, WATriggeredOperation, XMPPPassiveModeExclusiveConnection;

@interface WARestore : WAActionManager <WAUpgradeCallback>
{
    id _cloudStatusListener;
    _Bool _shouldRestore;
    WATriggeredOperation *_delayedStart;
    NSMutableArray *_untarOperations;
    NSMutableArray *_cryptOperations;
    NSString *_localRestorePath;
    unsigned long long _backgroundTask;
    _Bool _additionalSpaceRequired;
    unsigned long long _size;
    unsigned long long _additionalSpaceAmount;
    WACloudBackupManager *_manager;
    WAChatStorage *_storage;
    WABackupKeyManager *_keyManager;
    XMPPPassiveModeExclusiveConnection *_exclusiveConnection;
    WABackupInformation *_backupInformation;
    WACloudStatus *_cloudStatus;
}

+ (unsigned long long)freeSpaceRequiredForBackupOfSize:(unsigned long long)arg1;
+ (void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2;
@property(retain, nonatomic) WACloudStatus *cloudStatus; // @synthesize cloudStatus=_cloudStatus;
@property(retain) WABackupInformation *backupInformation; // @synthesize backupInformation=_backupInformation;
@property(retain) XMPPPassiveModeExclusiveConnection *exclusiveConnection; // @synthesize exclusiveConnection=_exclusiveConnection;
@property(readonly) WABackupKeyManager *keyManager; // @synthesize keyManager=_keyManager;
@property(readonly, nonatomic) WAChatStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) WACloudBackupManager *manager; // @synthesize manager=_manager;
@property(readonly, nonatomic) unsigned long long additionalSpaceAmount; // @synthesize additionalSpaceAmount=_additionalSpaceAmount;
@property(readonly, nonatomic) _Bool additionalSpaceRequired; // @synthesize additionalSpaceRequired=_additionalSpaceRequired;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void).cxx_destruct;
- (void)willEnterForeground:(id)arg1;
- (void)endBackgroundTask;
- (void)willEndForegroundTask:(id)arg1;
- (void)calculateSizeParameters;
- (void)unregisterForCloudStatus;
- (void)registerForCloudStatus;
- (unsigned long long)maximumPhase;
- (id)errorDomain;
- (void)start;
- (void)removeTemporaryDirectory;
- (void)completeWithReason:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool encounteredTARError;
- (void)addFirstOperations;
- (void)internalStartRestore;
- (void)addOperation:(id)arg1;
- (void)updateBackupInformation:(id)arg1;
- (void)dealloc;
- (id)initWithManager:(id)arg1 keyManager:(id)arg2 chatStorage:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

