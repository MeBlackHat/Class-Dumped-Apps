//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TikTokInlayScrollPanelTopView-Protocol.h"

@class CAShapeLayer, NSString, UIButton, UILabel;
@protocol TikTokSearchSortAndFilterPanelTopViewActionDelegate;

@interface TikTokSearchSortAndFilterPanelTopView : UIView <TikTokInlayScrollPanelTopView>
{
    id <TikTokSearchSortAndFilterPanelTopViewActionDelegate> _actionDelegate;
    UIButton *_cancelButton;
    UIButton *_applyButton;
    UILabel *_titleLabel;
    UIView *_separatorLine;
    CAShapeLayer *_maskLayer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *applyButton; // @synthesize applyButton=_applyButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(nonatomic) __weak id <TikTokSearchSortAndFilterPanelTopViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void)p_setupViews;
- (void)applyClicked;
- (void)cancelClicked;
- (double)inlayScrollPanelTopViewHeight;
- (void)setApplyEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

