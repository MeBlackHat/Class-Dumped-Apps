//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1WebViewController.h>

@interface T1TweetAnalyticsWebViewController : T1WebViewController
{
}

+ (void)presentTweetAnalyticsWebViewControllerForAccount:(id)arg1 status:(id)arg2 controller:(id)arg3 scribeContext:(id)arg4;
- (void)_presentWebViewWithURLString:(id)arg1;
- (_Bool)shouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2;
- (id)_urlForStatusIDNumber:(id)arg1;
- (_Bool)_t1_isQuickPromoteTargetingUrl:(id)arg1;
- (_Bool)_isOnlineMetrixUrl:(id)arg1;
- (_Bool)_isQuickPromoteUrl:(id)arg1;
- (void)didFinishLoadingWithError:(id)arg1;
- (_Bool)presentAsModalSheet;
- (_Bool)shouldHideNavigationIcons;
- (_Bool)shouldHideShareSheetIcon;
- (id)initWithRootURL:(id)arg1 account:(id)arg2 sourceStatus:(id)arg3 scribeComponent:(id)arg4;
- (id)initWithAccount:(id)arg1 sourceStatusIDNumber:(id)arg2;
- (id)initWithAccount:(id)arg1 sourceStatus:(id)arg2;

@end

