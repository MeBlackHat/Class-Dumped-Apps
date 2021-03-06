//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSlideshowDataSource-Protocol.h>

@class IGMainFeedNetworkSourceController, NSString;
@protocol IGSlideshowDataSourceDelegate;

@interface IGMainFeedSlideshowDataSource : NSObject <IGFeedNetworkSourceDelegate, IGSlideshowDataSource>
{
    IGMainFeedNetworkSourceController *_mainFeedNetworkSourceController;
    id <IGSlideshowDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSlideshowDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedNetworkSource:(id)arg1 didFailToLoadWithConfig:(id)arg2;
- (void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 withConfig:(id)arg3;
- (void)feedNetworkSource:(id)arg1 didStartLoadingWithConfig:(id)arg2;
- (long long)endOfFeedMediaIndex;
- (long long)endOfFeedIndex;
- (id)loadedItems;
- (long long)currentFetchAction;
- (unsigned long long)currentFetchState;
- (void)loadMore;
- (void)reload;
- (_Bool)hasMoreAvailable;
- (void)dealloc;
- (id)initWithNetworkSourceController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

