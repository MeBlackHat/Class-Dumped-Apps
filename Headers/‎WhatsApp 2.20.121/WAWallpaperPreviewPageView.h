//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UISegmentedControl, UITableView, WAMediaTransferProgressView;

@interface WAWallpaperPreviewPageView : UIView
{
    UIImageView *_imageView;
    WAMediaTransferProgressView *_progressView;
    UISegmentedControl *_modeSegmentedControl;
    UITableView *_messagesTableView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *messagesTableView; // @synthesize messagesTableView=_messagesTableView;
@property(retain, nonatomic) UISegmentedControl *modeSegmentedControl; // @synthesize modeSegmentedControl=_modeSegmentedControl;
@property(readonly, nonatomic) WAMediaTransferProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

