//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface _TtC3QVC38QVCProductOptionsModuleSwatchImageCell : UICollectionViewCell
{
    // Error parsing type: , name: borderView
    // Error parsing type: , name: swatchImageView
    // Error parsing type: , name: saleBadgeLabel
    // Error parsing type: , name: optionContentHeightConstraint
    // Error parsing type: , name: borderLayer
    // Error parsing type: , name: soldOutLayer
    // Error parsing type: , name: kLabelVerticalInsets
    // Error parsing type: , name: kLabelHorizontalInsets
    // Error parsing type: , name: swatchCode
    // Error parsing type: , name: swatchImage
    // Error parsing type: , name: optionAvailability
    // Error parsing type: , name: isMarkedDown
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)awakeFromNib;
@property(nonatomic) _Bool selected;
- (_Bool)isSelected;
@property(nonatomic, retain) NSLayoutConstraint *optionContentHeightConstraint; // @synthesize optionContentHeightConstraint;
@property(nonatomic, retain) UILabel *saleBadgeLabel; // @synthesize saleBadgeLabel;
@property(nonatomic, retain) UIImageView *swatchImageView; // @synthesize swatchImageView;
@property(nonatomic, retain) UIView *borderView; // @synthesize borderView;

@end

