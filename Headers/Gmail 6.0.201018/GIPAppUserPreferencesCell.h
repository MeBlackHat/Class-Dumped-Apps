//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GIPApp;
@protocol GIPAppUserPreferenceCellDelegate;

@interface GIPAppUserPreferencesCell : UITableViewCell
{
    GIPApp *app_;
    id <GIPAppUserPreferenceCellDelegate> _delegate;
}

+ (id)installText;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GIPAppUserPreferenceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GIPApp *app; // @synthesize app=app_;
- (void)fullImageDidLoad:(id)arg1;
- (void)didPressInstallButton:(id)arg1;
- (void)onToggleSwitch:(id)arg1;
- (void)setUpImageView;
- (void)setUpAccessoryView;
- (void)layoutSubviews;

@end

