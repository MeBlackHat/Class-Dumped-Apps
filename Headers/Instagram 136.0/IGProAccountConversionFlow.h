//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGBusinessFlow-Protocol.h>
#import <InstagramAppCoreFramework/IGNavigationControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGProAccountTypeSelectionViewControllerDelegate-Protocol.h>

@class IG4BLogger, IGBusinessFlowNavigationPresenter, IGUserSession, NSString;
@protocol IGBusinessConversionDismissDelegate, IGBusinessFlow, IGBusinessFlowCompletionRefreshDelegate;

@interface IGProAccountConversionFlow : NSObject <IGNavigationControllerDelegate, IGProAccountTypeSelectionViewControllerDelegate, IGBusinessFlow>
{
    IGUserSession *_userSession;
    id <IGBusinessFlow> _businessFlow;
    IG4BLogger *_flowLogger;
    long long _headerType;
    IGBusinessFlowNavigationPresenter *_flowPresenter;
    CDUnknownBlockType _flowCompletionNavigation;
    id <IGBusinessFlowCompletionRefreshDelegate> _completionRefreshDelegate;
    id <IGBusinessConversionDismissDelegate> _dismissDelegate;
    NSString *_entryPoint;
}

@property(copy, nonatomic) NSString *entryPoint; // @synthesize entryPoint=_entryPoint;
@property(nonatomic) __weak id <IGBusinessConversionDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property(nonatomic) __weak id <IGBusinessFlowCompletionRefreshDelegate> completionRefreshDelegate; // @synthesize completionRefreshDelegate=_completionRefreshDelegate;
@property(copy, nonatomic) CDUnknownBlockType flowCompletionNavigation; // @synthesize flowCompletionNavigation=_flowCompletionNavigation;
@property(readonly, nonatomic) IGBusinessFlowNavigationPresenter *flowPresenter; // @synthesize flowPresenter=_flowPresenter;
- (void).cxx_destruct;
- (void)navigationController:(id)arg1 willNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didPopViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didNavigateToViewController:(id)arg2 animated:(_Bool)arg3;
- (void)didCancelWithProAccountTypeSelectionViewController:(id)arg1;
- (void)proAccountTypeSelectionViewController:(id)arg1 didSelectOnboardingConfiguration:(id)arg2;
- (void)_routeToProAccountTypeSelectionStep;
- (void)start;
- (id)initWithFlowPresenter:(id)arg1 userSession:(id)arg2 entryPoint:(id)arg3 headerType:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

