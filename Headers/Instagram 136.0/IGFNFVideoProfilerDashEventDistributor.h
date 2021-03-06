//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFAssetEventListener-Protocol.h>
#import <FBSharedFramework/FNFDashEventListener-Protocol.h>

@class NSString;
@protocol FNFDashEventListener><FNFAssetEventListener, IGFNFVideoProfilerDashEventListener;

@interface IGFNFVideoProfilerDashEventDistributor : NSObject <FNFDashEventListener, FNFAssetEventListener>
{
    id <FNFDashEventListener><FNFAssetEventListener> _eventListener;
    id <IGFNFVideoProfilerDashEventListener> _limitedEventListener;
}

@property(readonly, nonatomic) __weak id <IGFNFVideoProfilerDashEventListener> limitedEventListener; // @synthesize limitedEventListener=_limitedEventListener;
@property(readonly, nonatomic) __weak id <FNFDashEventListener><FNFAssetEventListener> eventListener; // @synthesize eventListener=_eventListener;
- (void).cxx_destruct;
- (void)videoDidEndOnWarning:(id)arg1;
- (void)segmentJumpedFrom:(long long)arg1 to:(long long)arg2 timeBasedJump:(_Bool)arg3;
- (void)segmentsToLiveHeadContextualChanged:(long long)arg1;
- (void)segmentTypeChanged:(id)arg1;
- (void)resourceHostChanged:(id)arg1;
- (void)manifestFetchCompleted:(id)arg1;
- (void)videoRepresentationIdChanged:(id)arg1;
- (void)videoContainerFormatChanged:(id)arg1;
- (void)publishTimeChanged:(id)arg1;
- (void)publishFrameTimeChanged:(double)arg1;
- (void)playbackResolutionMosChanged:(id)arg1;
- (void)nextLiveAudioTimestampChanged:(double)arg1;
- (void)lastVideoFrameTimeMsChanged:(long long)arg1;
- (void)isManifestServiceChanged:(_Bool)arg1;
- (void)isDrmVideoChanged:(_Bool)arg1;
- (void)isAbrEnabledChanged:(_Bool)arg1;
- (void)firstAvTimeMsChanged:(long long)arg1;
- (void)serverDelayChanged:(long long)arg1;
- (void)elapsedVideoTimestampChanged:(double)arg1;
- (void)currentServerTimeMsChanged:(long long)arg1;
- (void)chunkParsed:(id)arg1 trackType:(long long)arg2 fetchUrl:(id)arg3;
- (void)chunkBufferContentsChanged:(id)arg1;
- (void)chunkFetchStarted:(id)arg1 trackType:(long long)arg2;
- (void)chunkFetchCompleted:(id)arg1 trackType:(long long)arg2;
- (void)availableAudioQualitiesChanged:(id)arg1;
- (void)availableQualitiesChanged:(id)arg1;
- (void)audioRepresentationIdChanged:(id)arg1;
- (void)audioContainerFormatChanged:(id)arg1;
- (void)timeLoadedChanged:(id)arg1;
- (void)playerItemDidWarn:(id)arg1;
- (void)manifestDataFetched:(id)arg1 isFirstManifest:(_Bool)arg2;
- (void)playerLiveItemDidEnd:(id)arg1;
- (void)playerItemDidFail:(id)arg1;
- (void)playbackDidUndry;
- (void)playbackDidDryOut;
- (void)durationChanged:(CDStruct_1b6d18a9)arg1;
- (id)initWithEventListener:(id)arg1 limitedEventListener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

