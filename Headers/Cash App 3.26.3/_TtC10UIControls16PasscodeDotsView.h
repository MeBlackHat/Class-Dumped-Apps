//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface _TtC10UIControls16PasscodeDotsView : UIView
{
    // Error parsing type: , name: numberOfDots
    // Error parsing type: , name: numberOfEnteredDots
    // Error parsing type: , name: shouldUpdateDotViewsInDidSetWhenUpdatingNumberOfEnteredDots
    // Error parsing type: , name: blankDotColorConfiguration
    // Error parsing type: , name: enteredDotColorConfiguration
    // Error parsing type: , name: dotViews
}

+ (double)standardDotDiameter;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic, retain) UIColor *dotBorderColor;
@property(nonatomic, retain) UIColor *enteredDigitColor;
@property(nonatomic, retain) UIColor *blankDigitColor;
- (void)setNumberOfEnteredDots:(long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) long long numberOfDots; // @synthesize numberOfDots;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

