//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAMetalLayer, MTLRenderPassDescriptor;
@protocol CAMetalDrawable, MTLDevice, WAMTKViewDelegate;

@interface WAMTKView : UIView
{
    MTLRenderPassDescriptor *_renderPassDescriptor;
    CADisplayLink *_displayLink;
    id <CAMetalDrawable> _currentDrawable;
    double _scale;
    id <WAMTKViewDelegate> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <WAMTKViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)redraw:(id)arg1;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property(readonly, nonatomic) id <CAMetalDrawable> currentDrawable;
@property(nonatomic) unsigned long long colorPixelFormat;
@property(retain, nonatomic) id <MTLDevice> device;
- (void)setFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) CAMetalLayer *layer; // @dynamic layer;

@end

