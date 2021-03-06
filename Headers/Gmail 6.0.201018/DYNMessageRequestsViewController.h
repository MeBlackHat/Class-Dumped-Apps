//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNViewController.h"

#import "DYNMessageRequestsSpamButtonDelegate-Protocol.h"
#import "DYNSpamSubscriptionListener-Protocol.h"
#import "DYNWorldSubscriptionServiceListener-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class DYNMessageRequestsNoResultsView, DYNMessageRequestsSpamButton, NSArray, NSLayoutConstraint, NSString, UITableView, UIView;
@protocol DYNColorSchemeService, DYNExperimentsService, DYNMemberCacheService, DYNNavigationService, DYNSharedLayerService, DYNSpamSubscriptionService, DYNWorldSubscriptionService, GIPAccountID;

@interface DYNMessageRequestsViewController : DYNViewController <UITableViewDataSource, UITableViewDelegate, DYNWorldSubscriptionServiceListener, DYNSpamSubscriptionListener, DYNMessageRequestsSpamButtonDelegate>
{
    id <GIPAccountID> _accountID;
    id <DYNMemberCacheService> _memberCacheService;
    id <DYNNavigationService> _navigationService;
    id <DYNSharedLayerService> _sharedLayerService;
    id <DYNWorldSubscriptionService> _worldSubscriptionService;
    id <DYNColorSchemeService> _colorSchemeService;
    id <DYNSpamSubscriptionService> _spamSubscriptionService;
    id <DYNExperimentsService> _experimentsService;
    UITableView *_tableView;
    NSArray *_groupSummaries;
    NSArray *_model;
    DYNMessageRequestsSpamButton *_spamButton;
    UIView *_spamButtonExtensionView;
    NSLayoutConstraint *_spamButtonTopAnchorConstraint;
    DYNMessageRequestsNoResultsView *_noResultsView;
}

- (void).cxx_destruct;
- (void)createAndInstallNoResultsView;
- (void)setNoResultsViewHidden:(_Bool)arg1;
- (void)showNoResultsViewIfNecessary;
- (void)setSpamButtonHidden:(_Bool)arg1;
- (void)hideSpamInvitesButton;
- (void)showSpamInvitesButtonWithInvitesList:(id)arg1;
- (void)updateSpamButtonWithSpamInvitesListSnapshot:(id)arg1;
- (void)updateSpamButtonIfAppropriate;
- (_Bool)shouldTriggerSpamInvitesRefresh;
- (void)triggerSpamInvitesRefreshIfAppropriate;
- (id)directMessageInvitesPredicate;
- (id)filteredGroupSummaries;
- (void)updateModelAndReloadTableViewData;
- (void)enqueueMemberCacheMissResolutionWithMemberID:(id)arg1 groupID:(id)arg2;
- (id)cellModelFromGroupSummary:(id)arg1;
- (void)updateModel;
- (void)setUpConstraints;
- (void)createSubviews;
- (void)setUpRootVisualElement;
- (void)spamButtonWasTapped;
- (void)spamInvitesListSnapshotUpdated:(id)arg1;
- (void)worldSubscriptionService:(id)arg1 updatedSnapshot:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didUpdateMemberCacheWithResolveCompleted:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAccountID:(id)arg1 groupSummaries:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

