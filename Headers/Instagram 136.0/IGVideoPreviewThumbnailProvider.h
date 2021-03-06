//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGVideoPreviewLogger, IGVideoPreviewMetadata, NSMutableDictionary;
@protocol IGAPIClient, IGVideoPreviewThumbnailProviderDelegate;

@interface IGVideoPreviewThumbnailProvider : NSObject
{
    id <IGAPIClient> _networker;
    IGVideoPreviewMetadata *_previewMetadata;
    IGVideoPreviewLogger *_logger;
    id <IGVideoPreviewThumbnailProviderDelegate> _delegate;
    _Bool _hasStartedFetching;
    _Bool _isAvailable;
    NSMutableDictionary *_spriteImages;
    long long _numberOfThumbnails;
}

- (void).cxx_destruct;
- (id)_createThumbnailImageAtIndex:(long long)arg1;
- (void)_didFailDownloading;
- (void)_didFinishDownloading;
- (void)_fetchSpriteSheets;
- (long long)thumbnailIndexAtTime:(double)arg1;
- (void)fetch;
- (void)stop;
- (id)thumbnailImageAtTime:(double)arg1;
- (id)initWithNetworker:(id)arg1 previewMetadata:(id)arg2 logger:(id)arg3 delegate:(id)arg4;
- (void)dealloc;

@end

