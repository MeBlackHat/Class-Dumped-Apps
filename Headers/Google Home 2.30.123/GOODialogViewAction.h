//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIButton, UIView;

@interface GOODialogViewAction : NSObject
{
    int _style;
    UIButton *_button;
    UIView *_horizontalDivider;
    UIView *_verticalDivider;
    CDUnknownBlockType _block;
    struct UIEdgeInsets _insets;
}

- (void).cxx_destruct;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) UIView *verticalDivider; // @synthesize verticalDivider=_verticalDivider;
@property(retain, nonatomic) UIView *horizontalDivider; // @synthesize horizontalDivider=_horizontalDivider;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;

@end

