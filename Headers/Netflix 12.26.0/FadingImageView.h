//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSArray, NSTimer;

@interface FadingImageView : UIImageView
{
    _Bool _restartTimer;
    UIImageView *_currentImage;
    UIImageView *_imageA;
    UIImageView *_imageB;
    long long _currentImageIndex;
    NSArray *_images;
    double _duration;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool restartTimer; // @synthesize restartTimer=_restartTimer;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) long long currentImageIndex; // @synthesize currentImageIndex=_currentImageIndex;
@property(retain, nonatomic) UIImageView *imageB; // @synthesize imageB=_imageB;
@property(retain, nonatomic) UIImageView *imageA; // @synthesize imageA=_imageA;
@property(nonatomic) __weak UIImageView *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;
- (void)fadeInImage:(id)arg1;
- (void)advanceImageAndFadeIn;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setAnimationImages:(id)arg1;
- (id)animationImages;
- (void)setAnimationDuration:(double)arg1;
- (double)animationDuration;
- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end

