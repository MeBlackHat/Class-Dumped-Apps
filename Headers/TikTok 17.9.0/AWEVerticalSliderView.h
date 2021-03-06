//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, UIImageView, UILabel;
@protocol AWEVerticalSliderViewDelegate;

@interface AWEVerticalSliderView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _showAnimation;
    _Bool _stretchedAnimation;
    id <AWEVerticalSliderViewDelegate> _delegate;
    double _topBoundary;
    double _bottomBoundary;
    UILabel *_dateLabel;
    NSDictionary *_trackExtraDict;
    UIImageView *_sliderBottomImageView;
    UIImageView *_sliderUpperImageView;
    NSString *_currentStateStr;
    struct CGRect _originalFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *currentStateStr; // @synthesize currentStateStr=_currentStateStr;
@property(retain, nonatomic) UIImageView *sliderUpperImageView; // @synthesize sliderUpperImageView=_sliderUpperImageView;
@property(retain, nonatomic) UIImageView *sliderBottomImageView; // @synthesize sliderBottomImageView=_sliderBottomImageView;
@property(nonatomic) struct CGRect originalFrame; // @synthesize originalFrame=_originalFrame;
@property(retain, nonatomic) NSDictionary *trackExtraDict; // @synthesize trackExtraDict=_trackExtraDict;
@property(nonatomic) _Bool stretchedAnimation; // @synthesize stretchedAnimation=_stretchedAnimation;
@property(nonatomic) _Bool showAnimation; // @synthesize showAnimation=_showAnimation;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) double bottomBoundary; // @synthesize bottomBoundary=_bottomBoundary;
@property(nonatomic) double topBoundary; // @synthesize topBoundary=_topBoundary;
@property(nonatomic) __weak id <AWEVerticalSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)shrinkAnimation;
- (void)stretchAnimation;
- (void)disappearAnimation;
- (void)appearAnimation;
- (void)handleLongPress:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

