//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

#import "ASTLinkLabelDelegate-Protocol.h"

@class ASTLinkLabel, GIPNetworkImageView, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;
@protocol ASTLinkSelection;

@interface ASTMenuExpandableTableViewCell : ASTMenuBaseTableViewCell <ASTLinkLabelDelegate>
{
    NSLayoutConstraint *_titleSubtitleVerticalSpacingLayoutConstraint;
    NSLayoutConstraint *_leftIconWidthLayoutConstraint;
    NSLayoutConstraint *_leftIconHeightLayoutConstraint;
    NSLayoutConstraint *_leftIconTitleHorizontalSpacingLayoutConstraint;
    NSLayoutConstraint *_titleExpandIconHorizontalSpacingLayoutConstraint;
    NSLayoutConstraint *_expandIconWidthLayoutConstraint;
    NSLayoutConstraint *_expandIconHeightLayoutConstraint;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    NSLayoutConstraint *_leftLayoutConstraint;
    NSLayoutConstraint *_rightLayoutConstraint;
    UIView *_maskView;
    _Bool _expandIconOnRight;
    _Bool _enabled;
    GIPNetworkImageView *_leftIcon;
    UILabel *_titleLabel;
    ASTLinkLabel *_subtitleLabel;
    UIImageView *_expandIcon;
    id <ASTLinkSelection> _subtitleLinkSelectionDelegate;
    double _leftIconTitleHorizontalSpacing;
    double _titleSubtitleVerticalSpacing;
    struct UIEdgeInsets _edgeInsets;
}

@property(nonatomic) double titleSubtitleVerticalSpacing; // @synthesize titleSubtitleVerticalSpacing=_titleSubtitleVerticalSpacing;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double leftIconTitleHorizontalSpacing; // @synthesize leftIconTitleHorizontalSpacing=_leftIconTitleHorizontalSpacing;
@property(nonatomic) __weak id <ASTLinkSelection> subtitleLinkSelectionDelegate; // @synthesize subtitleLinkSelectionDelegate=_subtitleLinkSelectionDelegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isExpandIconOnRight) _Bool expandIconOnRight; // @synthesize expandIconOnRight=_expandIconOnRight;
@property(readonly, nonatomic) UIImageView *expandIcon; // @synthesize expandIcon=_expandIcon;
@property(readonly, nonatomic) ASTLinkLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GIPNetworkImageView *leftIcon; // @synthesize leftIcon=_leftIcon;
- (void).cxx_destruct;
- (void)label:(id)arg1 didTapLink:(id)arg2;
- (void)updateConstraints;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)addCustomSubViews;
- (void)prepareForReuse;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

