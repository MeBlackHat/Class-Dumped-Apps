//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMUUploadRequestItemStateProvider-Protocol.h"

@class GMUAutoBackupController, GMUAutoBackupStatus, GMUFingerprint, NSString, PHAsset, PhotosMCMediaItem;
@protocol GMUAssetUpload;

@protocol GMUAutoBackupControllerDelegate <GMUUploadRequestItemStateProvider>
- (_Bool)autoBackupControllerIsReachableViaWiFi:(GMUAutoBackupController *)arg1;
- (_Bool)autoBackupControllerIsReachable:(GMUAutoBackupController *)arg1;
- (void)autoBackupController:(GMUAutoBackupController *)arg1 didCompleteUpload:(id <GMUAssetUpload>)arg2 result:(long long)arg3 resultantMediaItem:(PhotosMCMediaItem *)arg4;
- (void)autoBackupController:(GMUAutoBackupController *)arg1 asset:(PHAsset *)arg2 didProgress:(double)arg3;
- (void)autoBackupController:(GMUAutoBackupController *)arg1 didBeginUploadingAsset:(PHAsset *)arg2;
- (void)autoBackupController:(GMUAutoBackupController *)arg1 didUpdateStatus:(GMUAutoBackupStatus *)arg2;
- (_Bool)autoBackupController:(GMUAutoBackupController *)arg1 shouldConsiderAsset:(PHAsset *)arg2;
- (NSString *)autoBackupController:(GMUAutoBackupController *)arg1 mediaKeyForFingerprint:(GMUFingerprint *)arg2;
- (_Bool)autoBackupController:(GMUAutoBackupController *)arg1 phodeoExistsForPhotoFingerprint:(GMUFingerprint *)arg2;
- (_Bool)autoBackupController:(GMUAutoBackupController *)arg1 fingerprintExistsInAccount:(GMUFingerprint *)arg2;

@optional
- (_Bool)autoBackupControllerHasSufficientQuota:(GMUAutoBackupController *)arg1;
@end

