//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@class NSString;

@interface RCTNetInfo : RCTEventEmitter
{
    struct __SCNetworkReachability *_reachability;
    NSString *_connectionType;
    NSString *_effectiveConnectionType;
    NSString *_statusDeprecated;
    NSString *_host;
    _Bool _isObserving;
}

+ (const struct RCTMethodInfo *)__rct_export__1640;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)getCurrentConnectivity:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (_Bool)setReachabilityStatus:(unsigned int)arg1;
- (struct __SCNetworkReachability *)getReachabilityRef;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)initWithHost:(id)arg1;

@end

