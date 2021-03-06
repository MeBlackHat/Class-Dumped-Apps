//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ASMNavigationInitiator-Protocol.h"

@class ASMImageView, UILabel;

@interface ASMPromptDescriptionBlockView : UIView <ASMNavigationInitiator>
{
    CDUnknownBlockType _navigateTo;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    ASMImageView *_imageView;
}

+ (id)viewWithBlock:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ASMImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType navigateTo; // @synthesize navigateTo=_navigateTo;
- (id)initWithBlock:(id)arg1;

@end

