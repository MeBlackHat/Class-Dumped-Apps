//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAOverlayLineDrawInput, MAOverlayLineDrawOutput, MAPolygonDrawInput, MAPolygonDrawOutput, MATexturedPolygonDrawInput, MATexturedPolygonDrawOutput;

@interface MAOverlayDrawAction : NSObject
{
    unsigned long long _type;
    MAOverlayLineDrawInput *_lineDrawInput;
    MAOverlayLineDrawOutput *_lineDrawOutput;
    MAPolygonDrawInput *_polygonDrawInput;
    MAPolygonDrawOutput *_polygonDrawOutput;
    MATexturedPolygonDrawInput *_texturePolygonDrawInput;
    MATexturedPolygonDrawOutput *_texturePolygonDrawOutput;
}

@property(retain, nonatomic) MATexturedPolygonDrawOutput *texturePolygonDrawOutput; // @synthesize texturePolygonDrawOutput=_texturePolygonDrawOutput;
@property(retain, nonatomic) MATexturedPolygonDrawInput *texturePolygonDrawInput; // @synthesize texturePolygonDrawInput=_texturePolygonDrawInput;
@property(retain, nonatomic) MAPolygonDrawOutput *polygonDrawOutput; // @synthesize polygonDrawOutput=_polygonDrawOutput;
@property(retain, nonatomic) MAPolygonDrawInput *polygonDrawInput; // @synthesize polygonDrawInput=_polygonDrawInput;
@property(retain, nonatomic) MAOverlayLineDrawOutput *lineDrawOutput; // @synthesize lineDrawOutput=_lineDrawOutput;
@property(retain, nonatomic) MAOverlayLineDrawInput *lineDrawInput; // @synthesize lineDrawInput=_lineDrawInput;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)drawOutput;
- (id)drawInput;

@end

