//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSDate, SVGKImage;

@interface SVGKLayer : CALayer
{
    _Bool _showBorder;
    SVGKImage *_SVGImage;
    NSDate *_startRenderTime;
    NSDate *_endRenderTime;
}

+ (id)layer;
@property(retain, nonatomic) NSDate *endRenderTime; // @synthesize endRenderTime=_endRenderTime;
@property(retain, nonatomic) NSDate *startRenderTime; // @synthesize startRenderTime=_startRenderTime;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) SVGKImage *SVGImage; // @synthesize SVGImage=_SVGImage;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

