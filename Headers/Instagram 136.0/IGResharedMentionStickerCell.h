//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBShimmeringView, NSString, UILabel, UIView;
@protocol IGStickerViewType;

@interface IGResharedMentionStickerCell : UICollectionViewCell
{
    UIView<IGStickerViewType> *_resharedStickerView;
    UILabel *_timeLeftLabel;
    UIView *_footerGradientView;
    UIView *_wrapperView;
    UIView *_highlightedTintView;
    FBShimmeringView *_shimmeringView;
    NSString *_currentlyLoadingAsyncStickerID;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSString *currentlyLoadingAsyncStickerID; // @synthesize currentlyLoadingAsyncStickerID=_currentlyLoadingAsyncStickerID;
- (void).cxx_destruct;
- (void)_hideLoading;
- (void)_showLoading;
- (void)_generateResharedMentionToShare:(id)arg1 userSession:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setExpiringAtDate:(id)arg1;
- (void)configureWithFeedItem:(id)arg1 userSession:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

