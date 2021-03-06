//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FNBaseHTTPRequest, IFUploadingContentService;
@protocol IFNetworkUploadService;

@interface IFURLSharingModel : NSObject
{
    id <IFNetworkUploadService> _uploadManager;
    FNBaseHTTPRequest *_downloadRequest;
    IFUploadingContentService *_uploadingContentService;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IFUploadingContentService *uploadingContentService; // @synthesize uploadingContentService=_uploadingContentService;
@property(retain, nonatomic) FNBaseHTTPRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) id <IFNetworkUploadService> uploadManager; // @synthesize uploadManager=_uploadManager;
- (void)handleDownloadingResponse:(id)arg1 error:(id)arg2 provider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)download:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canDownloadOpenGraphForProvider:(id)arg1;
- (void)metadataForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNeworkUploadManager:(id)arg1;

@end

