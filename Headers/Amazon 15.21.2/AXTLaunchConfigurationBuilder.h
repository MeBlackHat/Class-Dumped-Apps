//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AXTLaunchConfigurationBuilder : NSObject
{
    _Bool _shouldCacheGatewayHTML;
    _Bool _shouldUseCacheGatewayHTML;
    _Bool _shouldOpenTestHookBridge;
    NSString *_interstitialToShow;
    NSString *_testName;
}

@property(retain, nonatomic) NSString *testName; // @synthesize testName=_testName;
@property(nonatomic) _Bool shouldOpenTestHookBridge; // @synthesize shouldOpenTestHookBridge=_shouldOpenTestHookBridge;
@property(nonatomic) _Bool shouldUseCacheGatewayHTML; // @synthesize shouldUseCacheGatewayHTML=_shouldUseCacheGatewayHTML;
@property(nonatomic) _Bool shouldCacheGatewayHTML; // @synthesize shouldCacheGatewayHTML=_shouldCacheGatewayHTML;
@property(retain, nonatomic) NSString *interstitialToShow; // @synthesize interstitialToShow=_interstitialToShow;
- (void).cxx_destruct;

@end

