//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWERegionSelectionSearchBar, AWERegionSelectionTableViewCell, NSArray, NSMutableSet, NSString, UITableView;

@interface AWERegionSelectionViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    _Bool _isSearchActive;
    _Bool _isSaveButtonActive;
    NSMutableSet *_selectedRegionSet;
    NSMutableSet *_selectedRegionStringSet;
    NSMutableSet *_prevSelectedRegionSet;
    CDUnknownBlockType _selectionBlock;
    UITableView *_regionTableView;
    AWERegionSelectionTableViewCell *_regionCell;
    NSArray *_regionList;
    NSArray *_filteredRegionList;
    NSString *_selectedRegions;
    AWERegionSelectionSearchBar *_searchBar;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSaveButtonActive; // @synthesize isSaveButtonActive=_isSaveButtonActive;
@property(nonatomic) _Bool isSearchActive; // @synthesize isSearchActive=_isSearchActive;
@property(retain, nonatomic) AWERegionSelectionSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) NSString *selectedRegions; // @synthesize selectedRegions=_selectedRegions;
@property(retain, nonatomic) NSArray *filteredRegionList; // @synthesize filteredRegionList=_filteredRegionList;
@property(copy, nonatomic) NSArray *regionList; // @synthesize regionList=_regionList;
@property(retain, nonatomic) AWERegionSelectionTableViewCell *regionCell; // @synthesize regionCell=_regionCell;
@property(retain, nonatomic) UITableView *regionTableView; // @synthesize regionTableView=_regionTableView;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(retain, nonatomic) NSMutableSet *prevSelectedRegionSet; // @synthesize prevSelectedRegionSet=_prevSelectedRegionSet;
@property(retain, nonatomic) NSMutableSet *selectedRegionStringSet; // @synthesize selectedRegionStringSet=_selectedRegionStringSet;
@property(retain, nonatomic) NSMutableSet *selectedRegionSet; // @synthesize selectedRegionSet=_selectedRegionSet;
- (_Bool)isRegionInRegionSet:(id)arg1;
- (void)showCancelAllowAllAlert:(CDUnknownBlockType)arg1 addLocations:(CDUnknownBlockType)arg2;
- (void)onSaveTapped:(id)arg1;
- (void)onCancelTapped:(id)arg1;
- (void)changeSaveButtonState:(_Bool)arg1;
- (void)configureSearchBarTextDirection:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)filterBySubString:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setStatusBarBackgroundColor:(id)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)setupUI;
- (void)fetchRegionList;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

