//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GBTTouchControllerDelegate-Protocol.h"
#import "HUBFontManagerCachedFontAndAttributesRefresher-Protocol.h"
#import "SmartMailDetailedLayoutWidgetView-Protocol.h"

@class GBTTouchController, NSString, UILabel;
@protocol GBTSmartMailInteractionSupport, JBTGenericSmartMailTitleDescriptionWidget;

@interface GBTSmartMailTitleDescriptionWidgetView : UIView <HUBFontManagerCachedFontAndAttributesRefresher, GBTTouchControllerDelegate, SmartMailDetailedLayoutWidgetView>
{
    NSString *_accessibilityLabel;
    UILabel *_descriptionLabel;
    GBTTouchController *_inkTC;
    UILabel *_titleLabel;
    id <JBTGenericSmartMailTitleDescriptionWidget> _widget;
    id <GBTSmartMailInteractionSupport> _smartMailDelegate;
}

+ (void)refreshCachedFontAndAttributes;
+ (double)heightWithWidget:(id)arg1 width:(double)arg2 collapsed:(_Bool)arg3;
+ (void)initialize;
+ (double)textLeftOffset;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GBTSmartMailInteractionSupport> smartMailDelegate; // @synthesize smartMailDelegate=_smartMailDelegate;
- (void)handleLongPress:(id)arg1;
- (void)tapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)accessibilityLabel;
- (id)initWithWidget:(id)arg1;
- (void)createSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

