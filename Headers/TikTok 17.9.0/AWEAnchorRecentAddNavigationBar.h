//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEAnchorRecentAddNavigationBar : UIView
{
    CDUnknownBlockType _leftTappedBlock;
    CDUnknownBlockType _rightTappedBlock;
    UILabel *_titleLabel;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType rightTappedBlock; // @synthesize rightTappedBlock=_rightTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType leftTappedBlock; // @synthesize leftTappedBlock=_leftTappedBlock;
- (void)rightBtnTapped:(id)arg1;
- (void)leftBtnTapped:(id)arg1;
- (void)updateEditMode:(_Bool)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

