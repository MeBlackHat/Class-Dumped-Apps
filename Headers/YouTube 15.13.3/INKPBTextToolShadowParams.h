//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class INKPBColor;

@interface INKPBTextToolShadowParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) INKPBColor *color; // @dynamic color;
@property(nonatomic) float dxFractionOfFontSize; // @dynamic dxFractionOfFontSize;
@property(nonatomic) float dyFractionOfFontSize; // @dynamic dyFractionOfFontSize;
@property(nonatomic) _Bool hasColor; // @dynamic hasColor;
@property(nonatomic) _Bool hasDxFractionOfFontSize; // @dynamic hasDxFractionOfFontSize;
@property(nonatomic) _Bool hasDyFractionOfFontSize; // @dynamic hasDyFractionOfFontSize;
@property(nonatomic) _Bool hasRadiusFractionOfFontSize; // @dynamic hasRadiusFractionOfFontSize;
@property(nonatomic) float radiusFractionOfFontSize; // @dynamic radiusFractionOfFontSize;

@end

