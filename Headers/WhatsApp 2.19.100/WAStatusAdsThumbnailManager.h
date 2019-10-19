//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue, NSURL;
@protocol OS_dispatch_queue, WAStatusAdsThumbnailManagerDelegate;

@interface WAStatusAdsThumbnailManager : NSObject
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_thumbnailOperationForTrackingNumber;
    NSURL *_temporaryDirectory;
    NSObject<OS_dispatch_queue> *_callBackQueue;
    id <WAStatusAdsThumbnailManagerDelegate> _delegate;
}

+ (id)randomFileName;
+ (id)pathForSavingAdThumbnailInDirectory:(id)arg1;
+ (id)thumbnailImageForImage:(id)arg1;
+ (id)fullImageForPath:(id)arg1 mediaType:(long long)arg2;
@property(nonatomic) __weak id <WAStatusAdsThumbnailManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelThumbnailGenerationForTrackingNumber:(id)arg1;
- (void)queueGenerateThumbnailForTrackingNumber:(id)arg1 mediaPath:(id)arg2 mediaType:(long long)arg3;
- (void)didCompleteThumbnailWithPath:(id)arg1 forTrackingNumber:(id)arg2 operation:(id)arg3;
- (id)initWithTemporaryDirectory:(id)arg1 callbackQueue:(id)arg2;

@end

