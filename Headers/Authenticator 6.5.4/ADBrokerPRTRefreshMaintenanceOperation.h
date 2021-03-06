//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBrokerRequestControllerFactory, ADBrokerTokenCacheAccessor;

@interface ADBrokerPRTRefreshMaintenanceOperation : NSObject
{
    ADBrokerTokenCacheAccessor *_brokerTokenCacheAccessor;
    ADBrokerRequestControllerFactory *_factory;
    CDUnknownBlockType _completionBlock;
}

+ (id)lastPRTRefreshTimeWithSuccess:(_Bool)arg1;
+ (double)timeIntervalSincePRTRefreshWithSuccess:(_Bool)arg1;
+ (void)savePRTRefreshTimeWithSuccess:(_Bool)arg1;
+ (void)handlePRTRefreshOperation:(id)arg1;
+ (id)prtRefreshTaskRequest;
+ (_Bool)schedulePRTRefreshTaskWithError:(id *)arg1;
+ (double)earliestPRTRefreshInterval;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) ADBrokerRequestControllerFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) ADBrokerTokenCacheAccessor *brokerTokenCacheAccessor; // @synthesize brokerTokenCacheAccessor=_brokerTokenCacheAccessor;
- (_Bool)hasCompletionBlock;
- (CDUnknownBlockType)copyAndClearCompletionBlock;
- (void)refreshPRTImpl:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)refreshPRT:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshPRTs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)ssoArtifactsWithError:(id *)arg1;
- (void)cancel;
- (void)runWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

