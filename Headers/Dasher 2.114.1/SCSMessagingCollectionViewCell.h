//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, SCSMessageTextView, UIColor, UIFont, UIImageView, UITextView, UIView;

@interface SCSMessagingCollectionViewCell : UICollectionViewCell
{
    _Bool _alternateBackGroundColor;
    UIColor *_bubbleColor;
    UIColor *_bubbleColorAlternate;
    UIView *_bubbleView;
    UIView *_customView;
    SCSMessageTextView *_bubbleTextView;
    UITextView *_timestampTextView;
    UITextView *_upperInfoTextView;
    UITextView *_lowerInfoTextView;
    UIImageView *_avatarView;
    UIView *_avatarWrapperView;
    UIView *_customViewContainer;
    NSLayoutConstraint *_textViewHeight;
    NSLayoutConstraint *_textViewWidth;
    NSLayoutConstraint *_customViewHeight;
    NSLayoutConstraint *_timestampHeight;
    NSLayoutConstraint *_upperInfoTextViewHeight;
    NSLayoutConstraint *_upperInfoTextViewWidth;
    NSLayoutConstraint *_lowerInfoTextViewHeight;
    NSLayoutConstraint *_lowerInfoTextViewWidth;
    NSLayoutConstraint *_avatarWidth;
    NSLayoutConstraint *_avatarHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *avatarHeight; // @synthesize avatarHeight=_avatarHeight;
@property(nonatomic) __weak NSLayoutConstraint *avatarWidth; // @synthesize avatarWidth=_avatarWidth;
@property(nonatomic) __weak NSLayoutConstraint *lowerInfoTextViewWidth; // @synthesize lowerInfoTextViewWidth=_lowerInfoTextViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *lowerInfoTextViewHeight; // @synthesize lowerInfoTextViewHeight=_lowerInfoTextViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *upperInfoTextViewWidth; // @synthesize upperInfoTextViewWidth=_upperInfoTextViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *upperInfoTextViewHeight; // @synthesize upperInfoTextViewHeight=_upperInfoTextViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *timestampHeight; // @synthesize timestampHeight=_timestampHeight;
@property(nonatomic) __weak NSLayoutConstraint *customViewHeight; // @synthesize customViewHeight=_customViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *textViewWidth; // @synthesize textViewWidth=_textViewWidth;
@property(nonatomic) __weak NSLayoutConstraint *textViewHeight; // @synthesize textViewHeight=_textViewHeight;
@property(nonatomic) _Bool alternateBackGroundColor; // @synthesize alternateBackGroundColor=_alternateBackGroundColor;
@property(retain, nonatomic) UIView *customViewContainer; // @synthesize customViewContainer=_customViewContainer;
@property(retain, nonatomic) UIView *avatarWrapperView; // @synthesize avatarWrapperView=_avatarWrapperView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UITextView *lowerInfoTextView; // @synthesize lowerInfoTextView=_lowerInfoTextView;
@property(retain, nonatomic) UITextView *upperInfoTextView; // @synthesize upperInfoTextView=_upperInfoTextView;
@property(retain, nonatomic) UITextView *timestampTextView; // @synthesize timestampTextView=_timestampTextView;
@property(retain, nonatomic) SCSMessageTextView *bubbleTextView; // @synthesize bubbleTextView=_bubbleTextView;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *lowerInfoTextColor;
@property(retain, nonatomic) UIFont *lowerInfoFont;
@property(retain, nonatomic) UIColor *upperInfoTextColor;
@property(retain, nonatomic) UIFont *upperInfoFont;
@property(retain, nonatomic) UIColor *timestampTextColor;
@property(retain, nonatomic) UIFont *timestampFont;
@property(retain, nonatomic) UIColor *bubbleColorAlternate; // @synthesize bubbleColorAlternate=_bubbleColorAlternate;
@property(retain, nonatomic) UIColor *bubbleColor; // @synthesize bubbleColor=_bubbleColor;
- (void)setCellDefaultMessageColor;
- (void)setCellAlternateMessageColor;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)copy:(id)arg1;
- (void)updateConstraints;
- (void)setupViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

