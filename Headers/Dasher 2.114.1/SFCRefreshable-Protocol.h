//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SFCAuthRefresh;

@protocol SFCRefreshable
- (_Bool)canRefreshCredentials;

@optional
@property(readonly) SFCAuthRefresh *refreshTransaction;
@property(readonly) _Bool needsRefresh;
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)refreshCredentialsIfNeeded:(void (^)(_Bool, NSError *))arg1;
- (void)setNeedsRefresh;
@end

