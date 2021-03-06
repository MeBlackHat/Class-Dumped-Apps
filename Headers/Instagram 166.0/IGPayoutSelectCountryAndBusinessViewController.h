//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGPayoutSelectorOptionsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDataSource-Protocol.h>
#import <InstagramAppCoreFramework/UITableViewDelegate-Protocol.h>

@class IGPayoutOnboardingHeaderView, NSArray, NSDictionary, NSMutableArray, NSString, UIActivityIndicatorView, UITableView;
@protocol IGPayoutSelectCountryAndBusinessViewControllerDelegate;

@interface IGPayoutSelectCountryAndBusinessViewController : IGViewController <UITableViewDataSource, UITableViewDelegate, IGPayoutSelectorOptionsViewControllerDelegate>
{
    IGPayoutOnboardingHeaderView *_headerView;
    UITableView *_tableView;
    NSMutableArray *_selectedValues;
    NSString *_analyticsFunnelName;
    NSMutableArray *_selectedValuesIndices;
    NSDictionary *_countryBusinessTypes;
    NSArray *_countries;
    NSArray *_countriesFullNames;
    UIActivityIndicatorView *_loadingIndicator;
    id <IGPayoutSelectCountryAndBusinessViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGPayoutSelectCountryAndBusinessViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)payoutSelectorOptionsViewControllerDidSelectOption:(id)arg1 identifier:(long long)arg2 index:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)_currentBusinessType;
- (void)_onBackButtonTapped;
- (void)_onNextButtonTapped:(id)arg1;
- (void)setLoading:(_Bool)arg1;
- (long long)preferredTabBarBehavior;
- (void)_setNavigationBarItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)analyticsModule;
- (id)initWithAnalyticsFunnelName:(id)arg1 countries:(id)arg2 countriesFullNames:(id)arg3 countryBusinessTypes:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

