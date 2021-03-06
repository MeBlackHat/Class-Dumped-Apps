//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOTextContentView.h>

#import <drive_extension_framework/GDKThemable-Protocol.h>

@class GDKActionPanelItemCVO, NSString, UILabel, UITraitCollection;

@interface GDKActionPanelItemCV : GOOTextContentView <GDKThemable>
{
    UILabel *_actionItemLabel;
}

+ (id)textFont;
+ (struct UIEdgeInsets)padding;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *actionItemLabel; // @synthesize actionItemLabel=_actionItemLabel;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityValue;
- (void)applyTheme:(id)arg1;
- (id)theme;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateStyleWithEnabled:(_Bool)arg1;
- (_Bool)goo_shouldRelayoutSubviewsForRTL;
- (void)updateViewWithObject:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) GDKActionPanelItemCVO *object; // @dynamic object;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UITraitCollection *traitCollection;

@end

