//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>
#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class NSString, YTFormattedStringLabel, YTISharePanelTitleSupportedRenderers;
@protocol YTResponder;

@interface YTShareTitleView : UIView <YTFormattedStringLabelDelegate, YTPageStyling, YTResponder>
{
    YTISharePanelTitleSupportedRenderers *_titleSupportedRenderers;
    YTFormattedStringLabel *_title;
    id <YTResponder> _parentResponder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)setRenderer:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

