//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray, TWTRMoPubAdConfiguration, TWTRTableViewAdPlacer, TWTRTimelineCursor, TWTRTimelineMessageView, UIColor;
@protocol TWTRTimelineDataSource, TWTRTimelineDelegate, TWTRTweetViewDelegate;

@interface TWTRTimelineViewController : UITableViewController
{
    _Bool _showTweetActions;
    _Bool _isCurrentlyLoading;
    id <TWTRTimelineDataSource> _dataSource;
    TWTRMoPubAdConfiguration *_adConfiguration;
    id <TWTRTweetViewDelegate> _tweetViewDelegate;
    id <TWTRTimelineDelegate> _timelineDelegate;
    TWTRTimelineCursor *_currentCursor;
    NSMutableArray *_tweets;
    UIColor *_defaultBackgroundColor;
    NSArray *_tweetNotificationObservers;
    TWTRTableViewAdPlacer *_adPlacer;
    TWTRTimelineMessageView *_messageView;
    id _tableViewProxy;
}

@property(retain, nonatomic) id tableViewProxy; // @synthesize tableViewProxy=_tableViewProxy;
@property(retain, nonatomic) TWTRTimelineMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) TWTRTableViewAdPlacer *adPlacer; // @synthesize adPlacer=_adPlacer;
@property(readonly, nonatomic) NSArray *tweetNotificationObservers; // @synthesize tweetNotificationObservers=_tweetNotificationObservers;
@property(retain, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) NSMutableArray *tweets; // @synthesize tweets=_tweets;
@property(retain, nonatomic) TWTRTimelineCursor *currentCursor; // @synthesize currentCursor=_currentCursor;
@property(nonatomic) _Bool isCurrentlyLoading; // @synthesize isCurrentlyLoading=_isCurrentlyLoading;
@property(nonatomic) __weak id <TWTRTimelineDelegate> timelineDelegate; // @synthesize timelineDelegate=_timelineDelegate;
@property(nonatomic) __weak id <TWTRTweetViewDelegate> tweetViewDelegate; // @synthesize tweetViewDelegate=_tweetViewDelegate;
@property(nonatomic) _Bool showTweetActions; // @synthesize showTweetActions=_showTweetActions;
@property(retain, nonatomic) TWTRMoPubAdConfiguration *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(copy, nonatomic) id <TWTRTimelineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)configureAdPlacer;
- (void)loadTweetsAndReplaceExisting:(_Bool)arg1;
- (void)loadPreviousTweets;
- (void)loadNewestTweets;
- (_Bool)indexIsBottomCell:(unsigned long long)arg1;
- (void)updateTweet:(id)arg1;
- (void)observeForTweetUpdates;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)snapshotTweets;
- (id)tweetAtIndex:(long long)arg1;
- (unsigned long long)countOfTweets;
- (void)refresh;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)initWithDataSource:(id)arg1 adConfiguration:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (void)commonInitWithDataSource:(id)arg1 adConfiguration:(id)arg2;

@end

