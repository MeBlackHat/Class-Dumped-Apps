//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIImage, UIImageView, UILabel;

@interface SCShowMoreButtonView : UIView
{
    _Bool _useRoundedCorners;
    long long _buttonState;
    UILabel *_textLabel;
    UIImageView *_spinnerImageView;
    NSArray *_labelInsetConstraints;
}

@property(retain, nonatomic) NSArray *labelInsetConstraints; // @synthesize labelInsetConstraints=_labelInsetConstraints;
@property(nonatomic, getter=shouldUseRoundedCorners) _Bool useRoundedCorners; // @synthesize useRoundedCorners=_useRoundedCorners;
@property(retain, nonatomic) UIImageView *spinnerImageView; // @synthesize spinnerImageView=_spinnerImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets textLabelInsets;
@property(nonatomic) double borderWidth;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) UIColor *borderColor;
- (void)setButtonState:(long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)tapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

