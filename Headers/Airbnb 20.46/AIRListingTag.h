//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString, NSURL, UIColor;

@interface AIRListingTag : AIRModel
{
    NSString *_name;
    NSString *_type;
    NSString *_relatedSectionType;
    NSString *_iconName;
    UIColor *_backgroundColor;
    UIColor *_fontColor;
    UIColor *_iconColor;
    NSURL *_iconURL;
}

+ (id)customKeyPathMapping;
+ (id)customTransformers;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(readonly, copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, copy, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, copy, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(readonly, copy, nonatomic) NSString *relatedSectionType; // @synthesize relatedSectionType=_relatedSectionType;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

