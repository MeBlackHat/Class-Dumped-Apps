//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIStackView;

@interface A9VSFezToolbar : UIView
{
    UIStackView *_stackView;
}

+ (id)flexibleWidthItem;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
- (void).cxx_destruct;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(nonatomic) double itemSpacing;
@property(readonly, nonatomic) UIView *contentView;

@end

