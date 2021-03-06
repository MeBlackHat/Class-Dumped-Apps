//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRChinaSearchBarDisplayParams, AIRExploreSearchParams, NSNumber, NSString;

@interface AIRCurrentCity : AIRModel
{
    NSString *_name;
    NSString *_localizedName;
    NSString *_placeId;
    NSNumber *_lat;
    NSNumber *_lng;
    NSNumber *_isSameCity;
    NSNumber *_isChina;
    NSString *_nearbyQuery;
    AIRExploreSearchParams *_searchParams;
    AIRChinaSearchBarDisplayParams *_searchBarParams;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRChinaSearchBarDisplayParams *searchBarParams; // @synthesize searchBarParams=_searchBarParams;
@property(readonly, copy, nonatomic) AIRExploreSearchParams *searchParams; // @synthesize searchParams=_searchParams;
@property(readonly, copy, nonatomic) NSString *nearbyQuery; // @synthesize nearbyQuery=_nearbyQuery;
@property(readonly, copy, nonatomic) NSNumber *isChina; // @synthesize isChina=_isChina;
@property(readonly, copy, nonatomic) NSNumber *isSameCity; // @synthesize isSameCity=_isSameCity;
@property(readonly, copy, nonatomic) NSNumber *lng; // @synthesize lng=_lng;
@property(readonly, copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
@property(readonly, copy, nonatomic) NSString *placeId; // @synthesize placeId=_placeId;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;

@end

