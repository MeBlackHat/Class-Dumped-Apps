//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVScale-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface GAVColorScale : NSObject <GAVScale>
{
    NSArray *_colorList;
    NSMutableDictionary *_domainMapping;
}

+ (id)d3Category20cColors;
+ (id)d3Category20bColors;
+ (id)d3Category20Colors;
+ (id)d3Category10Colors;
+ (id)acuxEightSecondaryColors;
+ (id)acuxEightMainColors;
+ (id)acuxFourSecondaryColors;
+ (id)acuxFourMainColors;
+ (void)initialize;
@property(retain) NSMutableDictionary *domainMapping; // @synthesize domainMapping=_domainMapping;
@property(retain) NSArray *colorList; // @synthesize colorList=_colorList;
- (void).cxx_destruct;
- (void)resetDomain;
- (id)applyForValue:(id)arg1;
- (id)initWithColorList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

