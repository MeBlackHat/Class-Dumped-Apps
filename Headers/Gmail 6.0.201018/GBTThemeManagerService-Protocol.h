//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GBTTheme, UIView;

@protocol GBTThemeManagerService <NSObject>
@property(nonatomic) __weak id rootObjectForUserInterfaceStyle;
@property(retain, nonatomic) GBTTheme *currentTheme;
- (void)updateThemeOfView:(UIView *)arg1;
- (void)loadTheme;
@end

