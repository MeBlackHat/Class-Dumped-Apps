//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSPolyline2D, GMSPolylineDrawStyle, NSArray, NSSet;

@interface GMSx_RoutePresentation : NSObject
{
    NSSet *_indoorLevelIDs;
    set_d0407c9f _fixedIndices;
    GMSPolylineDrawStyle *_drawStyle;
    GMSPolyline2D *_polyline;
    NSArray *_trafficJamCalloutModels;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *trafficJamCalloutModels; // @synthesize trafficJamCalloutModels=_trafficJamCalloutModels;
@property(readonly, nonatomic) const set_d0407c9f *fixedIndices; // @synthesize fixedIndices=_fixedIndices;
@property(readonly, nonatomic) NSSet *indoorLevelIDs; // @synthesize indoorLevelIDs=_indoorLevelIDs;
@property(readonly, nonatomic) GMSPolyline2D *polyline; // @synthesize polyline=_polyline;
@property(readonly, nonatomic) GMSPolylineDrawStyle *drawStyle; // @synthesize drawStyle=_drawStyle;
- (id)initWithDrawStyle:(id)arg1 polyline:(id)arg2 indoorLevelIDs:(id)arg3 fixedIndices:(set_d0407c9f *)arg4 trafficJamCalloutModels:(id)arg5;

@end

