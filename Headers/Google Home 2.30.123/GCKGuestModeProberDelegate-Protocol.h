//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class GCKError, GCKGuestModeProber, NSString;

@protocol GCKGuestModeProberDelegate
- (void)guestModeProber:(GCKGuestModeProber *)arg1 didFailProbingApplicationID:(NSString *)arg2 withError:(GCKError *)arg3;
- (void)guestModeProber:(GCKGuestModeProber *)arg1 didSucceedProbingApplicationID:(NSString *)arg2 supported:(_Bool)arg3;
@end

