//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableSet, NSOperationQueue, NSString, NSThread;
@protocol OS_dispatch_queue, PXBackgroundTaskDelegate, PXNetworkActivityDelegate, QHTTPOperationAuthenticationDelegate;

@interface PXNetworkManager : NSObject
{
    NSObject<OS_dispatch_queue> *_persistentDispatchQueue;
    _Bool _networkInUse;
    NSDictionary *_queues;
    NSThread *_networkRunLoopThread;
    NSOperationQueue *_managementQueue;
    NSOperationQueue *_networkQueue;
    NSOperationQueue *_CPUQueue;
    id <PXNetworkActivityDelegate> _networkActivityDelegate;
    id <QHTTPOperationAuthenticationDelegate> _defaultAuthenticationDelegate;
    NSString *_userAgent;
    NSMutableSet *_loggerClasses;
    NSMutableArray *_persistedRequests;
    id <PXBackgroundTaskDelegate> _backgroundTaskDelegate;
}

+ (id)keyPathsForValuesAffectingNetworkOperationCount;
+ (id)keyPathsForValuesAffectingOutstandingOperationCount;
+ (id)defaultManager;
@property(nonatomic) __weak id <PXBackgroundTaskDelegate> backgroundTaskDelegate; // @synthesize backgroundTaskDelegate=_backgroundTaskDelegate;
@property(retain, nonatomic) NSMutableArray *persistedRequests; // @synthesize persistedRequests=_persistedRequests;
@property(readonly, nonatomic) NSMutableSet *loggerClasses; // @synthesize loggerClasses=_loggerClasses;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property _Bool networkInUse; // @synthesize networkInUse=_networkInUse;
@property(nonatomic) __weak id <QHTTPOperationAuthenticationDelegate> defaultAuthenticationDelegate; // @synthesize defaultAuthenticationDelegate=_defaultAuthenticationDelegate;
@property(nonatomic) __weak id <PXNetworkActivityDelegate> networkActivityDelegate; // @synthesize networkActivityDelegate=_networkActivityDelegate;
@property(readonly, nonatomic) NSOperationQueue *CPUQueue; // @synthesize CPUQueue=_CPUQueue;
@property(readonly, nonatomic) NSOperationQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(readonly, nonatomic) NSOperationQueue *managementQueue; // @synthesize managementQueue=_managementQueue;
@property(readonly, nonatomic) NSThread *networkRunLoopThread; // @synthesize networkRunLoopThread=_networkRunLoopThread;
@property(readonly, nonatomic) NSDictionary *queues; // @synthesize queues=_queues;
- (void).cxx_destruct;
- (void)unregisterRequestLoggerClass:(Class)arg1;
- (void)registerRequestLoggerClass:(Class)arg1;
- (id)addDefaultHeadersToRequest:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)networkRunLoopThreadEntry;
- (id)runLoopThreadForQueueKey:(id)arg1;
- (void)cancelAllRequests;
- (id)queueForKey:(id)arg1;
- (void)enqueueOperation:(id)arg1 onQueue:(id)arg2;
- (void)enqueueOperation:(id)arg1;
- (void)restorePersistedRequests;
- (void)_savePersistedRequests;
- (id)persistedPath;
- (void)removePersistedRequest:(id)arg1;
- (void)addPersistedRequest:(id)arg1;
@property(readonly) long long networkOperationCount;
@property(readonly) long long outstandingOperationCount;
- (void)dealloc;
- (id)init;

@end

