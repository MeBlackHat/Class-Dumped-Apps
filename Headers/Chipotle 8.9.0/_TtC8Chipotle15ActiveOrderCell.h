//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIButton, UIImageView, UILabel;

@interface _TtC8Chipotle15ActiveOrderCell : UICollectionViewCell
{
    // Error parsing type: , name: timeLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: addressLabel
    // Error parsing type: , name: orderTypeImageView
    // Error parsing type: , name: orderDetailsButton
    // Error parsing type: , name: showOrderDetailsAction
    // Error parsing type: , name: orderId
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)orderDetailsSelected:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic) __weak UIButton *orderDetailsButton; // @synthesize orderDetailsButton;
@property(nonatomic) __weak UIImageView *orderTypeImageView; // @synthesize orderTypeImageView;
@property(nonatomic) __weak UILabel *addressLabel; // @synthesize addressLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel;

@end

