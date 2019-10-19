//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, WAAnimatedGearsView;

@interface WABackupInfoTableViewCell : UITableViewCell
{
    UIView *_backupInfoTextContainerView;
    WAAnimatedGearsView *_gearsView;
    UILabel *_backupDateLabel;
    UILabel *_backupSizeLabel;
    UILabel *_videoSizeLabel;
    UILabel *_helperTextLabel;
}

+ (id)createLabelWithTextColor:(id)arg1;
@property(readonly, nonatomic) UILabel *helperTextLabel; // @synthesize helperTextLabel=_helperTextLabel;
@property(readonly, nonatomic) UILabel *videoSizeLabel; // @synthesize videoSizeLabel=_videoSizeLabel;
@property(readonly, nonatomic) UILabel *backupSizeLabel; // @synthesize backupSizeLabel=_backupSizeLabel;
@property(readonly, nonatomic) UILabel *backupDateLabel; // @synthesize backupDateLabel=_backupDateLabel;
@property(readonly, nonatomic) WAAnimatedGearsView *gearsView; // @synthesize gearsView=_gearsView;
- (void).cxx_destruct;
- (void)updateFonts;
- (void)installLayoutConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

