//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AmazonChimeSDKMedia/MTKViewDelegate-Protocol.h>
#import <AmazonChimeSDKMedia/RTCVideoRenderer-Protocol.h>

@class Chime_RTCMTLI420Renderer, Chime_RTCMTLNV12Renderer, Chime_RTCMTLRGBRenderer, Chime_RTCVideoFrame, MTKView, NSString, NSValue;
@protocol RTCVideoViewDelegate;

@interface Chime_RTCMTLVideoView : UIView <MTKViewDelegate, RTCVideoRenderer>
{
    _Bool _mirror;
    id <RTCVideoViewDelegate> _delegate;
    Chime_RTCMTLI420Renderer *_rendererI420;
    Chime_RTCMTLNV12Renderer *_rendererNV12;
    Chime_RTCMTLRGBRenderer *_rendererRGB;
    MTKView *_metalView;
    Chime_RTCVideoFrame *_videoFrame;
    long long _lastFrameTimeNs;
    NSValue *_rotationOverride;
    struct CGSize _videoFrameSize;
}

+ (id)createRGBRenderer;
+ (id)createI420Renderer;
+ (id)createNV12Renderer;
+ (id)createMetalView:(struct CGRect)arg1;
+ (_Bool)isMetalAvailable;
@property(nonatomic) _Bool mirror; // @synthesize mirror=_mirror;
@property(retain, nonatomic) NSValue *rotationOverride; // @synthesize rotationOverride=_rotationOverride;
@property(nonatomic) long long lastFrameTimeNs; // @synthesize lastFrameTimeNs=_lastFrameTimeNs;
@property(nonatomic) struct CGSize videoFrameSize; // @synthesize videoFrameSize=_videoFrameSize;
@property(retain) Chime_RTCVideoFrame *videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) MTKView *metalView; // @synthesize metalView=_metalView;
@property(retain, nonatomic) Chime_RTCMTLRGBRenderer *rendererRGB; // @synthesize rendererRGB=_rendererRGB;
@property(retain, nonatomic) Chime_RTCMTLNV12Renderer *rendererNV12; // @synthesize rendererNV12=_rendererNV12;
@property(retain, nonatomic) Chime_RTCMTLI420Renderer *rendererI420; // @synthesize rendererI420=_rendererI420;
@property(nonatomic) __weak id <RTCVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)renderFrame:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)drawableSize;
- (long long)frameRotation;
- (void)mtkView:(id)arg1 drawableSizeWillChange:(struct CGSize)arg2;
- (void)drawInMTKView:(id)arg1;
- (void)layoutSubviews;
- (void)setMultipleTouchEnabled:(_Bool)arg1;
- (void)configure;
@property(nonatomic) long long videoContentMode;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

