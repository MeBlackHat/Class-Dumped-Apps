//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/FBSDKCrashObserving-Protocol.h>

@class NSArray, NSString;
@protocol FBAdNetworkingService;

@interface FBAdCrashObserver : NSObject <FBSDKCrashObserving>
{
    NSArray *_prefixes;
    NSArray *_frameworks;
    id <FBAdNetworkingService> _networkingService;
    NSString *_appId;
    NSString *_crashSource;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *crashSource; // @synthesize crashSource=_crashSource;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) id <FBAdNetworkingService> networkingService; // @synthesize networkingService=_networkingService;
@property(copy, nonatomic) NSArray *frameworks; // @synthesize frameworks=_frameworks;
@property(copy, nonatomic) NSArray *prefixes; // @synthesize prefixes=_prefixes;
- (void)dealloc;
- (void)didReceiveCrashLogs:(id)arg1;
- (void)enableCrashObserving;
- (id)initWithNetworkingService:(id)arg1 prefixes:(id)arg2 frameworks:(id)arg3 appId:(id)arg4 crashSource:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

