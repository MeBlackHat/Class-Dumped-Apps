//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WACloudBackupManager.h"

@class NSObject, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface WACloudBackupManager_Documents : WACloudBackupManager
{
    NSString *_capturedRemoteBackupPath;
    id _ubiquityURL;
    NSObject<OS_dispatch_queue> *_uploadingDateQueue;
}

+ (void)getKey:(id)arg1 atPath:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
+ (void)getDownloadedAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)getDownloadingAtPath:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)internalStartFileDownloading:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (void)startFileDownloading:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
+ (id)phoneNumberFromBackupInfoFilePath:(id)arg1;
- (void).cxx_destruct;
- (_Bool)evictFiles;
- (void)removeCloudItemsAtPaths:(id)arg1;
- (void)fixCloudAccount;
- (void)loadUbiquityURL;
@property(retain, nonatomic) NSURL *ubiquityURL; // @synthesize ubiquityURL=_ubiquityURL;
- (void)ubiquityIdentityTokenDidChange;
- (void)downloadMetadataForAllBackups;
- (void)runDeleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 encounteredErrors:(id)arg3 inGroup:(id)arg4;
- (void)deleteBackupForJID:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isUserRegistered_cached;
- (id)createDownloadOperationWithRestore:(id)arg1;
- (id)createUploadOperationWithBackup:(id)arg1 fromOperation:(id)arg2;
- (void)configureCloudOperation:(id)arg1;
- (void)startCurrentAction;
- (id)createDownloadStatus;
- (id)createUploadStatus;
- (void)reportUploadStatusFinished:(id)arg1;
- (void)reportUploadStatusInProgress:(id)arg1;
- (id)uploadingInfoFilePath;
- (id)createPreviousBackup;
@property(readonly, nonatomic) NSString *remoteBackupPath;
- (id)localRestorePath;
- (id)localBackupPath;
- (_Bool)initialized;
- (_Bool)availableEstimate;
- (_Bool)available;
- (id)initWithAutoBackupSettings:(id)arg1;

@end

