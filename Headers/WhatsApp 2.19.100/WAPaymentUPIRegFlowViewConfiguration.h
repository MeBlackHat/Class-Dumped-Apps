//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface WAPaymentUPIRegFlowViewConfiguration : NSObject
{
    NSString *_name;
    NSString *_navigationBarTitle;
    unsigned long long _leftNavigationItemType;
    NSString *_titleText;
    NSString *_subtitleText;
    NSString *_buttonTitle;
    NSString *_secondaryButtonTitle;
    UIImage *_illustration;
    UIImage *_logoImage;
    NSDictionary *_linkAssociations;
}

@property(copy, nonatomic) NSDictionary *linkAssociations; // @synthesize linkAssociations=_linkAssociations;
@property(retain, nonatomic) UIImage *logoImage; // @synthesize logoImage=_logoImage;
@property(retain, nonatomic) UIImage *illustration; // @synthesize illustration=_illustration;
@property(copy, nonatomic) NSString *secondaryButtonTitle; // @synthesize secondaryButtonTitle=_secondaryButtonTitle;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) unsigned long long leftNavigationItemType; // @synthesize leftNavigationItemType=_leftNavigationItemType;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

