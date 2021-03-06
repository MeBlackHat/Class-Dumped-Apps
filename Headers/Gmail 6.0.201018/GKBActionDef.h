//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface GKBActionDef : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int action; // @dynamic action;
@property(nonatomic) _Bool actionOnDown; // @dynamic actionOnDown;
@property(nonatomic) _Bool alwaysShowPopup; // @dynamic alwaysShowPopup;
@property(nonatomic) float delay; // @dynamic delay;
@property(copy, nonatomic) NSString *dynamicDataSourceClass; // @dynamic dynamicDataSourceClass;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasActionOnDown; // @dynamic hasActionOnDown;
@property(nonatomic) _Bool hasAlwaysShowPopup; // @dynamic hasAlwaysShowPopup;
@property(nonatomic) _Bool hasDelay; // @dynamic hasDelay;
@property(nonatomic) _Bool hasDynamicDataSourceClass; // @dynamic hasDynamicDataSourceClass;
@property(nonatomic) _Bool hasIconBundle; // @dynamic hasIconBundle;
@property(nonatomic) _Bool hasPopupLayout; // @dynamic hasPopupLayout;
@property(nonatomic) _Bool hasRepeatInterval; // @dynamic hasRepeatInterval;
@property(nonatomic) _Bool hasRepeatable; // @dynamic hasRepeatable;
@property(nonatomic) _Bool hasSeperator; // @dynamic hasSeperator;
@property(nonatomic) unsigned long long iconBundle; // @dynamic iconBundle;
@property(retain, nonatomic) NSMutableArray *keyDatasArray; // @dynamic keyDatasArray;
@property(readonly, nonatomic) unsigned long long keyDatasArray_Count; // @dynamic keyDatasArray_Count;
@property(retain, nonatomic) NSMutableArray *popupIconsArray; // @dynamic popupIconsArray;
@property(readonly, nonatomic) unsigned long long popupIconsArray_Count; // @dynamic popupIconsArray_Count;
@property(retain, nonatomic) NSMutableArray *popupLabelsArray; // @dynamic popupLabelsArray;
@property(readonly, nonatomic) unsigned long long popupLabelsArray_Count; // @dynamic popupLabelsArray_Count;
@property(copy, nonatomic) NSString *popupLayout; // @dynamic popupLayout;
@property(nonatomic) float repeatInterval; // @dynamic repeatInterval;
@property(nonatomic) _Bool repeatable; // @dynamic repeatable;
@property(copy, nonatomic) NSString *seperator; // @dynamic seperator;

@end

