//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTDAIAdsHandlerDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSMutableDictionary, NSString, YTAdState, YTDAIAdBreakStateLoggingController, YTDAIAdsLoggingController, YTPlaybackData;
@protocol YTAdsPlaybackCoordinatorDelegate, YTAdsPlaybackProtocol, YTDAIAdsHandler, YTInstreamAdsController, YTResponder;

@interface YTDAIAdsCoordinator : NSObject <YTDAIAdsHandlerDelegate, YTResponder>
{
    id <YTAdsPlaybackProtocol> _adsPlaybackCoordinator;
    id <YTAdsPlaybackCoordinatorDelegate> _delegate;
    id <YTInstreamAdsController> _instreamAdsController;
    int _midrollIndex;
    YTAdState *_currentAdState;
    NSMutableDictionary *_adStateMap;
    YTDAIAdsLoggingController *_adsLoggingController;
    YTDAIAdBreakStateLoggingController *_adBreakStateLoggingController;
    id <YTDAIAdsHandler> _DAIAdsHandler;
    _Bool _DAIStopped;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTPlaybackData *_contentPlaybackData;
}

@property(retain, nonatomic) YTPlaybackData *contentPlaybackData; // @synthesize contentPlaybackData=_contentPlaybackData;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)currentDAIConfig;
- (id)newActiveViewVideoMonitor;
- (id)newAdBreakEventReporterWithAdBreak:(id)arg1;
- (id)newAdEventReporterWithAdState:(id)arg1;
- (void)buildAdStatesFromAdBreak:(id)arg1;
- (id)getAdBreakRendererForLiveStream;
- (id)getPlayableAdsFromAds:(id)arg1;
- (void)assertCurrentAdStateMatchCPN:(id)arg1;
- (_Bool)isCuepointSupportedAdBreakRenderer:(id)arg1;
- (_Bool)shouldEnableDaiForAirplay;
- (void)stopDAI;
- (void)didReceiveCuepoint:(id)arg1;
- (void)updateAdStateMapWithAdState:(id)arg1;
- (void)observeSingleVideo:(id)arg1;
- (void)makeAdBreakRequestForDAIAdsHandler:(id)arg1 withCuepoint:(id)arg2;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (void)adPlaybackDidFailWithError:(id)arg1 withAdCPN:(id)arg2;
- (void)activateCuepointsFrom:(double)arg1;
- (void)stopActiveViewReporterWithAdCPN:(id)arg1;
- (void)adVideoDidCompleteWithAdCPN:(id)arg1;
- (void)adDidPauseWithAdCPN:(id)arg1;
- (void)adDidPlayWithAdCPN:(id)arg1;
- (void)adDidProgressWithMLTime:(id)arg1 withAdCPN:(id)arg2;
- (void)removeAdStateWithAdCPN:(id)arg1;
- (void)clearCurrentAdStateWithAdCPN:(id)arg1;
- (void)restoreAdStateWithAdCPN:(id)arg1;
- (void)reset;
- (void)didObserveCuepointsChange:(id)arg1 startTime:(double)arg2;
- (void)startNewPlaybackWithContentPlaybackData:(id)arg1 playbackTimeline:(id)arg2;
- (id)initWithAdsPlaybackCoordinator:(id)arg1 delegate:(id)arg2 parentResponder:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

