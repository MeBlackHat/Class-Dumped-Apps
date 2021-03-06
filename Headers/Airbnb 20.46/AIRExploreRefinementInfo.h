//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRExploreSearchParams, AIRListingPhoto, NSString;

@interface AIRExploreRefinementInfo : AIRModel
{
    NSString *_ctaType;
    AIRExploreSearchParams *_searchParams;
    NSString *_title;
    NSString *_subtitle;
    NSString *_detailText;
    AIRListingPhoto *_image;
    NSString *_rawStyle;
    NSString *_ctaUrl;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *ctaUrl; // @synthesize ctaUrl=_ctaUrl;
@property(readonly, copy, nonatomic) NSString *rawStyle; // @synthesize rawStyle=_rawStyle;
@property(readonly, copy, nonatomic) AIRListingPhoto *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSString *ctaType; // @synthesize ctaType=_ctaType;

@end

