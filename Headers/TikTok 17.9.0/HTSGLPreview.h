//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSGLInput-Protocol.h"

@class CAEAGLLayer, HTSGLContext, HTSGLFramebuffer, NSString, VELimitLogger, VEMVPRenderer;
@protocol IVERendererDrawable;

@interface HTSGLPreview : UIView <HTSGLInput>
{
    unsigned long long _inputRotation;
    HTSGLFramebuffer *_inputFramebufferForDisplay;
    struct CGSize _inputImageSize;
    float _imageVertices[8];
    float _backgroundColorRed;
    float _backgroundColorGreen;
    float _backgroundColorBlue;
    float _backgroundColorAlpha;
    struct CGSize _boundsSizeAtFrameBufferEpoch;
    HTSGLFramebuffer *_cacheFramebufferForCapture;
    _Bool _hasRender;
    long long _frameSizeChanged;
    struct CGSize _preFrameSize;
    CAEAGLLayer *_eaglLayer;
    _Bool _flipX;
    _Bool _flipY;
    double _rotateAngle;
    CDUnknownBlockType _previewImageHandler;
    _Bool enabled;
    unsigned long long aspectRatio;
    unsigned long long _fillMode;
    HTSGLContext *_context;
    CDUnknownBlockType _firstRenderCallback;
    VELimitLogger *_previewLimitLogger;
    VEMVPRenderer *_textureMvpRenderer;
    id <IVERendererDrawable> _rendererDrawable;
    struct CGSize _scaleSize;
    struct CGSize _frameSize;
    struct CGRect _viewBounds;
}

+ (Class)layerClass;
@property(retain, nonatomic) id <IVERendererDrawable> rendererDrawable; // @synthesize rendererDrawable=_rendererDrawable;
@property(retain) VEMVPRenderer *textureMvpRenderer; // @synthesize textureMvpRenderer=_textureMvpRenderer;
@property(retain, nonatomic) VELimitLogger *previewLimitLogger; // @synthesize previewLimitLogger=_previewLimitLogger;
@property(nonatomic) struct CGRect viewBounds; // @synthesize viewBounds=_viewBounds;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(readonly, nonatomic) struct CGSize scaleSize; // @synthesize scaleSize=_scaleSize;
@property(copy, nonatomic) CDUnknownBlockType firstRenderCallback; // @synthesize firstRenderCallback=_firstRenderCallback;
@property(retain, nonatomic) HTSGLContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) unsigned long long aspectRatio; // @synthesize aspectRatio;
- (void).cxx_destruct;
- (void)addTipWithAB;
- (void)needCapturePreview:(id)arg1;
- (void)capturePreviewtoImageAsync:(CDUnknownBlockType)arg1;
- (struct CGImage *)capturePreviewtoImage;
@property(readonly, nonatomic) struct CGSize sizeInPixels;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (void)setBackgroundColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)recalculateViewGeometry;
- (void)clearBackground;
- (void)dealloc;
- (void)layoutSubviews;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

