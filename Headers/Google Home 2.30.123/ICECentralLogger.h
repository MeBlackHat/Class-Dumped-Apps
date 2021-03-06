//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICEErrorLogger-Protocol.h"
#import "ICEVisualElementLogger-Protocol.h"

@class NSOperationQueue, NSString;
@protocol ICEErrorLogger, ICEVisualElementLogger;

@interface ICECentralLogger : NSObject <ICEErrorLogger, ICEVisualElementLogger>
{
    id <ICEErrorLogger> _errorLogger;
    id <ICEVisualElementLogger> _visualElementLogger;
    NSOperationQueue *_operationQueue;
}

+ (id)stringWithNSException:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property __weak id <ICEVisualElementLogger> visualElementLogger; // @synthesize visualElementLogger=_visualElementLogger;
@property __weak id <ICEErrorLogger> errorLogger; // @synthesize errorLogger=_errorLogger;
- (void)logVisibilityChangeOnElementWithLogInfo:(id)arg1 isVisible:(_Bool)arg2;
- (void)logInteractionOnElementWithLogInfo:(id)arg1;
- (void)logErrorWithErrorName:(id)arg1;
- (void)logErrorWithMessage:(id)arg1;
- (void)logInvalidModelWithModel:(id)arg1 missingFields:(id)arg2;
- (void)logIncorrectNumberOfItemsInAppImmersiveGrid:(unsigned long long)arg1 logInfo:(id)arg2;
- (void)logIncorrectlySizedImageWithURL:(id)arg1 expectedSize:(struct CGSize)arg2 actualSize:(struct CGSize)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

