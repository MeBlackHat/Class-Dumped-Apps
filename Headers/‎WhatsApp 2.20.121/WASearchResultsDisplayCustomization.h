//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface WASearchResultsDisplayCustomization : NSObject
{
    UIFont *_font;
    UIFont *_matchFont;
    UIColor *_defaultColor;
    UIColor *_dimmedColor;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *dimmedColor; // @synthesize dimmedColor=_dimmedColor;
@property(readonly, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(readonly, nonatomic) UIFont *matchFont; // @synthesize matchFont=_matchFont;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)initWithFont:(id)arg1 matchFont:(id)arg2 defaultColor:(id)arg3 dimmedColor:(id)arg4;

@end

