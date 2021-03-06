//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SAVideoRangeSlider;

@protocol SAVideoRangeSliderDelegate <NSObject>

@optional
- (void)videoRange:(SAVideoRangeSlider *)arg1 didGestureStateEndedLeftPosition:(double)arg2 rightPosition:(double)arg3 thumbPosition:(double)arg4;
- (void)trimFinished:(SAVideoRangeSlider *)arg1;
- (void)movedSeekBar:(SAVideoRangeSlider *)arg1 didChangeSeekPosition:(double)arg2;
- (void)movedScrubBar:(SAVideoRangeSlider *)arg1 didChangeLeftPosition:(double)arg2 rightPosition:(double)arg3;
- (void)updateRightPosition:(double)arg1;
- (void)rightTrimMoved:(SAVideoRangeSlider *)arg1 didChangeRightPosition:(double)arg2;
- (void)leftTrimMoved:(SAVideoRangeSlider *)arg1 didChangeLeftPosition:(double)arg2;
@end

