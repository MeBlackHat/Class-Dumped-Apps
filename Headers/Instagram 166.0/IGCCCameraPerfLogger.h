//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBCameraStartPerformanceLoggerProviding-Protocol.h>

@class IGCameraOpenPerfComponents, NSString;

@interface IGCCCameraPerfLogger : NSObject <FBCameraStartPerformanceLoggerProviding>
{
    BOOL _hardwareFirstFrameFlag;
    IGCameraOpenPerfComponents *_perfComponents;
}

- (void).cxx_destruct;
- (void)didStopDepthDataOutput;
- (void)didReceiveFirstDepthDataFrame;
- (void)willStartDepthDataOutput;
- (void)willPrepareDepthDataOutput;
- (void)didStopCamera;
- (_Bool)didRenderFirstVideoFrameWithFilterName:(id)arg1 renderStartTime:(double)arg2 renderFinishTime:(double)arg3;
- (_Bool)didReceiveFirstVideoFrame;
- (void)didFailToStartCamera;
- (void)didStartCamera;
- (void)willStartCamera;
- (void)didFinishPrepareCameraWithType:(unsigned char)arg1;
- (void)didCancelPrepareCamera;
- (void)willPrepareCamera;
- (id)initWithPerfComponents:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

