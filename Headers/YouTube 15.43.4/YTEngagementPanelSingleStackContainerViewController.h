//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTEngagementPanelContainerController-Protocol.h"
#import "YTEngagementPanelNavigationContainerProtocol-Protocol.h"
#import "YTEngagementPanelNavigationControllerDelegate-Protocol.h"
#import "YTEngagementPanelNavigationControllerEventObserver-Protocol.h"
#import "YTEngagementPanelSingleStackContainerViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSHashTable, NSMutableDictionary, NSString, UIView, YTEngagementPanelNavigationController, YTEngagementPanelSingleStackContainerView;
@protocol YTEngagementPanelContainerControllerDelegate, YTEngagementPanelContainerView, YTResponder;

@interface YTEngagementPanelSingleStackContainerViewController : UIViewController <YTEngagementPanelNavigationControllerDelegate, YTEngagementPanelNavigationControllerEventObserver, YTEngagementPanelSingleStackContainerViewDelegate, YTEngagementPanelContainerController, YTEngagementPanelNavigationContainerProtocol, YTResponder>
{
    YTEngagementPanelSingleStackContainerView *_engagementPanelContainerView;
    UIView *_engagementPanelNavigationView;
    _Bool _engagementPanelNavigationViewExpanded;
    NSHashTable *_pendingEngagementPanelScrollObservers;
    NSMutableDictionary *_engagementPanelRendererMap;
    NSHashTable *_eventObservers;
    id <YTResponder> _parentResponder;
    id <YTEngagementPanelContainerControllerDelegate> _delegate;
    GIMMe *_gimme;
    YTEngagementPanelNavigationController *_engagementPanelNavigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTEngagementPanelNavigationController *engagementPanelNavigationController; // @synthesize engagementPanelNavigationController=_engagementPanelNavigationController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTEngagementPanelContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)engagementPanelStateDidUpdateToState:(long long)arg1 fromState:(long long)arg2;
- (void)updateEngagementPanelState:(long long)arg1 animated:(_Bool)arg2 gestureType:(int)arg3;
- (void)collapseLiveChatEngagementPanel;
- (void)maybeShowLiveChatInEngagementPanel;
- (_Bool)isLiveChatInEngagementPanel;
- (void)createEngagementPanelNavigationController;
- (id)topLevelEngagementPanelView;
- (void)setRootEngagementPanelWithIdentifier:(id)arg1 shouldRetainVideoHeight:(_Bool)arg2;
- (void)setEngagementPanelNavigationViewExpanded:(_Bool)arg1 rootPanelIdentifier:(id)arg2 animated:(_Bool)arg3 shouldRetainVideoHeight:(_Bool)arg4;
- (void)removeEngagementPanelNavigationController;
- (void)resetEngagementPanelNavigationController;
- (void)createAndLoadEngagementPanels;
- (void)removeEngagementPanelsNotPresentInModels:(id)arg1;
- (void)addEngagementPanelsWithModels:(id)arg1;
- (void)refreshTopEngagementPanelIfNeededWithWatchNextResponse:(id)arg1;
- (void)prepareEngagementPanelWithWatchNextResponse:(id)arg1;
- (void)addEngagementPanelScrollObserver:(id)arg1;
- (void)addEngagementPanelEventObserver:(id)arg1;
- (void)willCollapseEngagementPanelForPanelIdentifier:(id)arg1;
- (void)willPresentEngagementPanelForPanelIdentifier:(id)arg1;
- (void)willCollapseEngagementPanelsNavigationView;
- (void)engagementPanelNavigationController:(id)arg1 willPresentEngagementPanelRootNavigationViewAndRetainHeight:(_Bool)arg2;
- (void)playerHeightDidChangeAnimated:(_Bool)arg1;
- (void)removeEngagementPanelWithID:(id)arg1;
- (void)handleResizeEngagementPanelCommand:(id)arg1;
- (void)removeEngagementPanel;
- (void)cleanUpEngagementPanel;
- (_Bool)isLiveChatShowingInEngagementPanel;
- (void)hideLiveChatEngagementPanel;
- (void)showLiveChatInEngagementPanel;
- (_Bool)handleHideEngagementPanelCommand:(id)arg1;
- (_Bool)handleShowEngagementPanelCommand:(id)arg1;
- (void)didTapResizeHandle;
- (void)updateEngagementPanelStateForDragFinishedWithVelocity:(struct CGPoint)arg1;
- (void)engagementPanelNavigationController:(id)arg1 didEndDragWithVelocity:(struct CGPoint)arg2;
- (void)engagementPanelNavigationController:(id)arg1 didDragByOffset:(struct CGPoint)arg2;
- (void)engagementPanelNavigationControllerWillBeginDragging:(id)arg1;
- (void)collapseEngagementPanelNavigationController:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)engagementPanelState;
@property(readonly, nonatomic) UIView<YTEngagementPanelContainerView> *engagementPanelContainerView;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

