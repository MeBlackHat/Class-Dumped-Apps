//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IESCategoryModel, NSArray, NSMutableSet, NSString, UITableView;
@protocol ACCLoadingViewProtocol;

@interface AWEFilterBoxView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSArray *_categories;
    CDUnknownBlockType _selectionBlock;
    CDUnknownBlockType _unselectionBlock;
    NSArray *_filterCategorys;
    IESCategoryModel *_currentCategory;
    UITableView *_categoryTableView;
    UITableView *_filterTableView;
    NSMutableSet *_checkSet;
    NSMutableSet *_uncheckSet;
    UIView<ACCLoadingViewProtocol> *_loadingView;
    UIView *_categoryBackgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *categoryBackgroundView; // @synthesize categoryBackgroundView=_categoryBackgroundView;
@property(retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableSet *uncheckSet; // @synthesize uncheckSet=_uncheckSet;
@property(retain, nonatomic) NSMutableSet *checkSet; // @synthesize checkSet=_checkSet;
@property(retain, nonatomic) UITableView *filterTableView; // @synthesize filterTableView=_filterTableView;
@property(retain, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
@property(retain, nonatomic) IESCategoryModel *currentCategory; // @synthesize currentCategory=_currentCategory;
@property(copy, nonatomic) NSArray *filterCategorys; // @synthesize filterCategorys=_filterCategorys;
@property(copy, nonatomic) CDUnknownBlockType unselectionBlock; // @synthesize unselectionBlock=_unselectionBlock;
@property(copy, nonatomic) CDUnknownBlockType selectionBlock; // @synthesize selectionBlock=_selectionBlock;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)showError:(_Bool)arg1;
- (void)showLoading:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *uncheckArray;
@property(readonly, nonatomic) NSArray *checkArray;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

