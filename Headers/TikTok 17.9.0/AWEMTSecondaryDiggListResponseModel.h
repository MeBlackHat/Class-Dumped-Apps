//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEMTSecondaryDiggListResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    long long _total;
    long long _maxCursor;
    long long _minCursor;
    NSArray *_diggInfos;
}

+ (id)diggInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *diggInfos; // @synthesize diggInfos=_diggInfos;
@property(nonatomic) long long minCursor; // @synthesize minCursor=_minCursor;
@property(nonatomic) long long maxCursor; // @synthesize maxCursor=_maxCursor;
@property(nonatomic) long long total; // @synthesize total=_total;

@end

