//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEBaseListViewControllerOverride-Protocol.h"

@class AWEBaseListViewModel, NSString;

@interface AWEBaseListViewController : UIViewController <AWEBaseListViewControllerOverride>
{
    AWEBaseListViewModel *_viewModel;
}

+ (Class)viewModelClass;
@property(retain, nonatomic) AWEBaseListViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)sectionViewModels;
- (void)setupViewModel;
- (void)setupCollectionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

