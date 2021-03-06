//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class IGNonFeedActivatorCellViewModel, IGTextButton, UIButton, UIImageView, UILabel;
@protocol IGNonFeedActivatorCellDelegate;

@interface IGNonFeedActivatorCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIImageView *_checkImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    IGTextButton *_actionButton;
    UIButton *_dismissButton;
    IGNonFeedActivatorCellViewModel *_viewModel;
    id <IGNonFeedActivatorCellDelegate> _delegate;
}

+ (struct CGSize)preferredSizeWithViewModel:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNonFeedActivatorCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapDismissButton;
- (void)_didTapActionButton;
- (void)configureWithItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

