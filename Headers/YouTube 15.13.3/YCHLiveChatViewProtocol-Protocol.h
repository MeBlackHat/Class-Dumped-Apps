//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class UICollectionView, UIView, YCHLiveChatBuyFlowErrorView, YCHLiveChatBuyFlowView, YCHLiveChatPassthroughScrollView, YCHLiveChatProductPickerPanelView, YCHLiveChatStickyView;
@protocol YCHLiveChatActionPanelViewProtocol, YCHLiveChatStatusViewProtocol;

@protocol YCHLiveChatViewProtocol <NSObject>
@property(retain, nonatomic) YCHLiveChatPassthroughScrollView *cardViewContainer;
@property(retain, nonatomic) YCHLiveChatStickyView *stickyView;
@property(retain, nonatomic) YCHLiveChatBuyFlowView *buyFlowView;
@property(retain, nonatomic) YCHLiveChatBuyFlowErrorView *buyFlowErrorView;
@property(retain, nonatomic) YCHLiveChatProductPickerPanelView *productPickerPanelView;
@property(retain, nonatomic) UIView *tickerView;
@property(retain, nonatomic) UIView<YCHLiveChatStatusViewProtocol> *statusView;
@property(retain, nonatomic) UIView<YCHLiveChatActionPanelViewProtocol> *actionPanelView;
@property(retain, nonatomic) UICollectionView *bannerCollectionView;
@property(retain, nonatomic) UICollectionView *collectionView;
- (void)inputTextDidChange;
- (void)hideActivityIndicator;
- (void)showActivityIndicatorAndFadeContent:(_Bool)arg1;
@end

