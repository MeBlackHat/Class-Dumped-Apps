//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsStorageMessagedetailsDefaultItemMessagesCoordinatorComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsStorageMessagedetailsDaggerDefaultItemMessagesCoordinatorComponentImpl : NSObject <ComGoogleAppsBigtopDataItemsStorageMessagedetailsDefaultItemMessagesCoordinatorComponentImpl>
{
    id <JavaxInjectProvider> currentJobExecutorProvider_;
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> zipMessageDetailsProvider_;
    id <JavaxInjectProvider> provideShouldZipOnWritesProvider_;
    id <JavaxInjectProvider> protoZipperProvider_;
    id <JavaxInjectProvider> getCounterManagerProvider_;
    id <JavaxInjectProvider> btdDatabaseProvider_;
    id <JavaxInjectProvider> xplatDbTableControllersProvider_;
    id <JavaxInjectProvider> itemMessagesTableControllerProvider_;
    id <JavaxInjectProvider> defaultAttachmentCacheKeyProvider_;
    id <JavaxInjectProvider> itemMessageAttachmentsTableControllerProvider_;
    id <JavaxInjectProvider> itemMessageDocAttachmentsCoordinatorImplProvider_;
}

- (void)dealloc;
- (id)itemMessageDocAttachmentsCoordinator;
- (id)itemMessageAttachmentsCoordinator;
- (id)itemMessagesCoordinator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

