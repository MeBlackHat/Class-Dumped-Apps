//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAnchorAdditionFakeNavBar, AWESearchBar, NSString, UIButton;

@interface AWEAnchorAdditionSearchBar : UIView
{
    CDUnknownBlockType _searchKeywordBlock;
    CDUnknownBlockType _backBlock;
    NSString *_navBarTitle;
    NSString *_searchPlaceholder;
    AWESearchBar *_searchBar;
    UIButton *_searchCancelButton;
    AWEAnchorAdditionFakeNavBar *_fackNavBar;
    UIView *_searchBarContentView;
}

@property(retain, nonatomic) UIView *searchBarContentView; // @synthesize searchBarContentView=_searchBarContentView;
@property(retain, nonatomic) AWEAnchorAdditionFakeNavBar *fackNavBar; // @synthesize fackNavBar=_fackNavBar;
@property(retain, nonatomic) UIButton *searchCancelButton; // @synthesize searchCancelButton=_searchCancelButton;
@property(retain, nonatomic) AWESearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) NSString *searchPlaceholder; // @synthesize searchPlaceholder=_searchPlaceholder;
@property(copy, nonatomic) NSString *navBarTitle; // @synthesize navBarTitle=_navBarTitle;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(copy, nonatomic) CDUnknownBlockType searchKeywordBlock; // @synthesize searchKeywordBlock=_searchKeywordBlock;
- (void).cxx_destruct;
- (_Bool)endEditing:(_Bool)arg1;
- (void)backAction:(id)arg1;
- (void)hideSearchCancelButton;
- (void)hideSearchCancelButtonWithSuperview:(id)arg1;
- (void)showSearchCancelButton;
- (void)showSearchCancelButtonWithSuperview:(id)arg1;
- (void)animationWithSearchBarBeginEditing:(_Bool)arg1;
- (void)updateText:(id)arg1;
- (void)setupSearchBarUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

