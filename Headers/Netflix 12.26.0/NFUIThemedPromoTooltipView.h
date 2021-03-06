//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ModalShimContainerViewProtocol-Protocol.h"

@class NFUILabel, NSString, UIImageView;
@protocol ModalShimContainerDelegateProtocol, NFUIThemedPromoTooltipViewDelegate;

@interface NFUIThemedPromoTooltipView : UIView <ModalShimContainerViewProtocol>
{
    _Bool _isPointingUp;
    id <ModalShimContainerDelegateProtocol> _shimDelegate;
    id <NFUIThemedPromoTooltipViewDelegate> _tooltipDelegate;
    NFUILabel *_titleLabel;
    UIImageView *_iconImageView;
    UIImageView *_upArrowView;
    UIImageView *_downArrowView;
}

+ (id)createInstance;
@property(nonatomic) __weak UIImageView *downArrowView; // @synthesize downArrowView=_downArrowView;
@property(nonatomic) __weak UIImageView *upArrowView; // @synthesize upArrowView=_upArrowView;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool isPointingUp; // @synthesize isPointingUp=_isPointingUp;
@property(retain, nonatomic) id <NFUIThemedPromoTooltipViewDelegate> tooltipDelegate; // @synthesize tooltipDelegate=_tooltipDelegate;
@property(nonatomic) __weak id <ModalShimContainerDelegateProtocol> shimDelegate; // @synthesize shimDelegate=_shimDelegate;
- (void).cxx_destruct;
- (void)viewWillBeDismissed:(id)arg1;
- (struct CGSize)sizeForContent;
- (id)viewForContent;
- (void)onTap;
- (void)onXTapped;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

