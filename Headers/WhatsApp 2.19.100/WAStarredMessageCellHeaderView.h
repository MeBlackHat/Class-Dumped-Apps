//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WABadgedLabel, WAProfilePictureDynamicThumbnailView;

@interface WAStarredMessageCellHeaderView : UIView
{
    WAProfilePictureDynamicThumbnailView *_profilePictureThumbnail;
    WABadgedLabel *_participantNameLabel;
    UILabel *_separatorLabel;
    UILabel *_groupNameLabel;
    UILabel *_dateLabel;
    UIImageView *_verifiedBadgeImageView;
    struct UIEdgeInsets _textInsets;
}

+ (double)preferredHeightForCellData:(id)arg1;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
- (void).cxx_destruct;
- (void)configureWithCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

