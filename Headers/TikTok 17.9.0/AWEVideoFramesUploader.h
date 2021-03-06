//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEFramesUploaderProtocol-Protocol.h"

@class AWEResourceUploadParametersResponseModel, AWETTFramesZipUploadService, AWEVideoPublishViewModel, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface AWEVideoFramesUploader : NSObject <AWEFramesUploaderProtocol>
{
    _Bool _isZiping;
    NSString *_taskId;
    NSString *_videoId;
    NSString *_awemeId;
    NSString *_draftFolder;
    AWEVideoPublishViewModel *_publishModel;
    NSArray *_bgStickerVideoAssests;
    NSMutableArray *_bgStickerVideoAssetsClipDuration;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    AWETTFramesZipUploadService *_zipUploadService;
    NSMutableArray *_imagePathArray;
    CDUnknownBlockType _completion;
    NSMutableArray *_videoFrames;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *videoFrames; // @synthesize videoFrames=_videoFrames;
@property(nonatomic) _Bool isZiping; // @synthesize isZiping=_isZiping;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSMutableArray *imagePathArray; // @synthesize imagePathArray=_imagePathArray;
@property(retain, nonatomic) AWETTFramesZipUploadService *zipUploadService; // @synthesize zipUploadService=_zipUploadService;
@property(retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters; // @synthesize uploadParameters=_uploadParameters;
@property(retain, nonatomic) NSMutableArray *bgStickerVideoAssetsClipDuration; // @synthesize bgStickerVideoAssetsClipDuration=_bgStickerVideoAssetsClipDuration;
@property(copy, nonatomic) NSArray *bgStickerVideoAssests; // @synthesize bgStickerVideoAssests=_bgStickerVideoAssests;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(copy, nonatomic) NSString *draftFolder; // @synthesize draftFolder=_draftFolder;
@property(copy, nonatomic) NSString *awemeId; // @synthesize awemeId=_awemeId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
- (void)uploadFinished;
- (void)uploadImageZipWithUrl:(id)arg1;
- (void)completeGenerateFrames;
- (void)start;
- (_Bool)shouldStart;
- (id)initVideoId:(id)arg1 awemeId:(id)arg2 publishModel:(id)arg3 uploadParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

