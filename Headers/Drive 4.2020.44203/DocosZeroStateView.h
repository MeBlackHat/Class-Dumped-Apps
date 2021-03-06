//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, UIStackView;

@interface DocosZeroStateView : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UIActivityIndicatorView *_activityIndicator;
    UIStackView *_containerView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIStackView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)setSecondaryLabelText:(id)arg1;
- (void)setPrimaryLabelText:(id)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

