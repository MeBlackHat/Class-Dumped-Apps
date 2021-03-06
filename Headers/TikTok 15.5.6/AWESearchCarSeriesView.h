//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, YYLabel;

@interface AWESearchCarSeriesView : UIView
{
    UIImageView *_carImageView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_descriptionLabel;
    YYLabel *_salesRankLabel;
    UIImageView *_arrowImageView;
}

@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) YYLabel *salesRankLabel; // @synthesize salesRankLabel=_salesRankLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *carImageView; // @synthesize carImageView=_carImageView;
- (void).cxx_destruct;
- (void)configUI:(id)arg1;
- (void)configureWithModel:(id)arg1;
- (id)init;

@end

