//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGProfilePictureImageView, IGStringStyle, IGTapButton, UIButton;
@protocol IGFBUpsellHeaderViewCellDelegate, IGFeedTheme;

@interface IGFBUpsellHeaderViewCell : UICollectionViewCell
{
    id <IGFBUpsellHeaderViewCellDelegate> _delegate;
    id <IGFeedTheme> _feedTheme;
    IGTapButton *_titleButton;
    UIButton *_subtitleButton;
    UIButton *_rightSideMoreButton;
    IGProfilePictureImageView *_profilePicView;
    IGStringStyle *_primaryBoldLinkStyle;
    IGStringStyle *_secondaryBoldStyle;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStringStyle *secondaryBoldStyle; // @synthesize secondaryBoldStyle=_secondaryBoldStyle;
@property(retain, nonatomic) IGStringStyle *primaryBoldLinkStyle; // @synthesize primaryBoldLinkStyle=_primaryBoldLinkStyle;
- (void)_onRightSideMoreButtonTapped;
- (id)_rightSideMoreButton;
- (id)_subtitleButton;
- (id)_titleButton;
- (id)_profilePicView;
- (id)_contentBackgroundColor;
- (void)_layoutRightSideMoreButton;
- (void)_layoutTitleAndSubtitleViews;
- (void)_layoutProfilePicView;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 delegate:(id)arg2 module:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

