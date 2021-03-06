//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPContentInsetViewController-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTPodcastChipsSectionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastDescriptionTableViewCellDelegate-Protocol.h"
#import "SPTPodcastEpisodeTableViewCellDelegate-Protocol.h"
#import "SPTPodcastNewFollowTableViewCellDelegate-Protocol.h"
#import "SPTPodcastViewModelDelegate-Protocol.h"
#import "SPTShareableContext-Protocol.h"
#import "SPTShowContextMenuControllerDelegate-Protocol.h"
#import "SPViewController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VISREFTableHeaderViewDelegate-Protocol.h"

@class GLUEContextMenuAccessoryButton, NSString, NSURL, SPTInfoView, SPTPodcastFilterTableFooterView, SPTPodcastFollowButtonObservable, SPTPodcastHeaderController, SPTPodcastLogger, SPTPodcastViewModel, SPTShowContextMenuController, SPTTableView, SPTTheme, VISREFTableHeaderView;
@protocol GLUEImageLoader, GLUETheme, SPTCollectionLogger, SPTCollectionPlatformTestManager, SPTFreeTierTooltipConditionalPresenter, SPTLinkDispatcher, SPTPageContainer, SPTPodcastContextMenuProvider, SPTPodcastEpisodeCellConfigurator, SPTPodcastFollowButtonObserver, SPTPodcastFollowSectionTableViewCellCommonInterface, SPTPodcastTestManager, SPTPodcastUBILogger, SPTShareFeature, SPTSortingFilteringUIFactory, SPTUIPresentationService, SPTViewLogger;

@interface SPTPodcastViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTPodcastViewModelDelegate, SPTShowContextMenuControllerDelegate, SPTShareableContext, SPTPodcastChipsSectionTableViewCellDelegate, SPTPodcastDescriptionTableViewCellDelegate, SPContentInsetViewController, VISREFTableHeaderViewDelegate, SPTPodcastNewFollowTableViewCellDelegate, SPTPodcastEpisodeTableViewCellDelegate, SPTPageController, SPViewController, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _dataLoaded;
    SPTPodcastViewModel *_viewModel;
    SPTPodcastFollowButtonObservable *_followObserver;
    id <SPTPodcastFollowButtonObserver> _episodeNotificationsViewProvider;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    SPTShowContextMenuController *_showContextMenuController;
    GLUEContextMenuAccessoryButton *_contextMenuButton;
    id <SPTPodcastEpisodeCellConfigurator> _cellConfigurator;
    SPTTableView *_tableView;
    SPTInfoView *_infoView;
    SPTPodcastFilterTableFooterView *_filterResetTableFooterView;
    id <GLUETheme> _legacyTheme;
    SPTTheme *_theme;
    id <SPTShareFeature> _shareFeature;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTPodcastTestManager> _podcastTestManager;
    id <SPTUIPresentationService> _presentationService;
    SPTPodcastLogger<SPTPodcastUBILogger> *_logger;
    id <SPTCollectionLogger> _collectionLogger;
    id <SPTViewLogger> _viewLogger;
    NSURL *_firstRowImpressionEpisode;
    SPTPodcastHeaderController *_headerController;
    VISREFTableHeaderView *_podcastTableViewHeader;
    id <SPTSortingFilteringUIFactory> _sortingFilteringUIFactory;
    id <SPTFreeTierTooltipConditionalPresenter> _tooltipPresenter;
    id <SPTPodcastFollowSectionTableViewCellCommonInterface> _followSectionTableViewCell;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTPodcastFollowSectionTableViewCellCommonInterface> followSectionTableViewCell; // @synthesize followSectionTableViewCell=_followSectionTableViewCell;
