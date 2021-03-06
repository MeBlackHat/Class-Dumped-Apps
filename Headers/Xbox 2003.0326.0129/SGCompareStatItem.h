//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXTableViewCell.h"

@class NSLayoutConstraint, UILabel, UIView;

@interface SGCompareStatItem : XBXTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_primaryValueDescriptionLabel;
    UILabel *_secondaryValueDescriptionLabel;
    UIView *_primaryPercentageView;
    UIView *_secondaryPercentageView;
    NSLayoutConstraint *_primaryPercentageViewWidthConstraint;
    NSLayoutConstraint *_secondaryPercentageViewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *secondaryPercentageViewWidthConstraint; // @synthesize secondaryPercentageViewWidthConstraint=_secondaryPercentageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *primaryPercentageViewWidthConstraint; // @synthesize primaryPercentageViewWidthConstraint=_primaryPercentageViewWidthConstraint;
@property(retain, nonatomic) UIView *secondaryPercentageView; // @synthesize secondaryPercentageView=_secondaryPercentageView;
@property(retain, nonatomic) UIView *primaryPercentageView; // @synthesize primaryPercentageView=_primaryPercentageView;
@property(retain, nonatomic) UILabel *secondaryValueDescriptionLabel; // @synthesize secondaryValueDescriptionLabel=_secondaryValueDescriptionLabel;
@property(retain, nonatomic) UILabel *primaryValueDescriptionLabel; // @synthesize primaryValueDescriptionLabel=_primaryValueDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)onDataContextPrimaryPercentageChanged;
- (void)onDataContextSecondaryStatValueChanged;
- (void)onDataContextPrimaryStatValueChanged;
- (void)onDataContextStatNameChanged;
- (id)secondaryUserColor;
- (id)primaryUserColor;
- (void)updatePercentageViews;
- (id)getDataContext;
- (void)tearDownObservers;
- (void)setupObservers;
- (void)layoutSubviews;

@end

