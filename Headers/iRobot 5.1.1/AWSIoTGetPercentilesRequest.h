//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSArray, NSString;

@interface AWSIoTGetPercentilesRequest : AWSRequest
{
    NSString *_aggregationField;
    NSString *_indexName;
    NSArray *_percents;
    NSString *_queryString;
    NSString *_queryVersion;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *queryVersion; // @synthesize queryVersion=_queryVersion;
@property(retain, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(retain, nonatomic) NSArray *percents; // @synthesize percents=_percents;
@property(retain, nonatomic) NSString *indexName; // @synthesize indexName=_indexName;
@property(retain, nonatomic) NSString *aggregationField; // @synthesize aggregationField=_aggregationField;
- (void).cxx_destruct;

@end

