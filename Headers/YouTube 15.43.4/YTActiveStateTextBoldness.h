//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTActiveStateSettingsStoreableEntity-Protocol.h>

@class NSString, UIFont;

@interface YTActiveStateTextBoldness : NSObject <YTActiveStateSettingsStoreableEntity>
{
    _Bool _markedAsDisabled;
    double _storageDate;
    double _textBoldnessPercentageRangeValue;
    double _originalFontSize;
    double _originalFontWeight;
    UIFont *_originalFont;
}

+ (double)getFontWeight:(id)arg1;
+ (double)nextFontWeightFromFontWeight:(double)arg1;
+ (id)stringForFontWeight:(double)arg1;
+ (double)boldnessPercentageRangeValueForFontWeight:(double)arg1;
+ (double)fontWeightForBoldnessPercentageRangeValue:(double)arg1;
+ (double)maxBoldnessPercentageValue;
+ (double)minBoldnessPercentageValue;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(nonatomic) double originalFontWeight; // @synthesize originalFontWeight=_originalFontWeight;
@property(nonatomic) double originalFontSize; // @synthesize originalFontSize=_originalFontSize;
@property(nonatomic) double textBoldnessPercentageRangeValue; // @synthesize textBoldnessPercentageRangeValue=_textBoldnessPercentageRangeValue;
@property(nonatomic) double storageDate; // @synthesize storageDate=_storageDate;
@property(nonatomic) _Bool markedAsDisabled; // @synthesize markedAsDisabled=_markedAsDisabled;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalFont:(id)arg1;
- (id)initWithBoldnessPercentageRange:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

