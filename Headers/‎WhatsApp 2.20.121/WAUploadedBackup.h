//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WABackupInformation.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface WAUploadedBackup : WABackupInformation
{
    NSString *_path;
    unsigned long long _loadingCount;
    NSObject<OS_dispatch_queue> *_captureQueue;
    _Bool _cloudLoading;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isCloudLoading) _Bool cloudLoading; // @synthesize cloudLoading=_cloudLoading;
- (void)resetCapturedUploadWithCompletion:(CDUnknownBlockType)arg1;
- (void)captureUploadWithPath:(id)arg1 sizeHint:(unsigned long long)arg2;
- (void)applyHint:(unsigned long long)arg1;
- (void)updateUploadWithPath:(id)arg1 sizeHint:(unsigned long long)arg2;
- (void)copyFromURL:(id)arg1;
- (void)updateCloudLoadingFromManager:(id)arg1;
- (void)cloudAccountLoadOverrideExpired:(id)arg1;
- (void)cloudAccountChanged:(id)arg1;
- (void)didFinishLoading;
- (void)performBlockAffectingLoading:(CDUnknownBlockType)arg1;
- (void)stopLoading;
- (void)startLoading;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (_Bool)load;
- (id)initWithManager:(id)arg1 path:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end

