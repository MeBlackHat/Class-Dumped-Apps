//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;
@protocol T1BoundedSliderThumbViewAccessibilityDelegate;

@interface T1BoundedSliderThumbView : UIView
{
    UIColor *_color;
    UIColor *_gripColor;
    id <T1BoundedSliderThumbViewAccessibilityDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <T1BoundedSliderThumbViewAccessibilityDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

