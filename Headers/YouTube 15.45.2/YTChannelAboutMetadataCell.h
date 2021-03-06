//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTCollectionViewCell.h>

#import "YTCellLinkProtocol-Protocol.h"
#import "YTCollectionViewCellProtocol-Protocol.h"
#import "YTFormattedStringLabelDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIView, YTFormattedStringLabel, YTIChannelAboutMetadataRenderer;
@protocol YTAttributedLabel, YTCellLinkDelegate, YTResponder;

@interface YTChannelAboutMetadataCell : YTCollectionViewCell <YTFormattedStringLabelDelegate, YTCellLinkProtocol, YTCollectionViewCellProtocol>
{
    UIView<YTAttributedLabel> *_descriptionLabel;
    NSMutableArray *_primaryLinkLabels;
    UIImageView *_horizontalSeparator;
    YTFormattedStringLabel *_viewCountLabel;
    YTFormattedStringLabel *_subscriberCountLabel;
    YTFormattedStringLabel *_joinDateLabel;
    id <YTCellLinkDelegate> _cellLinkDelegate;
    id <YTResponder> _parentResponder;
    YTIChannelAboutMetadataRenderer *_entry;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) YTIChannelAboutMetadataRenderer *entry; // @synthesize entry=_entry;
@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTCellLinkDelegate> cellLinkDelegate; // @synthesize cellLinkDelegate=_cellLinkDelegate;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

