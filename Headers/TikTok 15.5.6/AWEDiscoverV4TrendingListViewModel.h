//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseListViewModel.h"

@class AWEDiscoverV4TrendingListDataController, AWEDiscoverV4TrendingListSectionViewModel;

@interface AWEDiscoverV4TrendingListViewModel : AWEBaseListViewModel
{
    _Bool _shouldShowLoading;
    _Bool _hasMoreData;
    AWEDiscoverV4TrendingListSectionViewModel *_listSectionViewModel;
    AWEDiscoverV4TrendingListDataController *_dataController;
}

@property(retain, nonatomic) AWEDiscoverV4TrendingListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) AWEDiscoverV4TrendingListSectionViewModel *listSectionViewModel; // @synthesize listSectionViewModel=_listSectionViewModel;
@property(readonly) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property _Bool shouldShowLoading; // @synthesize shouldShowLoading=_shouldShowLoading;
- (void).cxx_destruct;
- (void)configWithParams:(id)arg1;
- (void)showLoading;
- (void)loadMoreListData;
- (void)fetchListDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchListData;
- (void)setupSectionViewModelsWithParams:(id)arg1;

@end

