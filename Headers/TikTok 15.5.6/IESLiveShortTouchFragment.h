//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveAppLifeCycleActions-Protocol.h"
#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveRoomRemoteActions-Protocol.h"
#import "IESLiveShortTouchContainer-Protocol.h"

@class IESLiveShortTouchContainerView, IESLiveShortTouchStore, NSString, RACDisposable;
@protocol HTSLivePluginLayoutMachineProvider, HTSLiveViewHierarchyProvider, IESActionDispatcher, IESLiveDebugService;

@interface IESLiveShortTouchFragment : NSObject <IESLiveShortTouchContainer, HTSLiveRoomRemoteActions, HTSLiveAppLifeCycleActions, HTSLiveComponent>
{
    IESLiveShortTouchStore *_store;
    IESLiveShortTouchContainerView *_containerView;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESActionDispatcher> _disaptcher;
    id <IESLiveDebugService> _debugger;
    RACDisposable *_disposable;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESLiveDebugService> debugger; // @synthesize debugger=_debugger;
@property(retain, nonatomic) id <IESActionDispatcher> disaptcher; // @synthesize disaptcher=_disaptcher;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) IESLiveShortTouchContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) IESLiveShortTouchStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)toggleItem:(unsigned long long)arg1 size:(struct CGSize)arg2 insets:(struct UIEdgeInsets)arg3;
- (void)longPressAction:(id)arg1;
- (void)registerDebugTools;
- (_Bool)containsType:(unsigned long long)arg1;
- (struct CGRect)frameOfType:(unsigned long long)arg1;
- (void)reloadItems;
- (void)bringToFront:(unsigned long long)arg1;
- (void)activateType:(unsigned long long)arg1;
- (void)removeType:(unsigned long long)arg1;
- (void)removeItem:(id)arg1;
- (void)insertItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)insertItem:(id)arg1;
- (void)appWillEnterForeground;
- (void)didUpdateRoom:(id)arg1;
- (void)hideComponent;
- (void)showComponent;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

