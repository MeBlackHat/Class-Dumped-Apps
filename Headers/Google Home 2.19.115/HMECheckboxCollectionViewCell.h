//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MDCCollectionViewTextCell.h"

@interface HMECheckboxCollectionViewCell : MDCCollectionViewTextCell
{
    _Bool _handlesOwnInkAnimation;
}

@property(nonatomic) _Bool handlesOwnInkAnimation; // @synthesize handlesOwnInkAnimation=_handlesOwnInkAnimation;
- (id)uncheckHint;
- (id)checkHint;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

