//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/GOOPopoverView.h>

@interface GOOPopoverMenuView : GOOPopoverView
{
    unsigned long long _anchorCorner;
}

+ (Class)layerClass;
- (struct UIEdgeInsets)contentInsets;
- (void)updateAnchorCornerForRect:(struct CGRect)arg1;
- (void)pointAtRect:(struct CGRect)arg1 arrowDirections:(unsigned long long)arg2;
- (void)animateOut;
- (void)prepareToAnimateOut;
- (void)animateInWithDuration:(double)arg1;
- (_Bool)shouldDisplayArrow;
- (void)pointAtRect:(struct CGRect)arg1 anchorCorner:(unsigned long long)arg2;
- (void)pointAtView:(id)arg1 withOffset:(struct CGSize)arg2 anchorCorner:(unsigned long long)arg3;
- (id)shadowLayer;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end

