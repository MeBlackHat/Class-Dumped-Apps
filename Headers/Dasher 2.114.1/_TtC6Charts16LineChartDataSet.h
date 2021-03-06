//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Charts/_TtC6Charts21LineRadarChartDataSet.h>

@class NSArray, UIColor;
@protocol IChartFillFormatter;

@interface _TtC6Charts16LineChartDataSet : _TtC6Charts21LineRadarChartDataSet
{
    // Error parsing type: , name: mode
    // Error parsing type: , name: _cubicIntensity
    // Error parsing type: , name: circleRadius
    // Error parsing type: , name: circleHoleRadius
    // Error parsing type: , name: circleColors
    // Error parsing type: , name: drawCirclesEnabled
    // Error parsing type: , name: circleHoleColor
    // Error parsing type: , name: drawCircleHoleEnabled
    // Error parsing type: , name: lineDashPhase
    // Error parsing type: , name: lineDashLengths
    // Error parsing type: , name: lineCapType
    // Error parsing type: , name: _fillFormatter
}

- (void).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, retain) id <IChartFillFormatter> fillFormatter;
@property(nonatomic) int lineCapType; // @synthesize lineCapType;
@property(nonatomic, copy) NSArray *lineDashLengths;
@property(nonatomic) double lineDashPhase; // @synthesize lineDashPhase;
@property(nonatomic, readonly) _Bool isDrawCircleHoleEnabled;
@property(nonatomic) _Bool drawCircleHoleEnabled; // @synthesize drawCircleHoleEnabled;
@property(nonatomic, retain) UIColor *circleHoleColor; // @synthesize circleHoleColor;
@property(nonatomic, readonly) _Bool isDrawCirclesEnabled;
@property(nonatomic) _Bool drawCirclesEnabled; // @synthesize drawCirclesEnabled;
- (void)resetCircleColors:(long long)arg1;
- (void)setCircleColor:(id)arg1;
- (id)getCircleColorAtIndex:(long long)arg1;
@property(nonatomic, copy) NSArray *circleColors;
@property(nonatomic) double circleHoleRadius; // @synthesize circleHoleRadius;
@property(nonatomic) double circleRadius; // @synthesize circleRadius;
@property(nonatomic) double cubicIntensity;
@property(nonatomic) long long mode; // @synthesize mode;
- (id)initWithEntries:(id)arg1 label:(id)arg2;
- (id)init;

@end

