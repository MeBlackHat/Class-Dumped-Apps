//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer;

@interface SPTContextMenuGradientMaskView : UIView
{
    CALayer *_maskLayer;
    CALayer *_contentMaskLayer;
    CAGradientLayer *_bottomMaskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *bottomMaskLayer; // @synthesize bottomMaskLayer=_bottomMaskLayer;
@property(retain, nonatomic) CALayer *contentMaskLayer; // @synthesize contentMaskLayer=_contentMaskLayer;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

