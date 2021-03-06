//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/_TtC8libFunny25ProfileCommentsController.h>

#import <Funny/IFFeedPanelsMediatorDelegate-Protocol.h>

@class NSLayoutConstraint, UICollectionView, UINavigationController, UIView;
@protocol IFFeedPanelDelegateHolder;

@interface _TtC8libFunny25ProfileCommentsController (libFunny) <IFFeedPanelsMediatorDelegate>
- (id)feedNameForStat;
- (long long)feedTypeForSharing;
- (id)channelNameForSharing;
- (void)closeComments;
- (id)feedInfo;
- (void)onCommentsScrollWithScrollView:(id)arg1;
- (void)layoutBottomPanelBaseViewIfNeeded;
@property(nonatomic, readonly) _Bool isTopController;
@property(nonatomic, readonly) _Bool isNavigationBarHidden;
@property(nonatomic, readonly) UINavigationController *parentController;
@property(nonatomic, readonly) unsigned long long topPanelContentAnchorType;
@property(nonatomic, readonly) double topPanelContentHeight;
@property(nonatomic, readonly) double topPanelMaxPosition;
@property(nonatomic, readonly) NSLayoutConstraint *bottomPanelTopVerticalOffset;
@property(nonatomic, readonly) NSLayoutConstraint *topPanelTopVerticalOffset;
@property(nonatomic, readonly) UIView<IFFeedPanelDelegateHolder> *topPanelView;
@property(nonatomic, readonly) UIView *bottomPanelView;
- (void)gestureMediatorDidCloseBottomPanel:(id)arg1;
- (void)gestureMediatorDidCloseTopPanel:(id)arg1;
- (void)gestureMediatorDidOpenTopPanel:(id)arg1;
- (void)gestureMediatorWillOpenTopPanel:(id)arg1;
- (void)gestureMediatorDidOpenBottomPanel:(id)arg1;
- (void)gestureMediatorWillOpenBottomPanel:(id)arg1;
- (void)gestureMediatorWillBegan:(id)arg1;
@property(nonatomic, readonly) _Bool isHorizontalScrollingEnabled;
@property(nonatomic, readonly) unsigned long long activeIndex;
@property(nonatomic, readonly) UICollectionView *feedCollectionView;
@property(nonatomic, readonly) UIView *containerView;
@end

