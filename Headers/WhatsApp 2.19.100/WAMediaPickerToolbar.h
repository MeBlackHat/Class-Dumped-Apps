//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIToolbar.h>

@class UIButton, UIImageView;

@interface WAMediaPickerToolbar : UIToolbar
{
    UIImageView *_middleSeparatorView;
    UIButton *_insertItemButton;
    UIButton *_insertGIFButton;
}

@property(readonly, nonatomic) UIButton *insertGIFButton; // @synthesize insertGIFButton=_insertGIFButton;
@property(readonly, nonatomic) UIButton *insertItemButton; // @synthesize insertItemButton=_insertItemButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addSubview:(id)arg1;
- (_Bool)viewIsOurView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

