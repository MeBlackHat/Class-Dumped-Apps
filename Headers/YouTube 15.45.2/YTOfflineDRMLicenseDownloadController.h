//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTOfflineSinglePlayerResponseDRMLicenseDownloadControllerDelegate-Protocol.h>

@class NSDate, NSError, NSMutableOrderedSet, NSString, YTIAudioTrack, YTIPlayerResponse, YTOfflineSinglePlayerResponseDRMLicenseDownloadController;
@protocol YTOfflineDRMLicenseDownloadControllerDelegate;

@interface YTOfflineDRMLicenseDownloadController : NSObject <YTOfflineSinglePlayerResponseDRMLicenseDownloadControllerDelegate>
{
    id <YTOfflineDRMLicenseDownloadControllerDelegate> _delegate;
    NSString *_CPN;
    NSError *_error;
    YTOfflineSinglePlayerResponseDRMLicenseDownloadController *_currentSinglePlayerResponseDRMLicenseDownloadController;
    NSDate *_playerResponseDate;
    int _maxResolution;
    int _audioQuality;
    YTIAudioTrack *_preferredAudioTrack;
    NSMutableOrderedSet *_playerResponsesToDownload;
    YTIPlayerResponse *_currentlyDownloadingPlayerResponse;
    NSMutableOrderedSet *_downloadedLicenseInfos;
}

- (void).cxx_destruct;
- (id)MLVideoForPlayerResponse:(id)arg1 playerResponseDate:(id)arg2;
- (void)cleanUpCommonVariables;
- (void)finishLicenseDownload;
- (void)startLicenseDownloadForNextPlayerResponseOrFinish;
- (void)didFinishDownloadingLicenses:(id)arg1 error:(id)arg2;
- (void)downloadLicensesForPlayerResponse:(id)arg1 playerResponseDate:(id)arg2 maxResolution:(int)arg3 audioQuality:(int)arg4 preferredAudioTrackID:(id)arg5;
- (id)initWithCPN:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

