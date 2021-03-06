//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface UICArrowView : UIView
{
    double _tailWidth;
    long long _direction;
    UIColor *_color;
    long long _initialDirection;
}

+ (Class)layerClass;
@property(nonatomic) long long initialDirection; // @synthesize initialDirection=_initialDirection;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) double tailWidth; // @synthesize tailWidth=_tailWidth;
- (void).cxx_destruct;
- (double)arrowHeightFromWidth:(double)arg1;
- (double)arrowWidthFromHeight:(double)arg1;
- (void)calculateRightOrientedArrowPoints:(struct CGPoint [6])arg1 withinRect:(struct CGRect)arg2 withTailOffset:(double)arg3;
- (void)calculateLeftOrientedArrowPoints:(struct CGPoint [6])arg1 withinRect:(struct CGRect)arg2 withTailOffset:(double)arg3;
- (void)calculateArrowPoints:(struct CGPoint [6])arg1 withinRect:(struct CGRect)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

