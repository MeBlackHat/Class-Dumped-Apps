//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTMediaStreamEngine-Protocol.h"
#import "IESLiveMTStreamStateProtocol-Protocol.h"

@class IESLiveAnchorIndicatorView, IESLiveMTNormalStreamConfigFactory, IESLiveMTPushStreamLogger, IESLiveRecordCountDownView, LiveRoomModel, NSString;
@protocol HTSLiveViewHierarchyProvider, IESLiveMTMediaStreamEngineDelegate, IESLiveMTRealStreamingProvider, IESLivePushStreamLifeCycle, IESLiveSettings, IESLiveToastFactory;

@interface IESLiveMTAudioStreamEngine : NSObject <IESLiveMTStreamStateProtocol, IESLiveMTMediaStreamEngine>
{
    _Bool _offNetwork;
    _Bool _started;
    id <IESLiveMTMediaStreamEngineDelegate> _delegate;
    LiveRoomModel *_room;
    IESLiveAnchorIndicatorView *_indicatorView;
    IESLiveRecordCountDownView *_liveRecordLoadingView;
    IESLiveMTNormalStreamConfigFactory *_streamConfigFactory;
    IESLiveMTPushStreamLogger *_pushStreamLogger;
    id <IESLiveMTRealStreamingProvider> _streamingProvider;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLivePushStreamLifeCycle> _pushStreamLifeCycle;
    long long _engineState;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool started; // @synthesize started=_started;
@property(nonatomic) long long engineState; // @synthesize engineState=_engineState;
@property(nonatomic) _Bool offNetwork; // @synthesize offNetwork=_offNetwork;
@property(retain, nonatomic) id <IESLivePushStreamLifeCycle> pushStreamLifeCycle; // @synthesize pushStreamLifeCycle=_pushStreamLifeCycle;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveMTRealStreamingProvider> streamingProvider; // @synthesize streamingProvider=_streamingProvider;
@property(retain, nonatomic) IESLiveMTPushStreamLogger *pushStreamLogger; // @synthesize pushStreamLogger=_pushStreamLogger;
@property(retain, nonatomic) IESLiveMTNormalStreamConfigFactory *streamConfigFactory; // @synthesize streamConfigFactory=_streamConfigFactory;
@property(retain, nonatomic) IESLiveRecordCountDownView *liveRecordLoadingView; // @synthesize liveRecordLoadingView=_liveRecordLoadingView;
@property(retain, nonatomic) IESLiveAnchorIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
@property(nonatomic) __weak id <IESLiveMTMediaStreamEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onNetworkStatusChanged:(id)arg1;
- (void)hideIndicatorView;
- (void)showIndicatorView;
- (void)pr_showCountDownLoadingView;
- (void)loadStreamer;
- (void)prepare;
- (void)onPushStreamLogDictCallback:(id)arg1;
- (void)onPushStreamStateChange:(long long)arg1;
- (void)stopLiveStream;
- (void)startLiveStreamIfNeeded;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

