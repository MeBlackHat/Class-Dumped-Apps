//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GOOGRTCMetricsSampleInfo : NSObject
{
    int _min;
    int _max;
    int _bucketCount;
    NSString *_name;
    NSDictionary *_samples;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *samples; // @synthesize samples=_samples;
@property(readonly, nonatomic) int bucketCount; // @synthesize bucketCount=_bucketCount;
@property(readonly, nonatomic) int max; // @synthesize max=_max;
@property(readonly, nonatomic) int min; // @synthesize min=_min;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithNativeSampleInfo:(const struct SampleInfo *)arg1;

@end

