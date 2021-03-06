//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNBaseHTTPRequest, FNYoutubeContentRequest;
@protocol IFNetworkUploadService;

@interface IFUploadingContentService : NSObject
{
    FNBaseHTTPRequest *_downloadRequest;
    id <IFNetworkUploadService> _uploadManager;
    FNYoutubeContentRequest *_youtubeSearch;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FNYoutubeContentRequest *youtubeSearch; // @synthesize youtubeSearch=_youtubeSearch;
@property(retain, nonatomic) id <IFNetworkUploadService> uploadManager; // @synthesize uploadManager=_uploadManager;
@property(retain, nonatomic) FNBaseHTTPRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
- (id)errorStringFromError:(id)arg1;
- (id)saveVideoDataToDisk:(id)arg1;
- (void)loadImageWithUrl:(id)arg1 result:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)loadVideoPreviewWithInfo:(id)arg1 result:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestYoutubeInfoWithUrl:(id)arg1 result:(id)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestVideoClipInfoWithUrl:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestCoubInfoWithUrl:(id)arg1 result:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancel;
- (void)uploadMedia:(id)arg1 contentType:(unsigned long long)arg2 progressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

@end

