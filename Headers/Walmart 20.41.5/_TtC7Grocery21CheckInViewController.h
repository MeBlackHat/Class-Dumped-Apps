//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel, UINavigationItem, UITableView, UIView;
@protocol _TtP7Grocery24CheckInBannerAdsViewType_;

@interface _TtC7Grocery21CheckInViewController : UIViewController
{
    // Error parsing type: , name: tableView
    // Error parsing type: , name: bannerView
    // Error parsing type: , name: errorView
    // Error parsing type: , name: errorViewTop
    // Error parsing type: , name: errorViewHeight
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: tryingToConnectLabel
    // Error parsing type: , name: dependencies
    // Error parsing type: , name: minExpectedTravelTimeAtCheckIn
    // Error parsing type: , name: expectedTravelTimeBelowMinimumAlertWasShown
    // Error parsing type: , name: orders
    // Error parsing type: , name: entryType
    // Error parsing type: , name: viewAppeared
    // Error parsing type: , name: lastCheckInStatus
    // Error parsing type: , name: isLoadingPredictedWaitTime
    // Error parsing type: , name: pickupLocationPlacemark
    // Error parsing type: , name: checkInStateCell
    // Error parsing type: , name: mapViewCell
    // Error parsing type: , name: pickupDetailsCell
    // Error parsing type: , name: bayNumberCell
    // Error parsing type: , name: travelModeCell
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (_Bool)shouldPerformSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak UILabel *tryingToConnectLabel; // @synthesize tryingToConnectLabel;
@property(nonatomic) __weak UINavigationItem *activityIndicator; // @synthesize activityIndicator;
@property(nonatomic) __weak NSLayoutConstraint *errorViewHeight; // @synthesize errorViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *errorViewTop; // @synthesize errorViewTop;
@property(nonatomic) __weak UIView *errorView; // @synthesize errorView;
@property(nonatomic) __weak UIView<_TtP7Grocery24CheckInBannerAdsViewType_> *bannerView; // @synthesize bannerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;

@end

