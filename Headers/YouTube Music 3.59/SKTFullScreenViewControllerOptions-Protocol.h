//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SKTMaximizedViewControllerOptions-Protocol.h"

@class NSString, SKTColorTheme, SKTFullScreenViewColorOverrides, UILabel, UIView;
@protocol SKTAccessoryView;

@protocol SKTFullScreenViewControllerOptions <SKTMaximizedViewControllerOptions>
@property(nonatomic) _Bool showShareButtonAtBottom;
@property(nonatomic) unsigned long long minimumSelectedContactCount;
@property(nonatomic) unsigned long long fullScreenActiveAccountDisplay;
@property(nonatomic) unsigned long long fullScreenStatusBarVisibility;
@property(nonatomic) long long cancelButtonIcon;
@property(retain, nonatomic) NSString *proceedButtonTitle;
@property(retain, nonatomic) SKTColorTheme *maximizedViewColors;
@property(retain, nonatomic) SKTFullScreenViewColorOverrides *maximizedViewColorOverrides;
@property(retain, nonatomic) UILabel *accessoryLabel;
@property(retain, nonatomic) UIView<SKTAccessoryView> *accessoryView;
@end

