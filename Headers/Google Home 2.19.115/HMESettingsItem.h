//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, UIColor, UIImage;

@interface HMESettingsItem : NSObject
{
    _Bool _isGreyedOut;
    UIImage *_image;
    UIColor *_imageTintColor;
    NSString *_title;
    NSString *_detail;
    NSAttributedString *_attributedDetail;
    long long _attributedDetailNumberOfLines;
    CDUnknownBlockType _action;
    unsigned long long _accessoryType;
    Class _cellClass;
    NSString *_accessibilityIdentifier;
}

@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) _Bool isGreyedOut; // @synthesize isGreyedOut=_isGreyedOut;
@property(readonly, nonatomic) Class cellClass; // @synthesize cellClass=_cellClass;
@property(readonly, nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(readonly, copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long attributedDetailNumberOfLines; // @synthesize attributedDetailNumberOfLines=_attributedDetailNumberOfLines;
@property(copy, nonatomic) NSAttributedString *attributedDetail; // @synthesize attributedDetail=_attributedDetail;
@property(readonly, copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 action:(CDUnknownBlockType)arg3;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 action:(CDUnknownBlockType)arg3 cellClass:(Class)arg4;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 imageTintColor:(id)arg4 accessoryType:(unsigned long long)arg5 action:(CDUnknownBlockType)arg6;
- (id)initWithTitle:(id)arg1 detail:(id)arg2 image:(id)arg3 imageTintColor:(id)arg4 accessoryType:(unsigned long long)arg5 action:(CDUnknownBlockType)arg6 cellClass:(Class)arg7 accessibilityIdentifier:(id)arg8;

@end

