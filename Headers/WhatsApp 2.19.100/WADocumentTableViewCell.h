//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, WAMessage;
@protocol WADocumentTableViewCellDelegate;

@interface WADocumentTableViewCell : UITableViewCell
{
    WAMessage *_message;
    struct CGSize _prevSize;
    id <WADocumentTableViewCellDelegate> _delegate;
    UIImageView *_thumbnailImageView;
    UIImageView *_overlayImageView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_extensionLabel;
}

+ (double)preferredHeight;
@property(nonatomic) __weak UILabel *extensionLabel; // @synthesize extensionLabel=_extensionLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(nonatomic) __weak UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) __weak id <WADocumentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)fileInfoAttributedStringForMessage:(id)arg1;
- (void)configureWithMessage:(id)arg1 searchTerm:(id)arg2;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

