//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UILayoutGuide;

@interface IBGAttachmentLoadingView : UIView
{
    UILayoutGuide *_centerContainerLayoutGuide;
    UIActivityIndicatorView *_loadingIndicator;
    UILabel *_loadingLabel;
}

@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILayoutGuide *centerContainerLayoutGuide; // @synthesize centerContainerLayoutGuide=_centerContainerLayoutGuide;
- (void).cxx_destruct;
- (void)applyOutboundTheme;
- (void)applyInboundTheme;
- (void)stopLoading;
- (void)startLoading;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

