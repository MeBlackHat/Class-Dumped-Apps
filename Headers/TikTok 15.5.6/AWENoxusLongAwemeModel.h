//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeStatisticsModel, AWENoxusEpisodeInfoModel, AWENoxusExtraInfoModel, AWEVideoModel, NSString;

@interface AWENoxusLongAwemeModel : AWEBaseApiModel
{
    NSString *_awemeId;
    AWEVideoModel *_video;
    AWEAwemeStatisticsModel *_statistics;
    AWENoxusEpisodeInfoModel *_episodeInfo;
    AWENoxusExtraInfoModel *_extraInfo;
}

+ (id)statisticsJSONTransformer;
+ (id)videoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWENoxusExtraInfoModel *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) AWENoxusEpisodeInfoModel *episodeInfo; // @synthesize episodeInfo=_episodeInfo;
@property(retain, nonatomic) AWEAwemeStatisticsModel *statistics; // @synthesize statistics=_statistics;
@property(retain, nonatomic) AWEVideoModel *video; // @synthesize video=_video;
@property(copy, nonatomic) NSString *awemeId; // @synthesize awemeId=_awemeId;
- (void).cxx_destruct;

@end

