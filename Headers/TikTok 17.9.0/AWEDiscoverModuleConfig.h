//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface AWEDiscoverModuleConfig : NSObject
{
}

+ (id)sharedInstance;
@property(readonly, copy, nonatomic) NSDictionary *bannerRequestParams;
@property(readonly, nonatomic) struct UIEdgeInsets bannerViewMargin;
@property(readonly, nonatomic) _Bool isNewBannerType;
@property(readonly, nonatomic) double bannerWidth;

@end

