//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface TKNHomeGroupItemResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    long long _group;
    long long _total;
    unsigned long long _minTime;
    unsigned long long _maxTime;
    unsigned long long _lastReadTime;
    long long _listType;
    NSArray *_noticeList;
}

+ (id)listTypeJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)noticeListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *noticeList; // @synthesize noticeList=_noticeList;
@property(nonatomic) long long listType; // @synthesize listType=_listType;
@property(nonatomic) unsigned long long lastReadTime; // @synthesize lastReadTime=_lastReadTime;
@property(nonatomic) unsigned long long maxTime; // @synthesize maxTime=_maxTime;
@property(nonatomic) unsigned long long minTime; // @synthesize minTime=_minTime;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long group; // @synthesize group=_group;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;

@end

