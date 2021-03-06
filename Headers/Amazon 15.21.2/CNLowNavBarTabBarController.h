//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "AWTopNavConfig-Protocol.h"
#import "SMASHTransitioning-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface CNLowNavBarTabBarController : UITabBarController <AWTopNavConfig, UITabBarControllerDelegate, SMASHTransitioning>
{
    NSDictionary *_moduleSpec;
    NSMutableArray *_lastReloadTime;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *lastReloadTime; // @synthesize lastReloadTime=_lastReloadTime;
@property(retain, nonatomic) NSDictionary *moduleSpec; // @synthesize moduleSpec=_moduleSpec;
- (void).cxx_destruct;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)smashTransitionWillBegin;
- (id)smashTransitionCoordinator;
- (void)getEnteringTransitionMetricsWithBlock:(CDUnknownBlockType)arg1;
- (void)smashTransitionDidFinishWithTransitionCoordinator:(id)arg1;
- (id)sceneAnimation;
- (id)transitionView;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (_Bool)hasCustomTransitionAnimation;
- (void)reloadSelectedView:(id)arg1;
- (long long)topNavConfigFlags;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)initWithModuleSpec:(id)arg1 skinConfigService:(id)arg2 secureWebViewHost:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

