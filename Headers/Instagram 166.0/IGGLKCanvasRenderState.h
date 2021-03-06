//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAEAGLLayer, CAMetalLayer, IGGLKColorRenderbuffer, IGGLKContext, IGGLKTexture2D;
@protocol MTLDrawable;

@interface IGGLKCanvasRenderState : NSObject
{
    _Bool _drawableIGL;
    IGGLKContext *_context;
    IGGLKColorRenderbuffer *_finalColorRenderbuffer;
    CAMetalLayer *_finalMetalLayer;
    CAEAGLLayer *_finalEAGLLayer;
    IGGLKTexture2D *_finalTexture;
    id <MTLDrawable> _drawable;
    unsigned long long _numRemainingNodesRequiringSampleTexture;
    double _alpha;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool drawableIGL; // @synthesize drawableIGL=_drawableIGL;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
@property(nonatomic) unsigned long long numRemainingNodesRequiringSampleTexture; // @synthesize numRemainingNodesRequiringSampleTexture=_numRemainingNodesRequiringSampleTexture;
@property(retain, nonatomic) id <MTLDrawable> drawable; // @synthesize drawable=_drawable;
@property(retain, nonatomic) IGGLKTexture2D *finalTexture; // @synthesize finalTexture=_finalTexture;
@property(retain, nonatomic) CAEAGLLayer *finalEAGLLayer; // @synthesize finalEAGLLayer=_finalEAGLLayer;
@property(retain, nonatomic) CAMetalLayer *finalMetalLayer; // @synthesize finalMetalLayer=_finalMetalLayer;
@property(retain, nonatomic) IGGLKColorRenderbuffer *finalColorRenderbuffer; // @synthesize finalColorRenderbuffer=_finalColorRenderbuffer;
@property(retain, nonatomic) IGGLKContext *context; // @synthesize context=_context;
- (id)init;

@end

