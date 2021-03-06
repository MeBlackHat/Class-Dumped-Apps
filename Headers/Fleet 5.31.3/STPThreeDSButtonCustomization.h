//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class STDSButtonCustomization, UIColor, UIFont;

@interface STPThreeDSButtonCustomization : NSObject
{
    STDSButtonCustomization *_buttonCustomization;
}

+ (id)defaultSettingsForButtonType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) STDSButtonCustomization *buttonCustomization; // @synthesize buttonCustomization=_buttonCustomization;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long titleStyle;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIColor *backgroundColor;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;

@end

