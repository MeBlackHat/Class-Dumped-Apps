//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIToolbarDelegate-Protocol.h"
#import "WAMapViewDelegate-Protocol.h"

@class CAAnimation, CLLocation, CLLocationManager, MKLocalSearch, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIBarButtonItem, UISearchController, UITableView, UITableViewCell, UIToolbar, UIView, WAHTTPFetcher, WALinkLabel, WAMapTypeSegmentedControl, WAMapView, WAPulsingCircleView, WASearchSuggestionsViewController, WATimer, WamEventLocationPicker;
@protocol WALegacyShareLocationControllerDelegate;

@interface WALegacyShareLocationController : WAViewController <MKMapViewDelegate, WAMapViewDelegate, UIToolbarDelegate, UITableViewDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, CLLocationManagerDelegate>
{
    WamEventLocationPicker *_fieldStats;
    double _elapsedTime;
    double _controllerLoadedTime;
    CLLocationManager *_locationManager;
    _Bool _goodLocationReceived;
    WATimer *_staleTimer;
    WASearchSuggestionsViewController *_searchSuggestionsViewController;
    UISearchController *_searchController;
    NSString *_placeSearchCriteria;
    UIView *_attributionTextView;
    WALinkLabel *_attributionTextLabel;
    UITableViewCell *_cellSendMyLocation;
    WAPulsingCircleView *_pulsingCircle;
    NSTimer *_pulseAnimationUpdateTimer;
    CAAnimation *_lastKnownPulseAnimation;
    NSMutableSet *_cachesCreatedThisSession;
    NSArray *_places;
    NSMutableArray *_searchHistory;
    CLLocation *_searchLocation;
    CLLocation *_lastUpdatedLocation;
    double _searchRadius;
    WAHTTPFetcher *_fetcher;
    MKLocalSearch *_appleMapsSearch;
    _Bool _requestInProgress;
    unsigned long long _defaultSource;
    _Bool _isFallBack;
    _Bool _displayShadow;
    _Bool _moreResultsAvailable;
    NSString *_nextResultsPageURLString;
    long long _loadingMoreRowIndex;
    UITableViewCell *_cellLoadingMore;
    long long _expandCollapseRowIndex;
    long long _searchingRowIndex;
    _Bool _zoomToPlacesWhenMapExpands;
    _Bool _locationUnavailableAlertShown;
    _Bool _locationServicesDisabledAlertShown;
    _Bool _fullHeightLayout;
    _Bool _showCollapseButton;
    _Bool _placeListExpanded;
    id <WALegacyShareLocationControllerDelegate> _delegate;
    UIView *_mapContainerView;
    WAMapView *_mapView;
    UIView *_horizontalMapDivider;
    UIView *_verticalMapDivider;
    UITableView *_tableViewPlaces;
    UIToolbar *_toolbarMapType;
    WAMapTypeSegmentedControl *_scMapType;
    UIBarButtonItem *_barButtonCancel;
    UIBarButtonItem *_barButtonRefresh;
    NSString *_accuracyStr;
}

@property(nonatomic) _Bool placeListExpanded; // @synthesize placeListExpanded=_placeListExpanded;
@property(nonatomic) _Bool showCollapseButton; // @synthesize showCollapseButton=_showCollapseButton;
@property(nonatomic) _Bool fullHeightLayout; // @synthesize fullHeightLayout=_fullHeightLayout;
@property(copy, nonatomic) NSString *accuracyStr; // @synthesize accuracyStr=_accuracyStr;
@property(retain, nonatomic) UIBarButtonItem *barButtonRefresh; // @synthesize barButtonRefresh=_barButtonRefresh;
@property(retain, nonatomic) UIBarButtonItem *barButtonCancel; // @synthesize barButtonCancel=_barButtonCancel;
@property(retain, nonatomic) WAMapTypeSegmentedControl *scMapType; // @synthesize scMapType=_scMapType;
@property(retain, nonatomic) UIToolbar *toolbarMapType; // @synthesize toolbarMapType=_toolbarMapType;
@property(retain, nonatomic) UITableView *tableViewPlaces; // @synthesize tableViewPlaces=_tableViewPlaces;
@property(retain, nonatomic) UIView *verticalMapDivider; // @synthesize verticalMapDivider=_verticalMapDivider;
@property(retain, nonatomic) UIView *horizontalMapDivider; // @synthesize horizontalMapDivider=_horizontalMapDivider;
@property(retain, nonatomic) WAMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIView *mapContainerView; // @synthesize mapContainerView=_mapContainerView;
@property(nonatomic) __weak id <WALegacyShareLocationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)mapViewDidChangeButtonsHeight:(id)arg1;
- (void)mapView:(id)arg1 didSelectLocation:(id)arg2;
- (void)mapView:(id)arg1 didSelectPlacemark:(id)arg2 location:(id)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (long long)positionForBar:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchSuggestionsViewController:(id)arg1 didSelectSuggestion:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (void)wa_applicationDidEnterBackground;
- (void)wa_fontSizeDidChange;
- (void)wa_tintColorDidChange;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)cancelController;
- (void)finishControllerWithWAPlace:(id)arg1;
- (void)showDetailsForWAPlace:(id)arg1;
- (void)expandOrCollapsePlaceList;
- (void)refreshAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)mapTypeChangedAction:(id)arg1;
- (id)fullPathToSearchHistoryFile;
- (void)addSearchHistoryItem:(id)arg1;
- (void)setAttribution:(id)arg1;
- (void)startLocationUpdatesIfNecessary;
- (void)checkStateOfLocationServices;
- (void)processLocationError:(id)arg1;
- (void)presentTurnOnLocationServicesAlert;
- (void)presentFailedToGetLocationAlert;
- (void)presentNoLocationAccessAlert;
- (void)processUpdatedLocation:(id)arg1;
- (void)searchUsingBestKnownLocation;
- (void)searchWithCriteria:(id)arg1;
- (void)fetchNextPage;
- (void)searchForPlaces;
- (_Bool)searchCache:(id)arg1;
- (void)searchWithApple;
- (void)processFacebookPlaceSearchData:(id)arg1 error:(id)arg2;
- (id)stripNewlines:(id)arg1;
- (void)appendString:(id)arg1 ToAddress:(id)arg2 withSeparator:(_Bool)arg3;
- (void)searchWithFacebook;
- (void)processFoursquarePlaceSearchData:(id)arg1 error:(id)arg2;
- (void)searchWithFoursquare;
- (void)useFallbackForSource:(unsigned long long)arg1 submitFailure:(_Bool)arg2;
- (void)sendCurrentLocation;
- (void)stopPlaceSearch;
- (void)useResults:(id)arg1 add:(_Bool)arg2 cache:(_Bool)arg3 moreAvailable:(_Bool)arg4;
- (void)updatePulseAnimation:(id)arg1;
- (void)updateLayoutForCurrentOrientation;
- (void)dealloc;
- (id)initWithShareDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

