//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/FNExploreViewController.h>

#import <Funny/IFAdsVisibilityProtocol-Protocol.h>
#import <Funny/IFControllerProtocol-Protocol.h>
#import <Funny/IFNavigationTitleViewDelegate-Protocol.h>

@class IFBaseRouter, NSString, UINavigationBar, UINavigationController, UIView;
@protocol IFExploreRouterProtocol, IFModelProtocol, IFViewProtocol;

@interface IFExploreViewController : FNExploreViewController <IFControllerProtocol, IFNavigationTitleViewDelegate, IFAdsVisibilityProtocol>
{
    _Bool _viewIsAppeared;
    UIView *_firstResponderView;
    id <IFModelProtocol> model;
    UINavigationBar *_customNavBar;
    IFBaseRouter<IFExploreRouterProtocol> *_router;
    NSString *_emojiText;
    UINavigationController *_savedNavigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationController *savedNavigationController; // @synthesize savedNavigationController=_savedNavigationController;
@property(retain, nonatomic) NSString *emojiText; // @synthesize emojiText=_emojiText;
@property(retain, nonatomic) IFBaseRouter<IFExploreRouterProtocol> *router; // @synthesize router=_router;
@property(retain, nonatomic) UINavigationBar *customNavBar; // @synthesize customNavBar=_customNavBar;
@property(retain, nonatomic) id <IFModelProtocol> model; // @synthesize model;
@property(readonly, nonatomic) _Bool adsIsVisible;
- (void)updateNavigationItemHidden;
- (void)searchBarDidEndEditing:(id)arg1;
- (void)searchBarDidBeginEditing:(id)arg1;
- (void)setDefaultStateShouldReset:(_Bool)arg1;
- (void)hookSearchBar;
- (void)tapNavigationItem:(id)arg1;
- (void)openRecentTagController:(id)arg1;
- (void)openRecentUserInfoController:(id)arg1;
- (void)openTagController:(id)arg1 channel:(_Bool)arg2;
- (void)openUserInfoController:(id)arg1;
- (void)showDigest:(id)arg1;
- (void)showDigests;
- (void)presentOpenChat:(id)arg1;
- (void)presentTrendingTags;
- (void)menuTap;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView<IFViewProtocol> *view;

@end

