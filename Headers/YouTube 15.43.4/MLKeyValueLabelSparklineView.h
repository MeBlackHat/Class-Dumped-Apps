//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MLKeyValueLabel, MLSparklineView;

@interface MLKeyValueLabelSparklineView : UIView
{
    MLKeyValueLabel *_label;
    MLSparklineView *_sparkline;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MLSparklineView *sparkline; // @synthesize sparkline=_sparkline;
@property(retain, nonatomic) MLKeyValueLabel *label; // @synthesize label=_label;
- (void)layoutSubviews;

@end

