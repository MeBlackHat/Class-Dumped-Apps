//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKError, GCKSession, GCKSessionEndpoint, NSError, NSString;

@protocol GCKSessionDelegate <NSObject>
- (void)session:(GCKSession *)arg1 didReceiveDeviceStatus:(NSString *)arg2;
- (void)session:(GCKSession *)arg1 didReceiveDeviceVolume:(float)arg2 muted:(_Bool)arg3;
- (void)session:(GCKSession *)arg1 didFailToMoveEndpoint:(GCKSessionEndpoint *)arg2 error:(GCKError *)arg3;
- (void)sessionDidMoveEndpoint:(GCKSession *)arg1;
- (void)session:(GCKSession *)arg1 willMoveEndpoint:(GCKSessionEndpoint *)arg2;
- (void)session:(GCKSession *)arg1 didEndWithError:(NSError *)arg2 willTryToResume:(_Bool)arg3;
- (void)session:(GCKSession *)arg1 didFailToStartWithError:(NSError *)arg2;
- (void)sessionDidStart:(GCKSession *)arg1;
@end

