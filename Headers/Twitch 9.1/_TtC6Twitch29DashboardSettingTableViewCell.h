//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseTableViewCell.h>

@class UIImageView, UILabel, _TtC12TwitchCoreUI14StandardSwitch;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch29DashboardSettingTableViewCell : TWBaseTableViewCell
{
    // Error parsing type: , name: row
    // Error parsing type: , name: delegate
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: settingSwitch
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)applyTheme:(id)arg1;
- (void)switchValueChanged;
@property(nonatomic, retain) _TtC12TwitchCoreUI14StandardSwitch *settingSwitch; // @synthesize settingSwitch;
@property(nonatomic, retain) UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic, retain) UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) UIImageView *iconImageView; // @synthesize iconImageView;

@end

