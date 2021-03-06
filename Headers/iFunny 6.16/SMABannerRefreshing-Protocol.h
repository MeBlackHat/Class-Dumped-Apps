//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class SMAObservable;
@protocol SMABannerAdPresenting;

@protocol SMABannerRefreshing <NSObject>
@property(readonly, nonatomic) SMAObservable *onNewAdPresenter;
@property(nonatomic) long long reloadInterval;
- (void)pauseTimer;
- (void)forceRefresh;
- (void)closeModalContentHappenedIn:(id <SMABannerAdPresenting>)arg1;
- (void)openModalContentHappenedIn:(id <SMABannerAdPresenting>)arg1;
- (void)impressionHappenedIn:(id <SMABannerAdPresenting>)arg1;
@end

