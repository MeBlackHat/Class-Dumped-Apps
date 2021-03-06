//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HMEFeedViewModelDisplaying-Protocol.h"

@class HMEFeedCardHeaderViewModel, MDCButton, NSArray, NSLayoutConstraint, NSString, UILabel;
@protocol HMEFeedViewModel;

@interface HMEFeedCardHeaderView : UIView <HMEFeedViewModelDisplaying>
{
    UILabel *_title;
    UILabel *_subtitle;
    HMEFeedCardHeaderViewModel *_headerViewModel;
    MDCButton *_overflowMenuButton;
    NSArray *_titleVisibleConstraints;
    NSArray *_subtitleVisibleConstraints;
    NSArray *_overflowMenuVisibleConstraints;
    NSLayoutConstraint *_headerViewHeightConstraint;
}

@property(readonly, nonatomic) NSLayoutConstraint *headerViewHeightConstraint; // @synthesize headerViewHeightConstraint=_headerViewHeightConstraint;
@property(readonly, nonatomic) NSArray *overflowMenuVisibleConstraints; // @synthesize overflowMenuVisibleConstraints=_overflowMenuVisibleConstraints;
@property(readonly, nonatomic) NSArray *subtitleVisibleConstraints; // @synthesize subtitleVisibleConstraints=_subtitleVisibleConstraints;
@property(readonly, nonatomic) NSArray *titleVisibleConstraints; // @synthesize titleVisibleConstraints=_titleVisibleConstraints;
@property(readonly, nonatomic) MDCButton *overflowMenuButton; // @synthesize overflowMenuButton=_overflowMenuButton;
@property(retain, nonatomic) HMEFeedCardHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
@property(readonly, nonatomic) UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HMEFeedViewModel> viewModel;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

