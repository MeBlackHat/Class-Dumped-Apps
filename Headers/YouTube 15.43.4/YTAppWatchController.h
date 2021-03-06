//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDXAirPlayManagerObserver-Protocol.h"
#import "MDXSessionManagerObserver-Protocol.h"
#import "MDXViewObserver-Protocol.h"
#import "YTAppViewWatchDelegate-Protocol.h"
#import "YTKeyCommandControllerDelegate-Protocol.h"
#import "YTMDXScreenContentControllerDelegate-Protocol.h"
#import "YTModalPlaybackChangeResponderProvider-Protocol.h"
#import "YTRemoteCommandHandlerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSHashTable, NSString, UIView, UIViewController, YTMDXScreenContentController, YTNGWatchLayerViewController, YTRemoteCommandHandler;
@protocol MDXServices, MDXViewControllerProtocol, YTAppRootSlice, YTAppWatchContainer, YTLayoutStyle, YTResponder, YTServices, YTWatchViewControllerProtocol;

@interface YTAppWatchController : NSObject <MDXAirPlayManagerObserver, MDXSessionManagerObserver, MDXViewObserver, YTMDXScreenContentControllerDelegate, YTRemoteCommandHandlerDelegate, YTAppViewWatchDelegate, YTKeyCommandControllerDelegate, YTModalPlaybackChangeResponderProvider, YTResponder>
{
    id <YTServices> _services;
    id <MDXServices> _MDXServices;
    id <YTLayoutStyle> _layoutStyle;
    UIViewController<YTAppRootSlice> *_containerViewController;
    NSHashTable *_appWatchControllerObservers;
    long long _watchViewLayout;
    YTRemoteCommandHandler *_remoteCommandHandler;
    YTMDXScreenContentController *_MDXScreenContentController;
    int _MDXWatchViewLayout;
    _Bool _hasActiveMDXSession;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    UIView<YTAppWatchContainer> *_appView;
    YTNGWatchLayerViewController *_ngWatchLayerViewController;
    UIViewController<MDXViewControllerProtocol> *_MDXViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController<MDXViewControllerProtocol> *MDXViewController; // @synthesize MDXViewController=_MDXViewController;
@property(readonly, nonatomic) YTNGWatchLayerViewController *ngWatchLayerViewController; // @synthesize ngWatchLayerViewController=_ngWatchLayerViewController;
@property(readonly, nonatomic) _Bool hasActiveMDXSession; // @synthesize hasActiveMDXSession=_hasActiveMDXSession;
@property(nonatomic) __weak UIView<YTAppWatchContainer> *appView; // @synthesize appView=_appView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)setNgWatchLayerViewController:(id)arg1;
- (void)setMDXScreenContentController:(id)arg1;
- (_Bool)shouldAdjustBehaviorForMDXWatchViewLayout:(int)arg1;
- (void)setCastingState:(long long)arg1;
- (id)expectedPlayerLayoutForExpandedLayout;
- (_Bool)sliceShouldControlStatusBarStyle:(id)arg1;
- (_Bool)isWatchCollapsed;
- (void)setWatchTransition:(id)arg1;
- (void)prepareForWatchTransition:(id)arg1;
- (void)openMinibarFromPlayerReferenceContainer:(id)arg1;
- (void)expandWatchFromPlayerReferenceContainer:(id)arg1;
- (void)updateAppBottomOffset;
- (void)updateScrollsToTop;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)notifyDidStartAnimatingMDXWatchLayoutToVisible;
- (void)notifyDidStartAnimatingMDXWatchLayoutToHidden;
- (void)notifyWillTransitionToWatchPageWithTransition:(id)arg1;
- (void)keyCommandControllerDidSeekToNextChapter:(id)arg1;
- (void)keyCommandControllerDidSeekToPreviousChapter:(id)arg1;
- (void)keyCommandControllerDidToggleClosedCaptions:(id)arg1;
- (void)keyCommandControllerDidSeekForward:(id)arg1;
- (void)keyCommandControllerDidSeekBackward:(id)arg1;
- (void)keyCommandControllerDidTogglePlayPause:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)modalPlaybackDidEnd;
- (void)modalPlaybackWillBegin;
- (void)handleRemoteControlEvent:(long long)arg1;
- (_Bool)canShowScrollBubble;
- (void)screenDidLoadWithTransition:(id)arg1 expansionState:(long long)arg2;
- (void)didAnimateMDXWatchViewToLayout:(int)arg1;
- (void)didStartAnimatingMDXWatchViewFromLayout:(int)arg1 toLayout:(int)arg2;
- (void)MDXSessionManager:(id)arg1 didFailToStartSession:(id)arg2 withError:(id)arg3;
- (void)MDXSessionManager:(id)arg1 didEndSession:(id)arg2 withError:(id)arg3;
- (void)MDXSessionManager:(id)arg1 didStartSession:(id)arg2;
- (void)didEndAirPlayConnectionForAirPlayManager:(id)arg1;
- (void)didStartAirPlayConnectionForAirPlayManager:(id)arg1;
- (void)routeDidBecomeUnavailableForAirPlayManager:(id)arg1;
- (void)routeDidBecomeAvailableForAirPlayManager:(id)arg1;
- (double)bottomBarOffset;
- (void)bottomOffsetDidChange:(double)arg1;
- (void)startCountdownIfEndscreenActive;
- (_Bool)shouldLeadAlignToasts;
- (_Bool)shouldControlStatusBarStyle;
- (void)collapseWatchWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIViewController<YTWatchViewControllerProtocol> *watchViewController;
- (void)userDidSignIn;
- (_Bool)isBackgroundable;
- (void)resumePlayback;
- (void)pausePlayback;
- (_Bool)isWatchFullscreen;
- (_Bool)isWatchHidden;
- (id)scrollsToTopFocusedViewController;
- (void)showWatchWithTransition:(id)arg1;
- (void)hideWatchAndClearNGWQueue:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)handleWatchViewLayoutChangedFromLayout:(long long)arg1 toLayout:(long long)arg2;
- (void)handleWatchViewLayoutCancelledTransitionFromLayout:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)handleWatchViewLayoutBeganTransitionFromLayout:(long long)arg1 toLayout:(long long)arg2;
- (void)watchContainerViewDidLoad:(id)arg1 containerViewController:(id)arg2;
- (void)shutdown;
- (id)init;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

