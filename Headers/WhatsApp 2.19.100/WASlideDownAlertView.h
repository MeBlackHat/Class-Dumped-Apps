//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIToolbar, WATimer;

@interface WASlideDownAlertView : UIView
{
    UIToolbar *_alertToolbar;
    UILabel *_alertLabel;
    WATimer *_timer;
    _Bool _expanded;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)hideAnimated:(_Bool)arg1;
- (void)expandAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)init;

@end

