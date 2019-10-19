//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAAutobackupSettingsViewController.h"

@class _WAReminderAutoBackupHeaderView;

@interface WAReminderAutoBackupViewController : WAAutobackupSettingsViewController
{
    _Bool _showingDoneButton;
    _WAReminderAutoBackupHeaderView *_headerView;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _useDoneButton;
}

@property(copy, nonatomic) CDUnknownBlockType useDoneButton; // @synthesize useDoneButton=_useDoneButton;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void).cxx_destruct;
- (void)nextAction:(id)arg1;
- (void)selectAutoBackupFrequency:(unsigned long long)arg1;
- (void)wa_fontSizeDidChange;
- (void)setUpTableView;
- (id)bottomText;
- (void)viewDidLoad;
- (void)updateNextButtonEnabled;
- (void)refreshNextButton;
- (id)newAutoLayoutAwareTableViewHeader;

@end

