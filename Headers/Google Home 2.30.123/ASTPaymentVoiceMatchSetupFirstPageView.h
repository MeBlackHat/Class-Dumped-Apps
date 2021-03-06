//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASTLinkLabelDelegate-Protocol.h"
#import "ASTThemable-Protocol.h"

@class ASTLinkLabel, ASTSettingsFooterView, NSMutableAttributedString, NSString, QTMButton, UIImageView, UILabel, UIScrollView;

@interface ASTPaymentVoiceMatchSetupFirstPageView : UIView <ASTThemable, ASTLinkLabelDelegate>
{
    NSString *_title;
    UIScrollView *_scrollView;
    UIView *_headerView;
    ASTSettingsFooterView *_footerView;
    UILabel *_titleLabel;
    NSMutableAttributedString *_attributedSubtitleText;
    ASTLinkLabel *_subtitleLabel;
    UIImageView *_voiceMatchImageView;
    QTMButton *_leftButton;
    QTMButton *_rightButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASTSettingsFooterView *footerView; // @synthesize footerView=_footerView;
- (void)label:(id)arg1 didTapLink:(id)arg2;
- (void)applyTheme:(unsigned long long)arg1;
- (void)setUpConstraints;
- (void)addSubviews;
- (id)setupHeaderView;
- (id)initWithTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

