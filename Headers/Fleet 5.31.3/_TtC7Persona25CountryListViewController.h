//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIButton, UILabel, UIStackView, UITableView, UIView, _TtC7Persona13PersonaButton;

@interface _TtC7Persona25CountryListViewController : UIViewController
{
    // Error parsing type: , name: containerView
    // Error parsing type: , name: content
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: cancelButton
    // Error parsing type: , name: topTableStack
    // Error parsing type: , name: topTableLabel
    // Error parsing type: , name: topTableView
    // Error parsing type: , name: bottomTableStack
    // Error parsing type: , name: bottomTableLabel
    // Error parsing type: , name: bottomTableView
    // Error parsing type: , name: selectCountryButton
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: cellIdentifier
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)handleButtonTapped:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
@property(nonatomic) __weak _TtC7Persona13PersonaButton *selectCountryButton; // @synthesize selectCountryButton;
@property(nonatomic) __weak UITableView *bottomTableView; // @synthesize bottomTableView;
@property(nonatomic) __weak UILabel *bottomTableLabel; // @synthesize bottomTableLabel;
@property(nonatomic) __weak UIStackView *bottomTableStack; // @synthesize bottomTableStack;
@property(nonatomic) __weak UITableView *topTableView; // @synthesize topTableView;
@property(nonatomic) __weak UILabel *topTableLabel; // @synthesize topTableLabel;
@property(nonatomic) __weak UIStackView *topTableStack; // @synthesize topTableStack;
@property(nonatomic) __weak UIButton *cancelButton; // @synthesize cancelButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, copy) NSArray *content;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView;

@end

