//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEFilterFrameExtractor.h"

@protocol IVEAmazingEffectProtocol;

@interface VEAmazingFrameExtractor : VEFilterFrameExtractor
{
    int _textureId;
    id <IVEAmazingEffectProtocol> _renderer;
}

@property(nonatomic) int textureId; // @synthesize textureId=_textureId;
@property(retain, nonatomic) id <IVEAmazingEffectProtocol> renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)processWithDriver:(id)arg1 frameBuffer:(id)arg2 atTime:(double)arg3;
- (void)disableFeatures:(id)arg1;
- (void)enableFeatures:(id)arg1;
- (void)extractTexture:(int)arg1 outputSize:(struct CGSize)arg2 time:(double)arg3;
- (id)init:(id)arg1 context:(id)arg2;

@end

