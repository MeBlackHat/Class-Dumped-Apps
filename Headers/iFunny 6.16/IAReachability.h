//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IAReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)reachabilityToHostName:(id)arg1;
+ (void)initialize;
- (void)dealloc;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (long long)currentNetworkDataType;
- (id)currentReachabilityStatusAsString;
- (long long)currentReachabilityStatus;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

