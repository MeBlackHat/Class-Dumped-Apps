//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "HTSLiveFeedCellUpdater-Protocol.h"

@class IESLiveFeedBigNoodleLabel, IESLiveGradientView, NSString, UIImageView, UILabel, UIView;
@protocol HTSLiveFeedItem, IESLiveEnvironment;

@interface HTSLiveFeedCollectionViewCell : UICollectionViewCell <HTSLiveFeedCellUpdater>
{
    id <HTSLiveFeedItem> _item;
    UIImageView *_coverImageView;
    IESLiveGradientView *_coverContainerView;
    UILabel *_titleLabel;
    UILabel *_locationLabel;
    IESLiveFeedBigNoodleLabel *_watchCountLabel;
    UIImageView *_tagView;
    UIImageView *_locationIcon;
    UIImageView *_redPacketIcon;
    UIView *_streamingPreview;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(nonatomic) __weak UIView *streamingPreview; // @synthesize streamingPreview=_streamingPreview;
@property(retain, nonatomic) UIImageView *redPacketIcon; // @synthesize redPacketIcon=_redPacketIcon;
@property(retain, nonatomic) UIImageView *locationIcon; // @synthesize locationIcon=_locationIcon;
@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) IESLiveFeedBigNoodleLabel *watchCountLabel; // @synthesize watchCountLabel=_watchCountLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) IESLiveGradientView *coverContainerView; // @synthesize coverContainerView=_coverContainerView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) id <HTSLiveFeedItem> item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)accessibilityElementDidBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)update:(id)arg1;
- (void)applyPreview:(id)arg1;
- (void)prepareForReuse;
- (void)makeConstraints;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

