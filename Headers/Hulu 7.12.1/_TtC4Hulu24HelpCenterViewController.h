//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel;

@interface _TtC4Hulu24HelpCenterViewController : UIViewController
{
    // Error parsing type: , name: helpCenterLabel
    // Error parsing type: , name: accessibilityHelpLabel
    // Error parsing type: , name: pageInstanceId
    // Error parsing type: , name: timedPageImpressionState
    // Error parsing type: , name: backgroundGradient
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didTapAccessibilityHelp;
- (void)didTapHelpText;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, retain) UILabel *accessibilityHelpLabel; // @synthesize accessibilityHelpLabel;
@property(nonatomic, retain) UILabel *helpCenterLabel; // @synthesize helpCenterLabel;

@end

