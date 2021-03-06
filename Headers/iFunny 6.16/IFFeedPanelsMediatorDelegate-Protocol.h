//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class IFFeedPanelsMediator, NSLayoutConstraint, UICollectionView, UINavigationController, UIView;
@protocol IFFeedPanelDelegateHolder;

@protocol IFFeedPanelsMediatorDelegate <NSObject>
@property(nonatomic, readonly) _Bool isTopController;
@property(nonatomic, readonly) _Bool isNavigationBarHidden;
@property(nonatomic, readonly) UINavigationController *parentController;
@property(nonatomic, readonly) UIView *containerView;
@property(nonatomic, readonly) UIView *view;
@property(nonatomic, readonly) unsigned long long activeIndex;
@property(nonatomic, readonly) NSLayoutConstraint *bottomPanelTopVerticalOffset;
@property(nonatomic, readonly) NSLayoutConstraint *topPanelTopVerticalOffset;
@property(nonatomic, readonly) unsigned long long topPanelContentAnchorType;
@property(nonatomic, readonly) double topPanelContentHeight;
@property(nonatomic, readonly) double topPanelMaxPosition;
@property(nonatomic, readonly) UIView<IFFeedPanelDelegateHolder> *topPanelView;
@property(nonatomic, readonly) UIView *bottomPanelView;
@property(nonatomic, readonly) UICollectionView *feedCollectionView;
@property(nonatomic, readonly) _Bool isHorizontalScrollingEnabled;
- (void)gestureMediatorDidCloseBottomPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorDidOpenBottomPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorWillOpenBottomPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorDidCloseTopPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorDidOpenTopPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorWillOpenTopPanel:(IFFeedPanelsMediator *)arg1;
- (void)gestureMediatorWillBegan:(IFFeedPanelsMediator *)arg1;

@optional
- (void)layoutBottomPanelBaseViewIfNeeded;
- (void)layoutTopPanelBaseViewIfNeeded;
@end

