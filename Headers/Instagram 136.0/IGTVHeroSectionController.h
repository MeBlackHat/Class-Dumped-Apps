//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListGenericSectionController.h>

#import <InstagramAppCoreFramework/IGListDisplayDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVHScrollLoadingSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVHeroImageLoaderDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVHorizontalChannelListControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVLargeHScrollVideoSectionControllerDelegate-Protocol.h>

@class IGTVHScrollLoadingViewModel, IGTVHeroImageLoader, IGTVHorizontalChannelListController, IGUserSession, NSArray, NSString;
@protocol IGTVHScrollLoggingContextType, IGTVHeroSectionControllerDelegate;

@interface IGTVHeroSectionController : IGListGenericSectionController <IGListDisplayDelegate, IGTVHScrollLoadingSectionControllerDelegate, IGTVHeroImageLoaderDelegate, IGTVHorizontalChannelListControllerDelegate, IGTVLargeHScrollVideoSectionControllerDelegate>
{
    IGUserSession *_userSession;
    id <IGTVHScrollLoggingContextType> _loggingContext;
    IGTVHorizontalChannelListController *_listController;
    IGTVHeroImageLoader *_imageLoader;
    NSArray *_loadingViewModels;
    IGTVHScrollLoadingViewModel *_canLoadMoreViewModel;
    id <IGTVHeroSectionControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVHeroSectionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)largeHScrollVideoSectionController:(id)arg1 didTapUser:(id)arg2 fromFeedItem:(id)arg3;
- (void)largeHScrollVideoSectionController:(id)arg1 didLongPressFeedItem:(id)arg2;
- (void)largeHScrollVideoSectionController:(id)arg1 didTapFeedItem:(id)arg2;
- (struct CGSize)sizeForItemInHScrollLoadingSectionController:(id)arg1;
- (id)horizontalChannelListController:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)horizontalChannelListController:(id)arg1 objectsForFeedItems:(id)arg2 loadingState:(long long)arg3;
- (id)_viewModel;
- (id)_visibleCell;
- (void)heroImageLoader:(id)arg1 didUpdateState:(long long)arg2;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2 cell:(id)arg3 atIndex:(long long)arg4;
- (void)listAdapter:(id)arg1 didEndDisplayingSectionController:(id)arg2;
- (void)listAdapter:(id)arg1 willDisplaySectionController:(id)arg2;
- (struct UIEdgeInsets)inset;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (id)initWithUserSession:(id)arg1 loggingContext:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

