//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAParticipantPickerViewController.h"

@class UILabel, WAParticipantPickerConfiguration;

@interface WAListParticipantPickerViewController : WAParticipantPickerViewController
{
    UILabel *_broadcastListWarning;
    WAParticipantPickerConfiguration *_config;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)updateContactSelection:(id)arg1 shouldClearSearch:(_Bool *)arg2;
- (void)configureCell:(id)arg1 forContact:(id)arg2;
- (void)reloadContacts;
- (void)setContactGridHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithType:(unsigned long long)arg1;

@end

