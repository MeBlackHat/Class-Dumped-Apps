//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSMutableArray, NSString, UIView, YTDonationAmountPickerView, YTDonationNonprofitView, YTDonationProgressView, YTFormattedStringLabel, YTIDonationShelfRenderer, YTImageView;
@protocol YTDonationEngagementCellDelegate, YTResponder;

@interface YTDonationEngagementCell : YTCollectionViewCell <YTCollectionViewCellProtocol, YTPageStyling, YTThumbnailMapping>
{
    YTIDonationShelfRenderer *_renderer;
    UIView *_greyView;
    UIView *_titleView;
    YTImageView *_image;
    YTFormattedStringLabel *_campaignTitleLabel;
    YTFormattedStringLabel *_campaignSubtitleLabel;
    YTDonationProgressView *_progressView;
    NSMutableArray *_creatorMessages;
    YTFormattedStringLabel *_mainCreatorMessage;
    YTDonationNonprofitView *_nonprofitView;
    YTDonationAmountPickerView *_amountPickerView;
    id <YTResponder> _parentResponder;
    id <YTDonationEngagementCellDelegate> _delegate;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <YTDonationEngagementCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)sizeViewsWithWidth:(double)arg1;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)thumbnailMappings;
- (void)setBounds:(struct CGRect)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

