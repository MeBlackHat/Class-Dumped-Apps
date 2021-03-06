//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGActivityNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGCustomViewController-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectBadgeServiceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectInboxNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGNavigationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCreationViewControllerNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryCreationViewControllerSundialEventDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySettingsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSundialCreationViewControllerNavigationDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegateFlowLayout-Protocol.h>
#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IGDirectInboxNavigationController, IGGestureCoordinatingCollectionView, IGMainAppScrollingContainerDataSource, IGScrollPerfLogger, IGStoryCaptureAnimationController, IGTabBarController, IGUserSession, NSString, UITapGestureRecognizer;
@protocol IGAccountSwitcherPresenting, IGActivityFeedViewControllerType, IGStoryCreationViewControllerType;

@interface IGMainAppScrollingContainerViewController : UIViewController <IGActivityNavigationDelegate, IGDirectBadgeServiceListener, IGDirectInboxNavigationDelegate, IGNavigationControllerDelegate, IGStorySettingsViewControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, IGStoryCreationViewControllerSundialEventDelegate, IGCustomViewController, IGStoryCreationViewControllerNavigationDelegate, IGSundialCreationViewControllerNavigationDelegate>
{
    IGUserSession *_userSession;
    unsigned long long _cameraEntryPoint;
    long long _cameraExitPoint;
    IGTabBarController *_tabBarController;
    IGGestureCoordinatingCollectionView *_collectionView;
    IGStoryCaptureAnimationController *_storyCaptureAnimationController;
    IGMainAppScrollingContainerDataSource *_containerDataSource;
    IGScrollPerfLogger *_scrollPerfLogger;
    id <IGAccountSwitcherPresenting> _accountSwitcherPresenter;
    UITapGestureRecognizer *_sideTrayDismissGesture;
    _Bool _isActivityWithProfile;
    _Bool _isActivityInTray;
    _Bool _allowCameraToBecomeActive;
    UIViewController<IGStoryCreationViewControllerType> *_storyCreationViewController;
    IGDirectInboxNavigationController *_directInboxNavController;
    UIViewController<IGActivityFeedViewControllerType> *_activityFeedViewController;
    UIViewController *_activeViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) UIViewController<IGActivityFeedViewControllerType> *activityFeedViewController; // @synthesize activityFeedViewController=_activityFeedViewController;
@property(retain, nonatomic) IGDirectInboxNavigationController *directInboxNavController; // @synthesize directInboxNavController=_directInboxNavController;
@property(retain, nonatomic) UIViewController<IGStoryCreationViewControllerType> *storyCreationViewController; // @synthesize storyCreationViewController=_storyCreationViewController;
- (void)newsSurfaceDidAppear;
- (void)activityNavigationControllerDidTapBack;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)_handleSideTrayDismiss:(id)arg1;
- (void)storySettingsViewControllerDidTapDone:(id)arg1;
- (void)creationViewController:(id)arg1 didSharePostToStory:(long long)arg2 didSharePostToDirect:(_Bool)arg3;
- (void)_dismissStoryCreationViewController:(id)arg1 animateTabBarTransition:(_Bool)arg2 exitPoint:(long long)arg3 destination:(long long)arg4 storySendTarget:(long long)arg5 directRecipients:(id)arg6 groupStoriesRecipients:(id)arg7 storyModel:(id)arg8;
- (void)_showArchivingPromptOrFacebookUpsellForStoryModel:(id)arg1 storySendTarget:(long long)arg2 asset:(id)arg3 storyModelArray:(id)arg4 metadataArray:(id)arg5;
- (void)creationViewController:(id)arg1 didDismissWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 asset:(id)arg7 storyModelArray:(id)arg8 metadataArray:(id)arg9;
- (void)creationViewControllerDidUploadDemoVideo:(id)arg1;
- (_Bool)creationViewControllerIsDeallocatedAfterSending:(id)arg1;
- (void)creationViewController:(id)arg1 didFinishWithExitPoint:(long long)arg2 shouldAnimateTransition:(_Bool)arg3;
- (void)creationViewController:(id)arg1 willShareToDirectRecipients:(id)arg2;
- (void)creationViewController:(id)arg1 didEnterState:(long long)arg2;
- (void)creationViewController:(id)arg1 didSaveSundialDraft:(id)arg2;
- (void)creationViewController:(id)arg1 didShareSundialPostWithExitPoint:(long long)arg2 destination:(long long)arg3 storySendTarget:(long long)arg4 toDirectRecipients:(id)arg5 toGroupStoriesRecipients:(id)arg6 storyModelArray:(id)arg7 metadataArray:(id)arg8;
- (void)creationViewController:(id)arg1 didShareSundialPost:(id)arg2 toDestination:(long long)arg3;
- (void)didUpdateDirectUnseenCount:(long long)arg1;
- (void)_voiceOverStatusChanged:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)inboxNavigationControllerDidTapBack:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)_visibleViewController;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_activeViewControllerForContentOffset:(struct CGPoint)arg1;
- (id)ig_keyViewControllers;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_willDeactivateViewController:(id)arg1;
- (_Bool)_shouldDeactivateViewController:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)_itemForIndexPath:(id)arg1;
- (void)prefetchActivityFeed;
- (_Bool)_isViewingSideTray;
- (_Bool)_isProfileInTabBar;
- (_Bool)isViewingFeed;
- (_Bool)isViewingInbox;
- (id)controllerForItem:(long long)arg1;
- (long long)currentItem;
- (void)_focusItem:(long long)arg1 animated:(_Bool)arg2;
- (void)dismissPushedProfileViewControllerAnimated:(_Bool)arg1;
- (void)focusSettingsViewControllerWithEntryPoint:(long long)arg1 animated:(_Bool)arg2;
- (void)focusProfileViewControllerAnimated:(_Bool)arg1;
- (void)focusDirectInboxViewControllerAnimated:(_Bool)arg1;
- (void)focusCameraViewControllerWithEntryPoint:(unsigned long long)arg1 cameraTargetModel:(id)arg2 targetStickerId:(id)arg3 isSuggestedSticker:(_Bool)arg4 animated:(_Bool)arg5;
- (void)focusCameraViewControllerWithEntryPoint:(unsigned long long)arg1 cameraTargetModel:(id)arg2;
- (void)focusActivityFeedViewControllerAnimated:(_Bool)arg1;
- (void)focusTabBarControllerAnimated:(_Bool)arg1;
- (void)_userAccountSwitched;
- (id)_setupControllerForItemIfNeeded:(long long)arg1;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 accountSwitcherPresenter:(id)arg2 tabBarController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

