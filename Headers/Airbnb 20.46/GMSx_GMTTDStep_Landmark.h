//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDStep_Landmark_FeatureId, GMSx_GMTTDStep_Landmark_Point, NSString;

@interface GMSx_GMTTDStep_Landmark : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPinStyle; // @dynamic hasPinStyle;
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(nonatomic) _Bool hasTextStyle; // @dynamic hasTextStyle;
@property(retain, nonatomic) GMSx_GMTTDStep_Landmark_FeatureId *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int pinStyle; // @dynamic pinStyle;
@property(retain, nonatomic) GMSx_GMTTDStep_Landmark_Point *point; // @dynamic point;
@property(nonatomic) int textStyle; // @dynamic textStyle;

@end

