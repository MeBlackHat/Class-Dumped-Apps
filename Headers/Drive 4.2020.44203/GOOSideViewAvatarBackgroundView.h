//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage;

@interface GOOSideViewAvatarBackgroundView : UIView
{
    UIImage *_image;
    struct CGRect _lastBounds;
    struct CGPoint _lastCenter;
}

- (void).cxx_destruct;
- (void)updateLayerContentsWithImage:(id)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

