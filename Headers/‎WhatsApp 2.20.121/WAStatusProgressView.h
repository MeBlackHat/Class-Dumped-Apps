//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface WAStatusProgressView : UIView
{
    unsigned long long _numberOfSegments;
    NSMutableArray *_segmentViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *segmentViews; // @synthesize segmentViews=_segmentViews;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void)setProgress:(double)arg1 forSegmentsAtIndexes:(id)arg2;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

