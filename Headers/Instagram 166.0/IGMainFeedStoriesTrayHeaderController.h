//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGCollapsibleNavigationViewType-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayLoggingContextDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UICollectionViewDelegate-Protocol.h>

@class IGListAdapter, IGMainFeedNetworkSourceController, IGMainFeedStoriesTrayHeaderContainerView, IGUserSession, NSString, UIView;
@protocol IGMainFeedStoryTrayLoggingContextProvider, IGStoryTrayDataSource><IGStoryTrayLoggingContextDataSource, IGStoryTraySectionControllerViewerDelegate;

@interface IGMainFeedStoriesTrayHeaderController : NSObject <IGListAdapterDataSource, UICollectionViewDelegate, IGCollapsibleNavigationViewType, IGStoryTrayLoggingContextDataSource>
{
    IGListAdapter *_listAdapter;
    IGUserSession *_userSession;
    UIView *_hostView;
    IGMainFeedNetworkSourceController *_mainFeedNetworkSourceController;
    NSString *_analyticsModule;
    id <IGStoryTrayDataSource><IGStoryTrayLoggingContextDataSource> _storyTrayDataSource;
    IGMainFeedStoriesTrayHeaderContainerView *_containerView;
    id <IGMainFeedStoryTrayLoggingContextProvider> _loggingContextProvider;
    id <IGStoryTraySectionControllerViewerDelegate> _storyTrayViewerDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <IGStoryTraySectionControllerViewerDelegate> storyTrayViewerDelegate; // @synthesize storyTrayViewerDelegate=_storyTrayViewerDelegate;
@property(readonly, nonatomic) __weak id <IGMainFeedStoryTrayLoggingContextProvider> loggingContextProvider; // @synthesize loggingContextProvider=_loggingContextProvider;
@property(retain, nonatomic) IGMainFeedStoriesTrayHeaderContainerView *containerView; // @synthesize containerView=_containerView;
- (id)storyTrayViewModelsForLoggingContext;
- (id)view;
- (void)setPercentCollapsed:(double)arg1 preservingHeight:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 expanded:(_Bool)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)performUpdatesWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)storyTraySectionController;
- (void)setupListAdapterWithViewController:(id)arg1;
- (id)initWithUserSession:(id)arg1 storyTrayLoggingContextProvider:(id)arg2 storyTrayViewerDelegate:(id)arg3 mainFeedNetworkSourceController:(id)arg4 hostingView:(id)arg5 analyticsModule:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

