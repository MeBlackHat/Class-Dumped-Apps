//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSFileHandle, NSMutableArray, NSProgress, NSString, NSURLSessionDataTask;

@interface YTEditAudioTrackDataProcessor : NSObject <AVAssetResourceLoaderDelegate>
{
    NSURLSessionDataTask *_task;
    NSMutableArray *_pendingRequests;
    NSFileHandle *_fileHandle;
    long long _receivedBytes;
    NSProgress *_progress;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)fillContentInformationRequest:(id)arg1;
- (id)readData:(unsigned long long)arg1 numberOfBytes:(unsigned long long)arg2;
- (_Bool)respondWithDataForRequest:(id)arg1;
- (void)processPendingRequests;
- (void)appendData:(id)arg1;
- (void)initTempFileHandle:(id)arg1;
- (void)addData:(id)arg1;
- (void)removeRequest:(id)arg1;
- (void)addRequest:(id)arg1;
- (void)cancel;
- (id)initWithTask:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

