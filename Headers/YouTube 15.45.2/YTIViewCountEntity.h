//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, YTIFormattedString;

@interface YTIViewCountEntity : GPBMessage
{
}

+ (id)descriptor;
+ (Class)entityClass;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *extraShortViewCount; // @dynamic extraShortViewCount;
@property(nonatomic) _Bool hasExtraShortViewCount; // @dynamic hasExtraShortViewCount;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasShortViewCount; // @dynamic hasShortViewCount;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) YTIFormattedString *shortViewCount; // @dynamic shortViewCount;
@property(retain, nonatomic) YTIFormattedString *viewCount; // @dynamic viewCount;

@end

