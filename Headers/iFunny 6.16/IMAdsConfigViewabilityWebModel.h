//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

@interface IMAdsConfigViewabilityWebModel : IMJSONModel
{
    long long _impressionMinPercentageViewed;
    long long _impressionPollIntervalMillis;
}

@property(nonatomic) long long impressionPollIntervalMillis; // @synthesize impressionPollIntervalMillis=_impressionPollIntervalMillis;
@property(nonatomic) long long impressionMinPercentageViewed; // @synthesize impressionMinPercentageViewed=_impressionMinPercentageViewed;
- (_Bool)validate:(id *)arg1;
- (id)init;

@end