@property(retain, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
@property(retain, nonatomic) id <SPTSortingFilteringUIFactory> sortingFilteringUIFactory; // @synthesize sortingFilteringUIFactory=_sortingFilteringUIFactory;
@property(retain, nonatomic) VISREFTableHeaderView *podcastTableViewHeader; // @synthesize podcastTableViewHeader=_podcastTableViewHeader;
@property(retain, nonatomic) SPTPodcastHeaderController *headerController; // @synthesize headerController=_headerController;
@property(copy, nonatomic) NSURL *firstRowImpressionEpisode; // @synthesize firstRowImpressionEpisode=_firstRowImpressionEpisode;
@property(nonatomic, getter=isDataLoaded) _Bool dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(retain, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(retain, nonatomic) id <SPTCollectionLogger> collectionLogger; // @synthesize collectionLogger=_collectionLogger;
@property(retain, nonatomic) SPTPodcastLogger<SPTPodcastUBILogger> *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(readonly, nonatomic) id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <GLUETheme> legacyTheme; // @synthesize legacyTheme=_legacyTheme;
@property(retain, nonatomic) SPTPodcastFilterTableFooterView *filterResetTableFooterView; // @synthesize filterResetTableFooterView=_filterResetTableFooterView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <SPTPodcastEpisodeCellConfigurator> cellConfigurator; // @synthesize cellConfigurator=_cellConfigurator;
@property(retain, nonatomic) GLUEContextMenuAccessoryButton *contextMenuButton; // @synthesize contextMenuButton=_contextMenuButton;
@property(retain, nonatomic) SPTShowContextMenuController *showContextMenuController; // @synthesize showContextMenuController=_showContextMenuController;
@property(retain, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(nonatomic) __weak id <SPTPodcastFollowButtonObserver> episodeNotificationsViewProvider; // @synthesize episodeNotificationsViewProvider=_episodeNotificationsViewProvider;
@property(retain, nonatomic) SPTPodcastFollowButtonObservable *followObserver; // @synthesize followObserver=_followObserver;
@property(retain, nonatomic) SPTPodcastViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)presentToolTipForFollowButton:(id)arg1;
- (void)playURIInContext:(id)arg1;
- (void)determineIfContextContainsURI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic) NSURL *URI;
- (void)episodeContentDidCollapse;
- (void)episodeDescriptionURLTapped:(id)arg1;
- (void)updateTableViewAfterHeightChange;
- (void)episodeDescriptionDidCollapse;
- (void)episodeDescriptionDidExpand;
- (void)chipsSectionTableViewCell:(id)arg1 didSelectTopic:(id)arg2;
- (void)viewModelDidUpdateSupplementaryContent:(id)arg1;
- (void)viewModel:(id)arg1 showContextMenuForTrailerEpisode:(id)arg2 atIndexPath:(id)arg3;
- (void)viewModel:(id)arg1 scrollToLatestPlayedEpisodeAtIndexPath:(id)arg2;
- (void)viewModelDidSelectContextMenuButton:(id)arg1 senderView:(id)arg2;
- (void)podcastViewModelDidUpdatePlaybackRestrictions:(id)arg1;
- (void)viewModel:(id)arg1 didUpdateFilteredState:(_Bool)arg2;
- (void)showInfoViewWithError:(id)arg1;
- (void)viewModel:(id)arg1 willPresentFilterContextViewController:(id)arg2 fromSender:(id)arg3;
- (void)viewModel:(id)arg1 podcastDidFinishLoadingWithError:(id)arg2;
- (void)viewModel:(id)arg1 didUpdateSectionWithSectionViewModel:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)preferredNavigationBarState;
- (void)adjustScrollViewOffset:(double)arg1;
- (void)didSelectResetFiltersButton:(id)arg1;
- (_Bool)isTableViewUpToDate;
- (void)adjustHeaderContentOffset:(double)arg1;
- (void)adjustContentOffsetToShowOrHideFilterBarWithTargetContentOffset:(inout struct CGPoint *)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)provideSearchBarView;
- (void)setupSearchBarIfNeeded;
- (void)setupTableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)showContextMenuController:(id)arg1 didUpdateFollowedState:(_Bool)arg2 forShow:(id)arg3;
- (void)followButtonPressed;
- (void)showContextMenuWithSenderView:(id)arg1;
- (void)createContextMenuButton;
- (void)setupConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPodcastViewModel:(id)arg1 glueImageLoader:(id)arg2 logger:(id)arg3 collectionLogger:(id)arg4 showContextMenuController:(id)arg5 episodeCellConfigurator:(id)arg6 collectionTestManager:(id)arg7 podcastTestManager:(id)arg8 podcastContextMenuProvider:(id)arg9 shareFeature:(id)arg10 linkDispatcher:(id)arg11 presentationService:(id)arg12 sortingFilteringUIFactory:(id)arg13 viewLogger:(id)arg14 episodeNotificationsViewProvider:(id)arg15 tooltipPresenter:(id)arg16;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

