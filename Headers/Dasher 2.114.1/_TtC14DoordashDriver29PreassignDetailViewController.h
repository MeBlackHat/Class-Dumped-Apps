//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UICollectionView, UILabel, UIView, _TtC14DoordashDriver13LoadingButton;

@interface _TtC14DoordashDriver29PreassignDetailViewController : UIViewController
{
    // Error parsing type: , name: module
    // Error parsing type: , name: delegate
    // Error parsing type: , name: transparentCardContainerViewController
    // Error parsing type: , name: claimContainerView
    // Error parsing type: , name: claimAmountLabel
    // Error parsing type: , name: claimButton
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: sections
    // Error parsing type: , name: headerCellIdentifier
    // Error parsing type: , name: summaryCellIdentifier
    // Error parsing type: , name: mapCellIdentifier
    // Error parsing type: , name: dividerCellIdentifier
    // Error parsing type: , name: taskCellIdentifier
    // Error parsing type: , name: bonusCellIdentifier
    // Error parsing type: , name: headerPreferredCellHeight
    // Error parsing type: , name: headerCellHeight
    // Error parsing type: , name: mapCellHeight
    // Error parsing type: , name: summaryCellHeight
    // Error parsing type: , name: titleCellHeight
    // Error parsing type: , name: bonusCellHeight
    // Error parsing type: , name: preassignIsClaimed
    // Error parsing type: , name: declineViewController
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)clickUnassignButton;
- (void)didClickClose;
- (void)viewDidLoad;
@property(nonatomic) _Bool preassignIsClaimed; // @synthesize preassignIsClaimed;
- (void)clickedClaimButton:(id)arg1;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak _TtC14DoordashDriver13LoadingButton *claimButton; // @synthesize claimButton;
@property(nonatomic) __weak UILabel *claimAmountLabel; // @synthesize claimAmountLabel;
@property(nonatomic) __weak UIView *claimContainerView; // @synthesize claimContainerView;

@end

