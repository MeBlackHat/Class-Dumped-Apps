//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "PopupViewControllerProtocol-Protocol.h"

@class BaseButton, BaseLabel, BaseView, NSArray, NSString, UIStackView;
@protocol AccountContext, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_;

@interface PopupViewController : BaseViewController <PopupViewControllerProtocol>
{
    _Bool _disableDismissingByTappingOutsideContent;
    _Bool _shouldBlurBackground;
    id <AccountContext> _accountContext;
    BaseView *_contentView;
    long long _bottomButtonsAxis;
    BaseButton *_closeButton;
    BaseLabel *_titleLabel;
    UIStackView *_bottomButtonStackView;
    UIStackView *_contentStackView;
    NSArray *_bottomButtons;
    id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> _senderAnalyticsContext;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <_TtP18AnalyticsFramework26AnalyticsScreenViewContext_> senderAnalyticsContext; // @synthesize senderAnalyticsContext=_senderAnalyticsContext;
@property(copy, nonatomic) NSArray *bottomButtons; // @synthesize bottomButtons=_bottomButtons;
@property(retain, nonatomic) UIStackView *contentStackView; // @synthesize contentStackView=_contentStackView;
@property(retain, nonatomic) UIStackView *bottomButtonStackView; // @synthesize bottomButtonStackView=_bottomButtonStackView;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) BaseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) long long bottomButtonsAxis; // @synthesize bottomButtonsAxis=_bottomButtonsAxis;
@property(nonatomic) _Bool shouldBlurBackground; // @synthesize shouldBlurBackground=_shouldBlurBackground;
@property(nonatomic) _Bool disableDismissingByTappingOutsideContent; // @synthesize disableDismissingByTappingOutsideContent=_disableDismissingByTappingOutsideContent;
@property(readonly, nonatomic) BaseView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
- (id)analyticsContext;
- (_Bool)isInAnonymousBrowsing;
- (_Bool)shouldDismissWhenDimmerTapped;
- (double)preferredPopupHeightForWidth:(double)arg1;
- (void)configureViewAppearance;
- (void)viewDidLoad;
- (id)initWithAccountContext:(id)arg1 analyticsContext:(id)arg2 contentView:(id)arg3 bottomButtons:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

