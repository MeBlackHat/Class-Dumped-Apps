//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView, _TtC10CoreStyles9CoreLabel;

@interface PMPaymentMethodsDeleteCardCell : UITableViewCell
{
    _TtC10CoreStyles9CoreLabel *_deleteCardLabel;
    UIView *_deleteView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *deleteView; // @synthesize deleteView=_deleteView;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *deleteCardLabel; // @synthesize deleteCardLabel=_deleteCardLabel;
- (void)setupConstraints;
- (void)initView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

