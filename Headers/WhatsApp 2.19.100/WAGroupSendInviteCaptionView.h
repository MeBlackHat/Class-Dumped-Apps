//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, WACaptionBar, WAGroupSendInviteGroupInfoView;

@interface WAGroupSendInviteCaptionView : UIView
{
    UIView *_contactsGridView;
    UIView *_separator;
    WAGroupSendInviteGroupInfoView *_groupInfoView;
    WACaptionBar *_captionBar;
    NSLayoutConstraint *_bottomConstraint;
    double _bottomMargin;
}

@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupCaptionBarInsets;
- (double)bottomConstraintConstant;
- (void)hideKeyboard;
- (void)fontSizeDidChange;
- (void)setupConstraints;
- (void)didMoveToSuperview;
- (id)initWithContactsGridView:(id)arg1 groupName:(id)arg2 groupPicture:(id)arg3 captionBarDelegate:(id)arg4;

@end

