//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMSettingsContentViewObject.h"

#import "UIAccessibilityIdentification-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, YTICommand, YTMSettings, YTUserDefaults;

@interface YTMSettingItem : YTMSettingsContentViewObject <UIAccessibilityIdentification>
{
    YTMSettings *_settings;
    YTUserDefaults *_userDefaults;
    CDUnknownBlockType _boolActionBlock;
    int _settingType;
    NSString *_settingsKey;
    NSString *_userDefaultsKey;
    NSURL *_URL;
    CDUnknownBlockType _viewControllerBlock;
    CDUnknownBlockType _customNavigationBlock;
    NSArray *_subItems;
    NSDictionary *_enumToStringMap;
    YTICommand *_navigationEndpoint;
}

+ (id)chevronImageView;
+ (id)boolItemWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 userDefaults:(id)arg3 key:(id)arg4 pageStyle:(long long)arg5 actionBlock:(CDUnknownBlockType)arg6;
+ (id)boolItemWithTitle:(id)arg1 selected:(_Bool)arg2 pageStyle:(long long)arg3 actionBlock:(CDUnknownBlockType)arg4;
+ (id)boolItemWithTitle:(id)arg1 accessibilityIdentifier:(id)arg2 userDefaults:(id)arg3 key:(id)arg4 pageStyle:(long long)arg5;
+ (id)boolItemWithTitle:(id)arg1 userDefaults:(id)arg2 key:(id)arg3 pageStyle:(long long)arg4;
+ (id)boolItemWithTitle:(id)arg1 forSettings:(id)arg2 key:(SEL)arg3 pageStyle:(long long)arg4;
+ (id)dateItemWithTitle:(id)arg1 userDefaults:(id)arg2 key:(id)arg3;
+ (id)stringArrayItemWithTitle:(id)arg1 userDefaults:(id)arg2 key:(id)arg3;
+ (id)intArrayItemWithTitle:(id)arg1 userDefaults:(id)arg2 key:(id)arg3;
+ (id)stringItemWithTitle:(id)arg1 userDefaults:(id)arg2 key:(id)arg3;
+ (id)enumOptionsWithTitle:(id)arg1 optionsMap:(id)arg2 icon:(id)arg3 settings:(id)arg4 key:(SEL)arg5;
+ (id)enumOptionsWithTitle:(id)arg1 optionsMap:(id)arg2 icon:(id)arg3 userDefaults:(id)arg4 key:(id)arg5;
+ (id)URLItemWithTitle:(id)arg1 URL:(id)arg2;
+ (id)URLItemWithTitle:(id)arg1 URLString:(id)arg2;
+ (id)navEndpointItemWithTitle:(id)arg1 icon:(id)arg2 navEndpoint:(id)arg3;
+ (id)navEndpointItemWithButtonRenderer:(id)arg1 icon:(id)arg2;
+ (id)staticLabelItem:(id)arg1;
+ (id)subSectionWithTitle:(id)arg1 icon:(id)arg2 items:(id)arg3;
+ (id)subSectionWithTitle:(id)arg1 icon:(id)arg2 customNavigationBlock:(CDUnknownBlockType)arg3;
+ (id)subSectionWithTitle:(id)arg1 icon:(id)arg2 presentableViewControllerBlock:(CDUnknownBlockType)arg3;
+ (id)subSectionWithTitle:(id)arg1 icon:(id)arg2 viewControllerBlock:(CDUnknownBlockType)arg3;
+ (id)itemWithTitle:(id)arg1;
@property(readonly, nonatomic) YTICommand *navigationEndpoint; // @synthesize navigationEndpoint=_navigationEndpoint;
@property(readonly, nonatomic) NSDictionary *enumToStringMap; // @synthesize enumToStringMap=_enumToStringMap;
@property(readonly, nonatomic) NSArray *subItems; // @synthesize subItems=_subItems;
@property(readonly, nonatomic) CDUnknownBlockType customNavigationBlock; // @synthesize customNavigationBlock=_customNavigationBlock;
@property(readonly, nonatomic) CDUnknownBlockType boolActionBlock; // @synthesize boolActionBlock=_boolActionBlock;
@property(readonly, nonatomic) CDUnknownBlockType viewControllerBlock; // @synthesize viewControllerBlock=_viewControllerBlock;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
@property(readonly, nonatomic) NSString *settingsKey; // @synthesize settingsKey=_settingsKey;
@property(readonly, nonatomic) int settingType; // @synthesize settingType=_settingType;
- (void).cxx_destruct;
- (id)stringArrayFromCommaSeparatedString:(id)arg1;
- (id)intArrayFromCommaSeparatedString:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
@property(copy, nonatomic) NSString *accessibilityIdentifier;
- (void)didTapBoolSwitch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

