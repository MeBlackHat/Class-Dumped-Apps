//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, WALinkLabel;

@interface _WAAccountSecurityHeaderView : UIView
{
    WALinkLabel *_textLabel;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) WALinkLabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)installLayoutConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

