//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WACallParticipantCancelButton, WAProfilePictureDynamicThumbnailView;
@protocol WACallParticipantInfoTableViewCellDelegate;

@interface WACallParticipantInfoTableViewCell : UITableViewCell
{
    WACallParticipantCancelButton *_cancelButton;
    WAProfilePictureDynamicThumbnailView *_profilePictureView;
    _Bool _showCancel;
    id <WACallParticipantInfoTableViewCellDelegate> _delegate;
}

@property(nonatomic) __weak id <WACallParticipantInfoTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showCancel; // @synthesize showCancel=_showCancel;
- (void).cxx_destruct;
- (void)setProfileImageAlpha:(double)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setParticipantJID:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

