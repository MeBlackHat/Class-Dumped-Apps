//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GWAAlertMessageView, UIColor;

@protocol GWAAlertMessageViewDataSource <NSObject>
- (UIColor *)darkModeIconTintColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)darkModeButtonTitleColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)darkModeMessageTextColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)darkModeBackgroundColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)lightModeIconTintColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)lightModeButtonTitleColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)lightModeMessageTextColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (UIColor *)lightModeBackgroundColorForAlertMessage:(GWAAlertMessageView *)arg1;
- (_Bool)shouldShowBorder:(GWAAlertMessageView *)arg1;
@end

