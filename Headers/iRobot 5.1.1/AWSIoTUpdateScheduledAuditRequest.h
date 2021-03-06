//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSArray, NSString;

@interface AWSIoTUpdateScheduledAuditRequest : AWSRequest
{
    NSString *_dayOfMonth;
    long long _dayOfWeek;
    long long _frequency;
    NSString *_scheduledAuditName;
    NSArray *_targetCheckNames;
}

+ (id)frequencyJSONTransformer;
+ (id)dayOfWeekJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *targetCheckNames; // @synthesize targetCheckNames=_targetCheckNames;
@property(retain, nonatomic) NSString *scheduledAuditName; // @synthesize scheduledAuditName=_scheduledAuditName;
@property(nonatomic) long long frequency; // @synthesize frequency=_frequency;
@property(nonatomic) long long dayOfWeek; // @synthesize dayOfWeek=_dayOfWeek;
@property(retain, nonatomic) NSString *dayOfMonth; // @synthesize dayOfMonth=_dayOfMonth;
- (void).cxx_destruct;

@end

