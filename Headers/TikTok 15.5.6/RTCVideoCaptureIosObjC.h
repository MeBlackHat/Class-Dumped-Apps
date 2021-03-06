//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ByteRtcEngineKit/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>

@class AVCaptureConnection, AVCaptureSession, NSCondition, NSString;

@interface RTCVideoCaptureIosObjC : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct VideoCaptureIos *_owner;
    struct VideoCaptureCapability _capability;
    AVCaptureSession *_captureSession;
    _Bool _orientationHasChanged;
    AVCaptureConnection *_connection;
    _Bool _captureChanging;
    NSCondition *_captureChangingCondition;
    int _framRotation;
}

@property int frameRotation; // @synthesize frameRotation=_framRotation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)waitForCaptureChangeToFinish;
- (void)signalCaptureChangeEnd;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_Bool)changeCaptureInputByUniqueId:(id)arg1;
- (void)stopCaptureInBackground;
- (_Bool)stopCapture;
- (void)onVideoError:(id)arg1;
- (void)setRelativeVideoOrientation;
- (void)startCaptureInBackgroundWithOutput:(id)arg1;
- (id)currentOutput;
- (_Bool)startCaptureWithCapability:(const struct VideoCaptureCapability *)arg1;
- (_Bool)setCaptureDeviceByUniqueId:(id)arg1;
- (void)dealloc;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)directOutputToNil;
- (void)directOutputToSelf;
- (id)initWithOwner:(struct VideoCaptureIos *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

