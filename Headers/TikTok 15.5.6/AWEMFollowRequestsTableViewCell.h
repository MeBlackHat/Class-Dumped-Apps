//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AWEMFollowRequestsTableViewCell : AWEMTNotificationBaseTableViewCell
{
    UILabel *_followRequestsLabel;
    UIImageView *_arrowImageView;
    UIView *_redpointView;
    UILabel *_countLabel;
    UIView *_separatorLine;
}

@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UIView *redpointView; // @synthesize redpointView=_redpointView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *followRequestsLabel; // @synthesize followRequestsLabel=_followRequestsLabel;
- (void).cxx_destruct;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

