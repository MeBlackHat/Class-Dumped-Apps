//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber, NSString;

@interface AWEIMBlockListResponse : AWEBaseApiModel
{
    NSArray *_blockList;
    NSNumber *_hasMore;
    NSNumber *_count;
    NSString *_hotsoonText;
    long long _hotsoonFilterCount;
    long long _hotsoonHasMore;
}

+ (id)blockListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long hotsoonHasMore; // @synthesize hotsoonHasMore=_hotsoonHasMore;
@property(nonatomic) long long hotsoonFilterCount; // @synthesize hotsoonFilterCount=_hotsoonFilterCount;
@property(copy, nonatomic) NSString *hotsoonText; // @synthesize hotsoonText=_hotsoonText;
@property(retain, nonatomic) NSNumber *count; // @synthesize count=_count;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *blockList; // @synthesize blockList=_blockList;

@end

