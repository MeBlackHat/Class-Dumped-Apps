//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, PoiBannerExtraStruct, PoiOptionStruct, UrlStruct;

@interface PoiBannerStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PoiBannerExtraStruct *bannerExtra; // @dynamic bannerExtra;
@property(retain, nonatomic) UrlStruct *bannerURL; // @dynamic bannerURL;
@property(copy, nonatomic) NSString *bid; // @dynamic bid;
@property(retain, nonatomic) PoiOptionStruct *businessAreaOption; // @dynamic businessAreaOption;
@property(retain, nonatomic) PoiOptionStruct *classOption; // @dynamic classOption;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasBannerExtra; // @dynamic hasBannerExtra;
@property(nonatomic) _Bool hasBannerURL; // @dynamic hasBannerURL;
@property(nonatomic) _Bool hasBid; // @dynamic hasBid;
@property(nonatomic) _Bool hasBusinessAreaOption; // @dynamic hasBusinessAreaOption;
@property(nonatomic) _Bool hasClassOption; // @dynamic hasClassOption;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasNotchBannerURL; // @dynamic hasNotchBannerURL;
@property(nonatomic) _Bool hasSchema; // @dynamic hasSchema;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) UrlStruct *notchBannerURL; // @dynamic notchBannerURL;
@property(copy, nonatomic) NSString *schema; // @dynamic schema;
@property(retain, nonatomic) NSMutableArray *tagListArray; // @dynamic tagListArray;
@property(readonly, nonatomic) unsigned long long tagListArray_Count; // @dynamic tagListArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) int width; // @dynamic width;

@end

