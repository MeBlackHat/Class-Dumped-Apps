//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDKTheme, MDCButton, UIImageView;
@protocol GDANotificationsButtonDelegate;

@interface GDANotificationsButtonView : UIView
{
    id <GDANotificationsButtonDelegate> _delegate;
    MDCButton *_documentButton;
    UIImageView *_chevron;
    UIImageView *_fileIcon;
    GDKTheme *_theme;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GDKTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIImageView *fileIcon; // @synthesize fileIcon=_fileIcon;
@property(retain, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(retain, nonatomic) MDCButton *documentButton; // @synthesize documentButton=_documentButton;
@property(nonatomic) __weak id <GDANotificationsButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void)documentButtonPressed:(id)arg1;
- (void)prepareForReuse;
- (void)updateViewWithButtonTitle:(id)arg1 fileImage:(id)arg2 imageTintColor:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

