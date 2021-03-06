//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAVastPlaying-Protocol.h>

@class NSString, SMAVastVideoPlayerController;
@protocol SMAAdPrivacyPolicy, SMABeacon, SMAFileLoading, SMAVastErrorTracking, SMAVastParsing;

@interface SMAVastPlayer : NSObject <SMAVastPlaying>
{
    _Bool _inprogress;
    id <SMABeacon> _beacon;
    id <SMAVastParsing> _vastParser;
    id <SMAVastErrorTracking> _errorTracker;
    id <SMAFileLoading> _fileLoader;
    id <SMAAdPrivacyPolicy> _privacyPolicy;
    SMAVastVideoPlayerController *_videoController;
}

@property(nonatomic) _Bool inprogress; // @synthesize inprogress=_inprogress;
@property(retain, nonatomic) SMAVastVideoPlayerController *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) id <SMAAdPrivacyPolicy> privacyPolicy; // @synthesize privacyPolicy=_privacyPolicy;
@property(retain, nonatomic) id <SMAFileLoading> fileLoader; // @synthesize fileLoader=_fileLoader;
@property(retain, nonatomic) id <SMAVastErrorTracking> errorTracker; // @synthesize errorTracker=_errorTracker;
@property(retain, nonatomic) id <SMAVastParsing> vastParser; // @synthesize vastParser=_vastParser;
@property(retain, nonatomic) id <SMABeacon> beacon; // @synthesize beacon=_beacon;
- (void).cxx_destruct;
- (_Bool)validateScenarioAndTrackErrorOnFailure:(id)arg1 validationError:(id *)arg2;
- (id)createVastInterstitialWithVideoPlayerController:(id)arg1 vastScenario:(id)arg2;
- (void)setupErrorTrackerWithVastScenario:(id)arg1;
- (void)loadVastInterstitialWithVastScenario:(id)arg1 localVideoResourceURL:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)loadVastInterstitialWithVastScenario:(id)arg1 resourceTTL:(double)arg2 response:(CDUnknownBlockType)arg3;
- (void)loadVastInterstitialWithXMLData:(id)arg1 isRewarded:(_Bool)arg2 resourceTTL:(double)arg3 response:(CDUnknownBlockType)arg4;
- (void)loadVastInterstitialWithXMLData:(id)arg1 resourceTTL:(double)arg2 response:(CDUnknownBlockType)arg3;
- (void)loadRewardedVastInterstitialWithXMLData:(id)arg1 resourceTTL:(double)arg2 response:(CDUnknownBlockType)arg3;
- (id)_initWithVastParser:(id)arg1 videoController:(id)arg2;
- (id)_initWithVastParser:(id)arg1 videoController:(id)arg2 fileLoader:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

