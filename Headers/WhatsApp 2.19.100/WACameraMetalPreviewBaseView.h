//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WACameraPreviewViewProtocol-Protocol.h"

@class CADisplayLink, NSObject, NSString, UILabel;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState, OS_dispatch_queue, WACameraPreviewViewDelegate;

@interface WACameraMetalPreviewBaseView : UIView <WACameraPreviewViewProtocol>
{
    struct CGSize _textureSize;
    long long _pauseCounter;
    // Error parsing type: AB, name: _mediaServicesUnavailable
    struct __CVMetalTextureCache *_textureCacheRef;
    id <MTLRenderPipelineState> _renderPipelineState;
    id <MTLCommandQueue> _commandQueue;
    id <MTLBuffer> _vertexCoordBuffer;
    id <MTLBuffer> _textCoordBuffer;
    _Bool _isMetalPerfImprovementEnabled;
    NSObject<OS_dispatch_queue> *_displayQueue;
    struct {
        void *lockPointer;
        struct os_unfair_lock_s innerUnfairLock;
        int innerSpinLock;
    } _sampleBufferAndPositionLock;
    struct opaqueCMBufferQueue *_bufferQueue;
    long long _lastSampleBufferPosition;
    long long _dropSampleBuffersCounter;
    CADisplayLink *_fpsDisplayLink;
    double _fpsLastTimeInterval;
    UILabel *_fpsLabel;
    id <WACameraPreviewViewDelegate> _delegate;
}

+ (void)prewarm;
@property(nonatomic) __weak id <WACameraPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)mtkViewFrame;
- (void)pauseMTKView:(_Bool)arg1;
- (id)mtkCurrentRenderPassDescriptor;
- (id)mtkCurrentDrawable;
- (unsigned long long)mtkViewColorPixelFormat;
- (id)mtkViewDevice;
- (void)layoutMTKViewIfNeeded;
- (void)generateMTKView;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1 mirrored:(_Bool)arg2;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1 mirrored:(_Bool)arg2;
- (void)endPausingUpdate;
- (void)beginPausingUpdate;
- (void)clearMetalCommandBuffer;
- (void)clear;
- (void)dropSampleBuffersUntilDevicePositionChangesToPosition:(long long)arg1;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 position:(long long)arg2;
@property(readonly, nonatomic) struct CGSize displayedImageSize;
@property(readonly, nonatomic, getter=isPaused) _Bool paused;
- (void)mediaServicesWereReset:(id)arg1;
- (void)mediaServicesWereLost:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)registerNotifications;
- (void)setupTransformWithTextureWidth:(long long)arg1 textureHeight:(long long)arg2;
- (void)flushMetalTextureRefY:(struct __CVBuffer *)arg1 metalTextureRefUV:(struct __CVBuffer *)arg2 metalTextureCacheRef:(struct __CVMetalTextureCache *)arg3;
- (void)generateMetalTextureRef:(struct __CVBuffer *)arg1 cvTextureRef:(struct __CVBuffer **)arg2 planeIndex:(long long)arg3;
- (void)displaySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)redrewIfNeeded;
- (void)didRedrawContext;
- (void)createTextureCache;
- (void)configureMetal;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

