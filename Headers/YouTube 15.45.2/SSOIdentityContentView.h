//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GOOTextContentView.h>

@class SSOIdentityContentViewObject;

@interface SSOIdentityContentView : GOOTextContentView
{
    SSOIdentityContentViewObject *_identityObject;
}

+ (double)minimumTextFontSize;
+ (struct UIEdgeInsets)textInsetsFromObject:(id)arg1;
+ (long long)numberOfDetailTextLines;
+ (id)imageFromObject:(id)arg1;
+ (id)detailTextFromObject:(id)arg1;
+ (id)textFromObject:(id)arg1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateTextLabelVisibility:(id)arg1;
- (void)updateViewWithObject:(id)arg1;
- (void)profileDidUpdate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

