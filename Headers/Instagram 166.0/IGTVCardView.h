//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface IGTVCardView : UIView
{
    _Bool _hasBorder;
    double _borderWidth;
    UIView *_contentView;
    double _cornerRadius;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasBorder; // @synthesize hasBorder=_hasBorder;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_updateBorder;
- (void)_updateCornerRadius;
- (struct CGRect)_contentViewFrame;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithBackgroundColor:(id)arg1 hasBorder:(_Bool)arg2 cornerRadius:(double)arg3;

@end

