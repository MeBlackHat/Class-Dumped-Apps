//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ACCSlidingTabbarProtocol-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ACCSlidingTabButton, ACCSlidingViewController, NSArray, NSMutableArray, NSString, UIColor, UIFont, UIScrollView;

@interface ACCSlidingTabbarView : UIView <UIScrollViewDelegate, ACCSlidingTabbarProtocol>
{
    _Bool _shouldShowTopLine;
    _Bool _shouldShowBottomLine;
    _Bool _shouldShowSelectionLine;
    _Bool _shouldShowButtonSeperationLine;
    _Bool _shouldUpdateSelectButtonLine;
    _Bool _enableSwitchAnimation;
    _Bool _needOptimizeTrackPointForVisibleRect;
    _Bool _scrollEnabled;
    ACCSlidingViewController *_slidingViewController;
    long long _selectedIndex;
    UIColor *_selectionLineColor;
    UIColor *_topBottomLineColor;
    double _selectionLineCornerRadius;
    CDUnknownBlockType _didEndDeceleratingBlock;
    UIScrollView *_scrollView;
    UIView *_lineView;
    NSMutableArray *_buttonArray;
    NSArray *_btnSeperationLineArray;
    long long _buttonStyle;
    ACCSlidingTabButton *_selectedButton;
    UIView *_topLineView;
    UIView *_bottomLineView;
    double _titlePadding;
    double _titleMinLength;
    double _widthBoundary;
    long long _arrowIndexForImageStyle;
    NSString *_arrowSeparatorTitleString;
    double _separatorViewWidth;
    UIView *_arrowSeparator;
    UIFont *_normalFont;
    UIFont *_selectedFont;
    struct CGSize _selectionLineSize;
    struct UIEdgeInsets _contentInset;
    struct CGRect _visibleRect;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
@property(retain, nonatomic) UIView *arrowSeparator; // @synthesize arrowSeparator=_arrowSeparator;
@property(nonatomic) double separatorViewWidth; // @synthesize separatorViewWidth=_separatorViewWidth;
@property(copy, nonatomic) NSString *arrowSeparatorTitleString; // @synthesize arrowSeparatorTitleString=_arrowSeparatorTitleString;
@property(nonatomic) long long arrowIndexForImageStyle; // @synthesize arrowIndexForImageStyle=_arrowIndexForImageStyle;
@property(nonatomic) double widthBoundary; // @synthesize widthBoundary=_widthBoundary;
@property(nonatomic) double titleMinLength; // @synthesize titleMinLength=_titleMinLength;
@property(nonatomic) double titlePadding; // @synthesize titlePadding=_titlePadding;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) ACCSlidingTabButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) NSArray *btnSeperationLineArray; // @synthesize btnSeperationLineArray=_btnSeperationLineArray;
@property(retain, nonatomic) NSMutableArray *buttonArray; // @synthesize buttonArray=_buttonArray;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(copy, nonatomic) CDUnknownBlockType didEndDeceleratingBlock; // @synthesize didEndDeceleratingBlock=_didEndDeceleratingBlock;
@property(nonatomic) _Bool needOptimizeTrackPointForVisibleRect; // @synthesize needOptimizeTrackPointForVisibleRect=_needOptimizeTrackPointForVisibleRect;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) _Bool enableSwitchAnimation; // @synthesize enableSwitchAnimation=_enableSwitchAnimation;
@property(nonatomic) double selectionLineCornerRadius; // @synthesize selectionLineCornerRadius=_selectionLineCornerRadius;
@property(nonatomic) struct CGSize selectionLineSize; // @synthesize selectionLineSize=_selectionLineSize;
@property(nonatomic) _Bool shouldUpdateSelectButtonLine; // @synthesize shouldUpdateSelectButtonLine=_shouldUpdateSelectButtonLine;
@property(retain, nonatomic) UIColor *topBottomLineColor; // @synthesize topBottomLineColor=_topBottomLineColor;
@property(retain, nonatomic) UIColor *selectionLineColor; // @synthesize selectionLineColor=_selectionLineColor;
@property(nonatomic) _Bool shouldShowButtonSeperationLine; // @synthesize shouldShowButtonSeperationLine=_shouldShowButtonSeperationLine;
@property(nonatomic) _Bool shouldShowSelectionLine; // @synthesize shouldShowSelectionLine=_shouldShowSelectionLine;
@property(nonatomic) _Bool shouldShowBottomLine; // @synthesize shouldShowBottomLine=_shouldShowBottomLine;
@property(nonatomic) _Bool shouldShowTopLine; // @synthesize shouldShowTopLine=_shouldShowTopLine;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak ACCSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
- (void)setBottomLineColor:(id)arg1;
- (void)setTopLineColor:(id)arg1;
- (_Bool)isRect:(struct CGRect)arg1 equalToRect:(struct CGRect)arg2;
- (void)scrollViewContentOffsetDidEndChanging;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (double)tabButtonWidth;
- (double)totalButtonWidth;
- (double)getMaxButtonWidth;
- (void)configureButtonsFrame:(id)arg1;
- (void)updateSelectedLineFrame;
- (void)updateIrregularTextFrameWhenScroll:(id)arg1 animated:(_Bool)arg2;
- (struct CGPoint)transformScaleWithButton:(id)arg1;
- (void)slidingControllerDidScroll:(id)arg1;
- (void)tabButtonClicked:(id)arg1;
- (void)setupSubviews;
- (id)seperationLinesWithCount:(long long)arg1;
- (id)buttonsWithDataArray:(id)arg1 selectedDataArray:(id)arg2;
- (_Bool)isButtonDotShownOnIndex:(long long)arg1;
- (void)showButtonDot:(_Bool)arg1 index:(long long)arg2 color:(id)arg3;
- (void)configureText:(id)arg1 image:(id)arg2 selectedText:(id)arg3 selectedImage:(id)arg4 index:(long long)arg5;
- (void)configureButtonTextFont:(id)arg1 hasShadow:(_Bool)arg2;
- (void)configureTitleMinLength:(double)arg1;
- (void)configureTitlePadding:(double)arg1;
- (void)configureButtonTextFont:(id)arg1 selectedFont:(id)arg2;
- (void)configureButtonTextColor:(id)arg1 selectedTextColor:(id)arg2;
- (void)insertAtFrontWithButtonImage:(id)arg1 title:(id)arg2;
- (void)insertAtFrontWithButtonImage:(id)arg1;
- (void)replaceButtonImgae:(id)arg1 title:(id)arg2 atIndex:(long long)arg3;
- (void)replaceButtonImage:(id)arg1 atIndex:(long long)arg2;
- (void)insertSeparatorArrowAndTitle:(id)arg1 forImageStyleAtIndex:(long long)arg2;
- (void)resetDataArray:(id)arg1 selectedDataArray:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2 dataArray:(id)arg3 selectedDataArray:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 buttonStyle:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

