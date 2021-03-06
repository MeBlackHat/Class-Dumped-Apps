//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QTMColorGroup, UIColor;

@interface ASTImageButtonItem : NSObject
{
    long long _iconType;
    NSString *_imageName;
    UIColor *_color;
    QTMColorGroup *_colorGroup;
    id _target;
    SEL _action;
    NSString *_featureHighlightTitle;
    NSString *_featureHighlightSubtitle;
    NSString *_featureHighlightAccessibilityID;
}

+ (id)itemWithIconType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
+ (id)itemWithImageName:(id)arg1 color:(id)arg2 colorGroup:(id)arg3 target:(id)arg4 action:(SEL)arg5;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *featureHighlightAccessibilityID; // @synthesize featureHighlightAccessibilityID=_featureHighlightAccessibilityID;
@property(copy, nonatomic) NSString *featureHighlightSubtitle; // @synthesize featureHighlightSubtitle=_featureHighlightSubtitle;
@property(copy, nonatomic) NSString *featureHighlightTitle; // @synthesize featureHighlightTitle=_featureHighlightTitle;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;

@end

