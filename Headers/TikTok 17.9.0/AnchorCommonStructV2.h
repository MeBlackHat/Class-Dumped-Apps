//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, UrlStructV2;

@interface AnchorCommonStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *deepLink; // @dynamic deepLink;
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(copy, nonatomic) NSString *extra; // @dynamic extra;
@property(nonatomic) int generalType; // @dynamic generalType;
@property(nonatomic) _Bool hasDeepLink; // @dynamic hasDeepLink;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasGeneralType; // @dynamic hasGeneralType;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasKeyword; // @dynamic hasKeyword;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLogExtra; // @dynamic hasLogExtra;
@property(nonatomic) _Bool hasSchema; // @dynamic hasSchema;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasUniversalLink; // @dynamic hasUniversalLink;
@property(retain, nonatomic) UrlStructV2 *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *keyword; // @dynamic keyword;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(copy, nonatomic) NSString *logExtra; // @dynamic logExtra;
@property(copy, nonatomic) NSString *schema; // @dynamic schema;
@property(retain, nonatomic) UrlStructV2 *thumbnail; // @dynamic thumbnail;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *universalLink; // @dynamic universalLink;

@end

