//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAMultiSendMediaSendProcessorDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController, WAChatViewController, WAMediaPickerStats, WAMultiSendMediaSendProcessor, WAProductCatalogSingleImageLoader;

@interface WAProductForwardingHelper : NSObject <WAMultiSendMediaSendProcessorDelegate>
{
    WAChatViewController *_chatViewController;
    _Bool _forwarding;
    WAMultiSendMediaSendProcessor *_processor;
    NSMutableDictionary *_completionDictionary;
    WAMediaPickerStats *_mediaPickerStats;
    WAProductCatalogSingleImageLoader *_imageLoader;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)userCancelledAllExport;
- (void)convertPlaceholderItemToActualItemDidSuccessWithOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (void)convertPlaceholderItemToActualItemDidFailedWithIndex:(long long)arg1;
- (void)hasConvertedItemWhenCancelExport;
- (void)exportAndPrepareOldMediaItem:(id)arg1 toNewMediaItem:(id)arg2;
- (void)sendProcessAndExportFinishSuccessWithProcessedItems:(id)arg1 mediaPickerStats:(id)arg2;
- (void)sendProcessFinishSuccessWithProcessedItems:(id)arg1;
- (void)sendProcessFinishWithErrorMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)showingProgressViewOnThisViewController;
- (_Bool)shouldShowProgressViewDuringMediaExport;
- (id)mediaPickerStats;
- (_Bool)wantSaveMediaToCameraRoll;
- (void)showErrorMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendMediaItemToChatSessions:(id)arg1 mediaItems:(id)arg2 withProduct:(id)arg3 stats:(id)arg4;
- (void)sendMediaItems:(id)arg1 withProduct:(id)arg2 toContacts:(id)arg3 pickerStatistics:(id)arg4;
- (void)sendProductMessageToContacts:(id)arg1 image:(id)arg2 imageURL:(id)arg3 productDescriptor:(id)arg4;
- (void)presentForwardControllerWithImage:(id)arg1 imageURL:(id)arg2 productDescriptor:(id)arg3;
- (id)createForwardPicker;
- (void)sendProductCatalogImage:(id)arg1 toChatJID:(id)arg2 productDescriptor:(id)arg3 presentingViewController:(id)arg4;
- (void)processImage:(id)arg1 fileURL:(id)arg2 productDescriptor:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)captionForProductDescriptor:(id)arg1 compact:(_Bool)arg2;
- (void)sendProductMessageToChatSession:(id)arg1 image:(id)arg2 imageURL:(id)arg3 productDescriptor:(id)arg4;
- (void)forwardProductImage:(id)arg1 imageURL:(id)arg2 productDescriptor:(id)arg3;
- (void)sendProductCatalogImage:(id)arg1 toBusinessOwnerUserJID:(id)arg2 productDescriptor:(id)arg3 presentingViewController:(id)arg4;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

